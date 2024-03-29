/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "client/ClientRPC.h"
#include "client/Client.h"
#include "client/AsyncTask.h"
#include "utils/Typedefs.h"
#include "eProsima_cpp/eProsimaMacros.h"
#include "exceptions/InitializeException.h"

#include "boost/config/user.hpp"
#include "boost/thread/mutex.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"
#include <malloc.h>

static const char* const CLASS_NAME = "eProsima::RPCDDS::ClientRPC";

namespace eProsima
{
    namespace RPCDDS
    {

        ClientRPC::ClientRPC(const char *rpcName, const char *requestTypeName, const char *replyTypeName, Client *client) :
            m_client(client), m_requestPublisher(NULL),
            m_replySubscriber(NULL), m_requestTopic(NULL), m_requestDataWriter(NULL), m_replyFilter(NULL), m_numSec(0),
			m_queryPool(NULL), m_queriesInUseLimiter(QUERY_POOL_LENGTH)
        {
            const char* const METHOD_NAME = "ClientRPC";
            std::string errorMessage;

            m_mutex =  new boost::mutex();

            if(m_mutex != NULL)
            {
                if(createEntities(client->getParticipant(), rpcName, requestTypeName, replyTypeName))
                {
					if(enableEntities())
					{
						// Initialize query pool if it's not a oneway function.
						if(m_replySubscriber == NULL || initQueryPool() == 0)
						{
							strncpy(m_rpcName, rpcName, 50);
							return;
						}
						else
							errorMessage = "initialize the query pool";
					}
					else
					{
						errorMessage = "Cannot enable the DDS entities";
					}
                }
                else
                {
                    errorMessage = "Cannot create the DDS entities";
                }
            }
            else
            {
                errorMessage = "Cannot create the mutex";
            }

            printf("ERROR<%s::%s>: %s\n", CLASS_NAME, METHOD_NAME, errorMessage.c_str());
            throw InitializeException(std::move(errorMessage));
        }

        ClientRPC::~ClientRPC()
        {
            if(m_mutex != NULL)
            {
                delete m_mutex;
                m_mutex = NULL;
            }

			// Its not a oneway function.
			if(m_replySubscriber != NULL)
				finalizeQueryPool();

			// if not operation oneway.
			if(m_replySubscriber != NULL)
			{
				if(m_replyDataReader != NULL)
					m_replySubscriber->delete_datareader(m_replyDataReader);
				if(m_replyFilter != NULL)
					m_client->getParticipant()->delete_contentfilteredtopic(m_replyFilter);
				if(m_replyTopic != NULL)
					m_client->getParticipant()->delete_topic(m_replyTopic);

                m_client->getParticipant()->delete_subscriber(m_replySubscriber);
			}
            if(m_requestDataWriter != NULL)
                m_requestPublisher->delete_datawriter(m_requestDataWriter);
            if(m_requestTopic)
                m_client->getParticipant()->delete_topic(m_requestTopic);
            if(m_requestPublisher != NULL)
                m_client->getParticipant()->delete_publisher(m_requestPublisher);
        }

        ReturnMessage ClientRPC::execute(void *request, void *reply, long timeout)
        {
            const char* const METHOD_NAME = "execute";
            ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;
            DDS::WaitSet *waitSet = NULL;
            DDS::ReturnCode_t retCode;
            boost::posix_time::time_duration tTimeout = boost::posix_time::milliseconds(timeout);
            unsigned int numSec = 0;
            char value[50];
			void *auxPointerToRequest = request;
			char **auxPointerToRemoteServiceName = NULL;
			DDS::QueryCondition *query = NULL;

            if(request != NULL)
            {
                *(unsigned int*)auxPointerToRequest = m_clientId[0];
				((unsigned int*)auxPointerToRequest)[1] = m_clientId[1];
				((unsigned int*)auxPointerToRequest)[2] = m_clientId[2];
				((unsigned int*)auxPointerToRequest)[3] = m_clientId[3];
				auxPointerToRequest = (unsigned int*)auxPointerToRequest + 4;
                *(char**)auxPointerToRequest = (char*)m_client->getRemoteServiceName().c_str();
				auxPointerToRemoteServiceName = (char**)auxPointerToRequest;
				auxPointerToRequest = (char**)auxPointerToRequest + 1;

                m_mutex->lock();
                /* Thread safe num_Sec handling */
                *(unsigned int*)auxPointerToRequest = m_numSec;
                numSec = m_numSec;
                m_numSec++;

				// Take a free query condition.
				// Its not a oneway function.
				if(m_replySubscriber != NULL)
					query = getFreeQueryFromPool();
                m_mutex->unlock();

				if(m_replySubscriber == NULL || query != NULL)
				{
					waitSet = new DDS::WaitSet();

					if(waitSet != NULL)
					{
						if(checkServerConnection(waitSet, timeout) == OPERATION_SUCCESSFUL)
						{
							if(write(request) == DDS::RETCODE_OK)
							{
								// Its not a oneway function.
								if(m_replySubscriber != NULL)
								{
									DDS::StringSeq stringSeq(1);

									stringSeq.length(1);
									SNPRINTF(value, 50, "%u", numSec);
									stringSeq[0] = strdup(value);
									retCode = query->set_query_parameters(stringSeq);

									if(retCode == DDS::RETCODE_OK)
									{
										retCode = waitSet->attach_condition(query);

										if(retCode == DDS::RETCODE_OK)
										{
											DDS::ConditionSeq conds;
											DDS_TIMEOUT(ddsTimeout, tTimeout);

											retCode = waitSet->wait(conds, ddsTimeout);

											if(retCode == DDS::RETCODE_OK)
											{
												if(conds.length() == 1 && conds[0] == query)
												{
													returnedValue = takeReply(reply, query);
												}
											}
											else if(retCode == DDS::RETCODE_TIMEOUT)
											{
												printf("WARNING <%s::%s>: Time out expiration.\n", CLASS_NAME, METHOD_NAME);
												returnedValue = SERVER_TIMEOUT;
											}

											waitSet->detach_condition(query);
										}
										else
										{
											printf("ERROR <%s::%s>: Cannot attach query condition\n", CLASS_NAME, METHOD_NAME);
										}
									}
									else
									{
										printf("ERROR <%s::%s>: Cannot set the sequence number to the query condition\n", CLASS_NAME, METHOD_NAME);
									}
								}
								else
								{
									returnedValue = OPERATION_SUCCESSFUL;
								}
							}
							else
							{
								printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);
							}
						}
						else
						{
							printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
							returnedValue = NO_SERVER;
						}

						delete waitSet;
					}
					else
					{
						printf("ERROR <%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
					}

					// Its not a oneway function.
					if(m_replySubscriber != NULL)
					{
						m_mutex->lock();
						returnUsedQueryToPool(query);
						m_mutex->unlock();
					}
				}
				else
				{
					printf("ERROR <%s::%s>: Cannot get a free query condition\n", CLASS_NAME, METHOD_NAME);
				}

                // Set the remoteServiceName to NULL.
				*auxPointerToRemoteServiceName = NULL;
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameter(data)\n", CLASS_NAME, METHOD_NAME);
            }

            return returnedValue;
        }

        ReturnMessage ClientRPC::executeAsync(void *request, AsyncTask *task, long timeout)
        {
            const char* const METHOD_NAME = "executeAsync";
            ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;
            DDS::WaitSet *waitSet = NULL;
            unsigned int numSec = 0;
            char value[50];
			void *auxPointerToRequest = request;
			char **auxPointerToRemoteServiceName = NULL;
			DDS::QueryCondition *query = NULL;

            if(request != NULL && task != NULL)
            {
				*(unsigned int*)auxPointerToRequest = m_clientId[0];
				((unsigned int*)auxPointerToRequest)[1] = m_clientId[1];
				((unsigned int*)auxPointerToRequest)[2] = m_clientId[2];
				((unsigned int*)auxPointerToRequest)[3] = m_clientId[3];
				auxPointerToRequest = (unsigned int*)auxPointerToRequest + 4;
                *(char**)auxPointerToRequest = (char*)m_client->getRemoteServiceName().c_str();
				auxPointerToRemoteServiceName = (char**)auxPointerToRequest;
				auxPointerToRequest = (char**)auxPointerToRequest + 1;

                m_mutex->lock();
                /* Thread safe num_Sec handling */
                *(unsigned int*)auxPointerToRequest = m_numSec;
                numSec = m_numSec;
                m_numSec++;

				// Take a free query condition.
				query = getFreeQueryFromPool();
                m_mutex->unlock();

				if(query != NULL)
				{
					waitSet = new DDS::WaitSet();

					if(waitSet != NULL)
					{
						if(checkServerConnection(waitSet, timeout) == OPERATION_SUCCESSFUL)
						{
							if(write(request) == DDS::RETCODE_OK)
							{
								DDS::StringSeq stringSeq(1);

								stringSeq.length(1);
								SNPRINTF(value, 50, "%u", numSec);
								stringSeq[0] = strdup(value);

								if(query->set_query_parameters(stringSeq) == DDS::RETCODE_OK)
								{
									// Set the timeout.
									task->setClientRPC(this);
									if(m_client->addAsyncTask(query, task, timeout) == 0)
										returnedValue = OPERATION_SUCCESSFUL;
									else
										printf("ERROR <%s::%s>: Cannot add asynchronous task\n", CLASS_NAME, METHOD_NAME);
								}
								else
								{
									printf("ERROR <%s::%s>: Cannot create query condition\n", CLASS_NAME, METHOD_NAME);
								}
							}
							else
							{
								printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);
							}
						}
						else
						{
							printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
							returnedValue = NO_SERVER;
						}

						delete waitSet;
					}
					else
					{
						printf("ERROR <%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
					}

					// If something was wrong.
					if(returnedValue != OPERATION_SUCCESSFUL)
					{
						m_mutex->lock();
						returnUsedQueryToPool(query);
						m_mutex->unlock();
					}
				}
				else
				{
					printf("ERROR <%s::%s>: Cannot get a free query condition\n", CLASS_NAME, METHOD_NAME);
				}

				*auxPointerToRemoteServiceName = NULL;
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }

            return returnedValue;
        }

        ReturnMessage ClientRPC::checkServerConnection(DDS::WaitSet *waitSet, long timeout)
        {
            const char* const METHOD_NAME = "checkServerConnection";
            ReturnMessage returnedValue = OPERATION_SUCCESSFUL;
            DDS::StatusCondition *statusCondition = NULL;
            DDS::ReturnCode_t retCode;
            boost::posix_time::time_duration tTimeout = boost::posix_time::milliseconds(timeout);
            DDS_TIMEOUT(ddsTimeout, tTimeout);

            if(waitSet != NULL)
            {
                // Detect request datareader from server.
                DDS::PublicationMatchedStatus pms;
                m_requestDataWriter->get_publication_matched_status(pms);

                if(pms.current_count < 1)
                {
                    returnedValue = NO_SERVER;
                    statusCondition = m_requestDataWriter->get_statuscondition();

                    if(statusCondition != NULL)
                    {
                        statusCondition->set_enabled_statuses(DDS::PUBLICATION_MATCHED_STATUS);

                        if(waitSet->attach_condition(statusCondition) == DDS::RETCODE_OK)
                        {
                            DDS::ConditionSeq conds;

                            retCode = waitSet->wait(conds, ddsTimeout);

                            if(!(retCode == DDS::RETCODE_TIMEOUT) && !(retCode == DDS::RETCODE_OK && conds.length() == 0))
                                returnedValue = OPERATION_SUCCESSFUL;

                            waitSet->detach_condition(statusCondition);
                        }
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot get status condition from request datawriter.\n", CLASS_NAME, METHOD_NAME);
                    }
                }

                if(returnedValue == OPERATION_SUCCESSFUL && m_replySubscriber != NULL)
                {
                    // Detect reply datawriter from server.
                    DDS::SubscriptionMatchedStatus sms;
                    m_replyDataReader->get_subscription_matched_status(sms);

                    if(sms.current_count < 1)
                    {
                        returnedValue = NO_SERVER;
                        statusCondition = m_replyDataReader->get_statuscondition();

                        if(statusCondition != NULL)
                        {
                            statusCondition->set_enabled_statuses(DDS::SUBSCRIPTION_MATCHED_STATUS);

                            if(waitSet->attach_condition(statusCondition) == DDS::RETCODE_OK)
                            {
                                DDS::ConditionSeq conds;
                                retCode = waitSet->wait(conds, ddsTimeout);

                                if(!(retCode == DDS::RETCODE_TIMEOUT) && !(retCode == DDS::RETCODE_OK && conds.length() == 0))
                                {
                                    returnedValue = OPERATION_SUCCESSFUL;
                                }

                                waitSet->detach_condition(statusCondition);
                            }
                        }
                        else
                        {
                            printf("ERROR<%s::%s>: Cannot get status condition from reply datareader.\n", CLASS_NAME, METHOD_NAME);
                        }
                    }
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }

            return returnedValue;
        }

        int ClientRPC::createEntities(DDS::DomainParticipant *participant, const char *rpcName,
                const char *requestTypeName, const char *replyTypeName)
        {
            const char* const METHOD_NAME = "createEntities";
            DDS::PublisherQos publisherQos;
            DDS::SubscriberQos subscriberQos;

            if(participant != NULL)
            {
                if(rpcName != NULL)
                {
                    if((m_requestPublisher = participant->create_publisher(PUBLISHER_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                    {
                        if(m_requestPublisher->get_qos(publisherQos) == DDS::RETCODE_OK)
                        {
                            publisherQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                            m_requestPublisher->set_qos(publisherQos);

                            if(requestTypeName != NULL)
                            {
                                if((m_requestTopic = participant->create_topic(requestTypeName, requestTypeName, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                                {
                                    DDS::DataWriterQos wQos = DDS::DataWriterQos();

                                    m_requestPublisher->get_default_datawriter_qos(wQos);

                                    wQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
									wQos.history.depth = 100;
									set_datawriter_protocol(wQos);

                                    m_requestDataWriter = m_requestPublisher->create_datawriter(m_requestTopic, wQos, NULL, STATUS_MASK_NONE);

                                    if(m_requestDataWriter != NULL)
                                    {                              
                                        // Is not oneway operation
                                        if(replyTypeName != NULL)
                                        {
                                            if((m_replySubscriber = participant->create_subscriber(SUBSCRIBER_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                                            {
                                                if(m_replySubscriber->get_qos(subscriberQos) == DDS::RETCODE_OK)
                                                {
                                                    subscriberQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                                                    m_replySubscriber->set_qos(subscriberQos);

                                                    if((m_replyTopic = participant->create_topic(replyTypeName, replyTypeName, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                                                    {
                                                        DDS::StringSeq stringSeq(4);
                                                        stringSeq.length(4);
                                                        stringSeq[0] = strdup("0");
                                                        stringSeq[1] = strdup("0");
                                                        stringSeq[2] = strdup("0");
                                                        stringSeq[3] = strdup("0");

                                                        if((m_replyFilter = participant->create_contentfilteredtopic(rpcName, m_replyTopic,
                                                                        "header.clientId.value_1 = %0 and header.clientId.value_2 = %1 and header.clientId.value_3 = %2 and header.clientId.value_4 = %3",
                                                                        stringSeq)) != NULL)
                                                        {
                                                            DDS::DataReaderQos rQos = DDS::DataReaderQos();

                                                            m_replySubscriber->get_default_datareader_qos(rQos);

                                                            rQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
															rQos.history.depth = 100;
															set_max_query_condition_filters(rQos);
															set_datareader_protocol(rQos);

                                                            m_replyDataReader = m_replySubscriber->create_datareader(m_replyFilter, rQos, NULL, STATUS_MASK_NONE);

                                                            if(m_replyDataReader != NULL)
                                                            {
                                                                return 1;
                                                            }

                                                            participant->delete_contentfilteredtopic(m_replyFilter);
                                                        }
                                                        else
                                                        {
                                                            printf("ERROR<%s::%s>: Cannot create the reply filter\n", CLASS_NAME, METHOD_NAME);
                                                        }

                                                        participant->delete_topic(m_replyTopic);
                                                    }
                                                    else
                                                    {
                                                        printf("ERROR<%s::%s>: Cannot create the reply topic\n", CLASS_NAME, METHOD_NAME);
                                                    }
                                                }
                                                else
                                                {
                                                    printf("ERROR <%s::%s>: Cannot get the subscriber qos\n", CLASS_NAME, METHOD_NAME);
                                                }

                                                participant->delete_subscriber(m_replySubscriber);
                                            }
                                            else
                                            {
                                                printf("ERROR<%s::%s>: Cannot create the reply subscriber\n", CLASS_NAME, METHOD_NAME);
                                            }
                                        }
                                        else
                                        {
                                            return 1;
                                        }

                                        m_requestPublisher->delete_datawriter(m_requestDataWriter);
                                    }
                                    else
                                    {
                                        printf("ERROR<%s::%s>: Cannot create the request data writer\n", CLASS_NAME, METHOD_NAME);
                                    }

                                    participant->delete_topic(m_requestTopic);
                                }
                                else
                                {
                                    printf("ERROR<%s::%s>: Cannot create the request topic\n", CLASS_NAME, METHOD_NAME);
                                }
                            }
                            else
                            {
                                printf("ERROR<%s::%s>: Bad parameter (requestTypeName)\n", CLASS_NAME, METHOD_NAME);
                            }
                        }
                        else
                        {
                            printf("ERROR <%s::%s>: Cannot get the publisher qos\n", CLASS_NAME, METHOD_NAME);
                        }

                        participant->delete_publisher(m_requestPublisher);
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot create the request publisher\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Bad parameter (remoteServiceName)\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameter (participant)\n", CLASS_NAME, METHOD_NAME);
            }

            return 0;
        }

        int ClientRPC::enableEntities()
        {
            const char* const METHOD_NAME = "enableEntities";
            int returnedValue = 0;

            if(m_requestPublisher->enable() == DDS::RETCODE_OK)
            {
                if(m_requestTopic->enable() == DDS::RETCODE_OK)
                {
                    if(m_requestDataWriter->enable() == DDS::RETCODE_OK)
                    {
						// if not operation oneway.
						if(m_replySubscriber != NULL)
						{
								// Obtain clientServiceId.
							get_guid(m_clientId, m_requestDataWriter);

							// Set identifier to filter topic.
							DDS::StringSeq stringSeq(4);
							char value[50];

							stringSeq.length(4);
							SNPRINTF(value, 50, "%u", m_clientId[0]);
							stringSeq[0] = strdup(value);
							SNPRINTF(value, 50, "%u", m_clientId[1]);
							stringSeq[1] = strdup(value);
							SNPRINTF(value, 50, "%u", m_clientId[2]);
							stringSeq[2] = strdup(value);
							SNPRINTF(value, 50, "%u", m_clientId[3]);
							stringSeq[3] = strdup(value);

							m_replyFilter->set_expression_parameters(stringSeq);

                            if(m_replySubscriber->enable() == DDS::RETCODE_OK)
                            {
                                if(m_replyTopic->enable() == DDS::RETCODE_OK)
                                {
                                    if(m_replyDataReader->enable() == DDS::RETCODE_OK)
                                    {
                                        returnedValue = 1;
                                    }
                                    else
                                    {
                                        printf("ERROR<%s::%s>: Cannot enable reply datareader\n", CLASS_NAME, METHOD_NAME);
                                    }
                                }
                                else
                                {
                                    printf("ERROR<%s::%s>: Cannot enable reply topic\n", CLASS_NAME, METHOD_NAME);
                                }
                            }
                            else
                            {
                                printf("ERROR<%s::%s>: Cannot enable reply subscriber\n", CLASS_NAME, METHOD_NAME);
                            }
                        }
                        else
                        {
                            returnedValue = 1;
                        }
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot enable request datawriter\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot enable request topic\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot enable request publisher\n", CLASS_NAME, METHOD_NAME);
            }

            return returnedValue;
        }

        void ClientRPC::freeQuery(DDS::QueryCondition *query)
        {
            const char* const METHOD_NAME = "deleteQuery";

            if(query != NULL)
            {
                m_mutex->lock();
				returnUsedQueryToPool(query);
				m_mutex->unlock();
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }
        }


		DDS::DataReader* ClientRPC::getReplyDatareader() const
		{
			return m_replyDataReader;
		}


		DDS::DataWriter* ClientRPC::getRequestDatawriter() const
		{
			return m_requestDataWriter;
		}
	
		int ClientRPC::initQueryPool()
		{
			int count = 0;
			int returnedValue = -1;

			//Initialize all pool to NULL.
			m_queryPool = (DDS::QueryCondition**)calloc(10, sizeof(DDS::QueryCondition*));

			DDS::StringSeq stringSeq(1);

            stringSeq.length(1);
            stringSeq[0] = strdup("0");

			// Create all query conditions.
			for(; count < QUERY_POOL_LENGTH; ++count)
			{
				DDS::QueryCondition *query = m_replyDataReader->create_querycondition(DDS::NOT_READ_SAMPLE_STATE, DDS::ANY_VIEW_STATE, DDS::ANY_INSTANCE_STATE,
                                        "header.requestSequenceNumber = %0", stringSeq);
				m_queryPool[count] = query;

				if(m_queryPool[count] == NULL)
					break;
			}

			// Check all query has been created successfully.
			if(count != QUERY_POOL_LENGTH)
			{
				for(int rcount = 0; rcount < count; ++rcount)
				{
					 m_replyDataReader->delete_readcondition(m_queryPool[rcount]);
					 m_queryPool[rcount] = NULL;
				}

				free(m_queryPool);
			}
			else
				returnedValue = 0;

			return returnedValue;
		}

		void ClientRPC::finalizeQueryPool()
		{
			int count = 0;

			for(; count <  QUERY_POOL_LENGTH; ++count)
			{
				m_replyDataReader->delete_readcondition(m_queryPool[count]);
				m_queryPool[count] = NULL;
			}

			free(m_queryPool);
			m_queryPool = NULL;
		}

		DDS::QueryCondition* ClientRPC::getFreeQueryFromPool()
		{
			DDS::QueryCondition *returnedValue = NULL;
			
			// If there is a free query condition.
			if(m_queriesInUseLimiter != 0)
			{
				returnedValue = m_queryPool[--m_queriesInUseLimiter];
			}

			return returnedValue;
		}

		void ClientRPC::returnUsedQueryToPool(DDS::QueryCondition *query)
		{
			int count = m_queriesInUseLimiter;

			if(query != NULL)
			{
				// Search the position of the query.
				for(; count < QUERY_POOL_LENGTH; ++count)
				{
					if(m_queryPool[count] == query)
						break;
				}

				// Check that the query was found.
				if(count != QUERY_POOL_LENGTH)
				{
					if(count != m_queriesInUseLimiter)
					{
						DDS::QueryCondition *tmp = m_queryPool[m_queriesInUseLimiter];
						m_queryPool[m_queriesInUseLimiter] = m_queryPool[count];
						m_queryPool[count] = tmp;
					}
					
					++m_queriesInUseLimiter;
				}
			}
		}

		void ClientRPC::deleteAssociatedAsyncTasks()
		{
			m_client->deleteAssociatedAsyncTasks(this);
		}
    } // namespace RPCDDS
} // namespace eProsima
