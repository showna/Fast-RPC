#ifndef _BasicTypeTestSKELETON_H_
#define _BasicTypeTestSKELETON_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "server/Server.h"
#include "BasicTypeTestServerImpl.h"
#include "BasicTypeTestRequestReplyUtils.h"

/**
 * \brief This class implements a specific server for the defined interface by user.
 */
class BasicTypeTestServerH : public eProsima::DDSRPC::Server
{
    private: 
      BasicTypeTestServerImpl *_impl;
    public:

        /**
         * \brief Default constructor. The server has to know what network transport
         *        it should use.
         *
         * \param strategy Strategy used by server to work with new requests. Cannot be NULL.
         * \param transport The network transport that server has to use. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         */
        BasicTypeTestServerH(eProsima::DDSRPC::ServerStrategy *strategy, eProsima::DDSRPC::Transport *transport,
            int domainId = 0);

        /// \brief The default destructor.
        virtual ~BasicTypeTestServerH();

        static void getOctet(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getChar(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getWChar(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getShort(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getUShort(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getULong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getLLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getULLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getFloat(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getDouble(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getBoolean(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
};

/**
 * \brief This class implements a specific server for the defined interface by user.
 *        This server uses the UDPv4 transport.
 */
class BasicTypeTestServer : public BasicTypeTestServerH
{
    public:

        /**
         * \brief Default constructor.
         *
         * \param strategy Strategy used by server to work with new requests. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         */
        BasicTypeTestServer(eProsima::DDSRPC::ServerStrategy *strategy,
            int domainId = 0);

        /// \brief The default destructor.
        virtual ~BasicTypeTestServer();
};

/**
 * \brief This class implements a specific server for the defined interface by user.
 *        This server uses the TCPv4 transport.
 */
class BasicTypeTestWANServer : public BasicTypeTestServerH
{
    public:

        /**
         * \brief Default constructor.
         *
         * \param strategy Strategy used by server to work with new requests. Cannot be NULL.
         * \param public_address Public address and port of the server. The server should be accesible in this address.
         *        The user has to configure its router for this purpose. By example: "218.18.3.133:7600"      *
         * \param server_bind_port Port used by the server in its machine. This port will be use in the router for port forwarding
         *        between the public port and this port.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         */
        BasicTypeTestWANServer(eProsima::DDSRPC::ServerStrategy *strategy, 
            const char *public_address, const char *server_bind_port,
            int domainId = 0);

        /// \brief The default destructor.
        virtual ~BasicTypeTestWANServer();
};

#endif // _BasicTypeTestSKELETON_H_