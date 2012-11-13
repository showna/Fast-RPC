#ifndef _SERVER_SERVERPC_H_
#define _SERVER_SERVERRPC_H_

#include "utils/ddsrpc.h"
#include "utils/Typedefs.h"
#include "utils/Messages.h"
#include "utils/Version.h"

namespace eProsima
{
	namespace DDSRPC
	{

		class Server;
		class ThreadPoolManager;

		/**
		 * \brief This class implements a remote procedure call in server side.
		 */
		class DDSRPC_WIN32_DLL_API ServerRPC : public DDS::DataReaderListener
		{
			public:

				/**
				 * \brief The constructor.
				 *
				 * \param rpcName The name of this remote procedure. Cannot be NULL.
				 * \param requestTypeName The type name of the request topic that the RPC object manages. Cannot be NULL.
				 * \param replyTypeName The type name of the reply topic that te RPC object manages. Cannot be NULL:
				 * \param execFunction Funtion that will be called when a new request is received. Cannot be NULL.
				 */
				ServerRPC(const char *rpcName, Server* server, const char *requestTypeName,
					const char *replyTypeName, fExecFunction execFunction);

				/// \brief Default destructor.
				virtual ~ServerRPC();

				/**
				 * \brief This function returns the name of this object.
				 *
				 * \return The name of this object.
				 */
				char* getRPCName();

				/// \brief This function returns the function that is called when a new request is recevied.
				fExecFunction getExecFunction();

				/**
				 * \brief This function creates the DDS entities of the server.
				 *
				 * \param participant  Pointer to the domain participant used by the server. Cannot be NULL.
				 * \param rpcName The name of this object.
				 * \param requestTypeName The type name of the request topic that the RPC object manages. Cannot be NULL.
				 * \param replyTypeName The type name of the reply topic that te RPC object manages. Cannot be NULL:
				 * \return 0 value is returned when all entities was created succesfully. In other case, -1 value is returned.
				 */
				int createEntities(DDS::DomainParticipant *participant, const char *rpcName,
						const char *requestTypeName, const char *replyTypeName);
				/**
				 * \brief This function enables all DDS entities of the server.
				 *
				 * \return 0 value is returned when all entities was enabled succesfully. In other case, -1 value is returned.
				 */
				int enableEntities();

				virtual int sendReply(void* request, void *reply) = 0;

				virtual void deleteRequestData(void *request) = 0;

				virtual void on_data_available(DDS::DataReader* reader) = 0;

				virtual void on_requested_deadline_missed(
						DDS::DataReader* reader,
						const DDS::RequestedDeadlineMissedStatus& status) {}

				virtual void on_requested_incompatible_qos(
						DDS::DataReader* reader,
						const DDS::RequestedIncompatibleQosStatus& status) {}

				virtual void on_sample_rejected(
						DDS::DataReader* reader,
						const DDS::SampleRejectedStatus& status) {}

				virtual void on_liveliness_changed(
						DDS::DataReader* reader,
						const DDS::LivelinessChangedStatus& status) {}

				virtual void on_sample_lost(
						DDS::DataReader* reader,
						const DDS::SampleLostStatus& status) {}

				virtual void on_subscription_matched(
						DDS::DataReader* reader,
						const DDS::SubscriptionMatchedStatus& status) {}

			protected:

				/**
				 * \brief This field stores the name of the remote procedure.
				 */
				char m_rpcName[50];

				/**
				 * \brief This field stores a pointer to the server.
				 */
				Server *m_server;
				/**
				 * \brief The subscriber used to communicate with the client. Client -> Server
				 */
				DDS::Subscriber *m_requestSubscriber;

				/**
				 * \brief The publisher used to communicate with the client. Server -> Client.
				 */
				DDS::Publisher *m_replyPublisher;

				/**
				 * \brief The topic used to communicate with the server. Client -> Server
				 */
				DDS::Topic *m_requestTopic;

				/**
				 * \brief Content filter used to take the expected request from clients.
				 */
				DDS::ContentFilteredTopic *m_requestFilter;

				/**
				 * \brief The topic used to communicate with the server. Server -> Client
				 */
				DDS::Topic *m_replyTopic;

				/**
				 * \brief The data reader used to communicate with the client. Client -> Server
				 */
				DDS::DataReader *m_requestDataReader;
        
				/**
				 * \brief The data writer used to communicate with the client. Server -> Client
				 */
				DDS::DataWriter *m_replyDataWriter;

				fExecFunction m_execFunction;
		};

	} // namespace DDSRPC
} // namespace eProsima

#endif // _SERVER_SERVERRPC_H_
