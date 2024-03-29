/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _CLIENT_CLIENT_H_
#define _CLIENT_CLIENT_H_

#include "rpcdds_dll.h"
#include "utils/Middleware.h"
#include "utils/Messages.h"

#include <string>
#include <vector>

namespace eProsima
{
	namespace RPCDDS
	{
        class Transport;
        class AsyncThread;
        class AsyncTask;
		class ClientRPC;

		/**
		 * @brief This class implements the common functionalities that all server's proxies have.
         * @ingroup CLIENTMODULE
		 */
		class RPCDDS_DllAPI Client
		{
            public:

				/**
				 * \brief This function returns the DDS domain participant that use this server's proxy.
				 *
				 * \return Pointer to the DDS domain participant.
				 */
				DDS::DomainParticipant* getParticipant();

				/**
				 * \brief This function adds a asynchronous task to the asynchronous thread.
				 *
				 * \param query The DDS query condition that is used to take the request. Cannot be NULL.
				 * \param task The asynchronos task created and associated with a request. Cannot be NULL.
				 * \param timeout The timeout used for this request.
				 * \return 0 value is returned if function works successfully. In other case -1 is returned.
				 */
                int addAsyncTask(DDS::QueryCondition *query, AsyncTask *task, long timeout);

				/**
				 * @brief This function deletes all asynchronous tasks associated with the RPC endpoint.
				 *
				 * @param rpc Pointer to the RPC endpoint. Cannot be NULL.
				 */
				void deleteAssociatedAsyncTasks(ClientRPC *rpc);

				/**
				 * \brief This function gets the timeout used when a request is sent.
				 *
				 * \return The time out used by the server proxy. It is in milliseconds.
				 */
                long getTimeout() const;

				/**
				 * \brief This function sets te timeout that the server's proxy will use in each request.
				 *
				 * \para milliseconds The timeout in milliseconds.
				 */
                void setTimeout(long milliseconds);

				/**
				 * \brief This function returns the name of the remote service that this proxy is offering.
				 *
				 * \return The service's name of 
				 */
				const std::string& getRemoteServiceName() const;

			protected:

				/**
				 * \brief A constructor. The associated domain participant is created.
				 *
				 * \param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
				 * \param transport The transport that will be use the server's proxy. This class doesn't delete this object in its destructor.
				 *        If the pointer is NULL, then a default UDPTransport will be used.
				 * \param domainId The domain id's value that the server proxy will set in the domain participant.
				 * \param milliseconds Timout in milliseconds for all requests.
				 * \exception InitializeException This exception is thrown when the initialization was wrong.
				 */
				Client(std::string remoteServiceName, Transport *transport, int domainId = 0, long milliseconds = 10000);

				/// \brief The default destructor.
				virtual ~Client();

			private:

				/// \brief The domain identifier.
				int m_domainId;

				/**
				 * \brief Each client is associated with a DDSDomainParticipant. This participant have to be created in the client creation.
				 * This pointer should never be NULL.
				 */
				DDS::DomainParticipant *m_participant;

				/// \brief Thread object that manages asynchronous repliess from servers.
                AsyncThread *m_asyncThread;

				/// \brief Timeout used in each remote procedure call. It value is in milliseconds.
                long m_timeout;

				/**
				 * \brief If the transport was created by this class because it is the default UDPTransport,
				 *          then this attribute has the true value. In other case the value will be false.
				 */
				bool m_defaultTransport;

				/// \brief Pointer to the transport which this server's proxy uses.
				Transport *m_transport;

				/// \brief The name of the remote service that the proxy will offer.
				std::string m_remoteServiceName;
		};
	} // namespace RPCDDS
} // namespace eProsima

#endif // _CLIENT_CLIENT_H_
