#ifndef _SERVERREMOTESERVICE_H_
#define _SERVERREMOTESERVICE_H_

#include "ndds/ndds_cpp.h"
#include "utils/ddscs.h"
#include "utils/DDSCSTypedefs.h"
#include "utils/DDSCSMessages.h"

class DDSCSServer;
class ThreadPoolManager;
class ServerRemoteService;

typedef struct ServiceNode
{
	REDAInlineListNode parent;
	ServerRemoteService *service;
} ServiceNode;


class DDSCS_WIN32_DLL_API ServerRemoteService : public DDSDataReaderListener
{
    public:

        /**
         * \brief The constructor.
         *
         * \param remoteServiceName The name of this service. Cannot be NULL.
         * \param requestTypeName The name of the type used to send the function's parameters. Max: 49 characteres. Cannot be NULL.
         * \param replyTypeName The name of the type used to received the function's return values. Max: 49 characteres. Cannot be NULL.
         * \param serverParticipant Pointer to the domain participant used by the server. Cannot be NULL.
         */
        ServerRemoteService(const char *remoteServiceName, DDSCSServer* server, const char *requestTypeName,
            const char *requestQosLibrary, const char *requestQosProfile, const char *replyTypeName,
            const char *replyQosLibrary, const char *replyQosProfile,
                fExecFunction execFunction, DDSDomainParticipant *serverParticipant);

        char* getRemoteServiceName();

        DDS_UnsignedLong* getServerServiceId();

		REDAInlineListNode* getNode()
		{
			return (REDAInlineListNode*)&listNode;
		}

        fExecFunction getExecFunction();

		virtual int sendReply(void* request, void *reply, DDSCSMessages errorMessage = OPERATION_SUCCESSFUL) = 0;

        virtual void on_data_available(DDSDataReader* reader) = 0;

        virtual void on_requested_deadline_missed(
                DDSDataReader* /*reader*/,
                const DDS_RequestedDeadlineMissedStatus& /*status*/) {}

        virtual void on_requested_incompatible_qos(
                DDSDataReader* /*reader*/,
                const DDS_RequestedIncompatibleQosStatus& /*status*/) {}

        virtual void on_sample_rejected(
                DDSDataReader* /*reader*/,
                const DDS_SampleRejectedStatus& /*status*/) {}

        virtual void on_liveliness_changed(
                DDSDataReader* /*reader*/,
                const DDS_LivelinessChangedStatus& /*status*/) {}

        virtual void on_sample_lost(
                DDSDataReader* /*reader*/,
                const DDS_SampleLostStatus& /*status*/) {}

        virtual void on_subscription_matched(
                DDSDataReader* /*reader*/,
                const DDS_SubscriptionMatchedStatus& /*status*/) {}

	protected:

		struct ServiceNode listNode;

        /**
         * \brief This field stores the name of the service.
         */
        char remoteServiceName[50];

        /**
         * \brief This field stores a pointer to the ThreadPoolManager.
         */
		DDSCSServer *server;
        /**
         * \brief The subscriber used to communicate with the client. Client -> Server
         */
        DDSSubscriber *requestSubscriber;

        /**
         * \brief The publisher used to communicate with the client. Server -> Client.
         */
        DDSPublisher *replyPublisher;

        /**
         * \brief The topic used to communicate with the server. Client -> Server
         */
        DDSTopic *requestTopic;

        /**
         * \brief The topic used to communicate with the server. Server -> Client
         */
        DDSTopic *replyTopic;

        /**
         * \brief The data reader used to communicate with the client. Client -> Server
         */
		DDSDataReader *requestDataReader;
        
        /**
         * \brief The data writer used to communicate with the client. Server -> Client
         */
		DDSDataWriter *replyDataWriter;


        fCreateRequestData createRequestData;

        fDeleteRequestData deleteRequestData;

        fExecFunction execFunction;

        DDS_UnsignedLong m_serverServiceId[4];
};

#endif // _SERVERREMOTESERVICE_H_
