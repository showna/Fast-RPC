#ifndef _OnewayCallTestSKELETON_H_
#define _OnewayCallTestSKELETON_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "server/Server.h"
#include "OnewayCallTestServerImpl.h"
#include "OnewayCallTestRequestReplyUtils.h"

/**
 * \brief This class implements a specific server for the defined interface by user.
 */
class OnewayCallTestServer : public eProsima::DDSRPC::Server
{
    public:
    
        /**
         * \brief Default constructor. The server will use the default eProsima::DDSRPC::UDPTransport.
         *
         * \param serviceName The name of the service that the server offers. Proxies will use this name to connect with the server.
         * \param strategy Strategy used by server to work with new requests.
         *        This class doesn't delete this object in its destructor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         */
        OnewayCallTestServer(std::string serviceName, eProsima::DDSRPC::ServerStrategy *strategy,
            int domainId = 0);

        /**
         * \brief This constructor sets the transport that will be used by the server.
         *
         * \param serviceName The name of the service that the server offers. Proxies will use this name to connect with the server.
         * \param strategy Strategy used by server to work with new requests.
         *        This class doesn't delete this object in its destructor. Cannot be NULL.
         * \param transport The network transport that server has to use.
         *        This transport's object is not deleted by this class in its destrcutor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         */
        OnewayCallTestServer(std::string serviceName, eProsima::DDSRPC::ServerStrategy *strategy, eProsima::DDSRPC::Transport *transport,
            int domainId = 0);

        /// \brief The default destructor.
        virtual ~OnewayCallTestServer();

        static void setLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void setBoolean(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getBoolean(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void setString(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getString(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void setStruct(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getStruct(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        
     private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        /// \brief Pointer to the server's servant implemented by the user.
        OnewayCallTestServerImpl *_impl;
};

#endif // _OnewayCallTestSKELETON_H_