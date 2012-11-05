#ifndef _ServerExceptionSKELETON_H_
#define _ServerExceptionSKELETON_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "server/Server.h"
#include "ServerExceptionServerImpl.h"
#include "ServerExceptionRequestReplyUtils.h"

/**
 * \brief This class implements a specific server for the defined interface by user.
 */
class ServerExceptionServer : public eProsima::DDSRPC::Server
{
    public:
    
        /**
         * \brief Default constructor. The server will use the default eProsima::DDSRPC::UDPTransport.
         *
         * \param strategy Strategy used by server to work with new requests.
         *        This class doesn't delete this object in its destructor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         */
        ServerExceptionServer(eProsima::DDSRPC::ServerStrategy *strategy,
            int domainId = 0);

        /**
         * \brief This constructor sets the transport that will be used by the server.
         *
         * \param strategy Strategy used by server to work with new requests.
         *        This class doesn't delete this object in its destructor. Cannot be NULL.
         * \param transport The network transport that server has to use.
         *        This transport's object is not deleted by this class in its destrcutor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         */
        ServerExceptionServer(eProsima::DDSRPC::ServerStrategy *strategy, eProsima::DDSRPC::Transport *transport,
            int domainId = 0);

        /// \brief The default destructor.
        virtual ~ServerExceptionServer();

        static void sendException(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void sendExceptionTwo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void sendExceptionThree(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        
     private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        /// \brief Pointer to the server's servant implemented by the user.
        ServerExceptionServerImpl *_impl;
};

#endif // _ServerExceptionSKELETON_H_