#ifndef _TypedefTestSKELETON_H_
#define _TypedefTestSKELETON_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "server/Server.h"
#include "TypedefTestServerImpl.h"
#include "TypedefTestRequestReplyUtils.h"

/**
 * \brief This class implements a specific server for the defined interface by user.
 */
class TypedefTestServer : public eProsima::DDSRPC::Server
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
        TypedefTestServer(std::string serviceName, eProsima::DDSRPC::ServerStrategy *strategy,
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
        TypedefTestServer(std::string serviceName, eProsima::DDSRPC::ServerStrategy *strategy, eProsima::DDSRPC::Transport *transport,
            int domainId = 0);

        /// \brief The default destructor.
        virtual ~TypedefTestServer();

        static void getLargo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getLarguisimo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getDatosDef(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getDatosDefondo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getCadena(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getCorrea(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        
     private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        /// \brief Pointer to the server's servant implemented by the user.
        TypedefTestServerImpl *_impl;
};

#endif // _TypedefTestSKELETON_H_