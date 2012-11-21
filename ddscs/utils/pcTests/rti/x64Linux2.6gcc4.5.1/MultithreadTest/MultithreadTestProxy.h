/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file MultithreadTestProxy.h
 * This header file contains the declaration of the proxy for interface MultithreadTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _MultithreadTest_PROXY_H_
#define _MultithreadTest_PROXY_H_

#include "client/Client.h"
#include "MultithreadTestRequestReplyUtils.h"
#include "MultithreadTestClientRPCSupport.h"
#include "exceptions/Exception.h"

/**
 * \brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class MultithreadTest_testCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void test(/*out*/ const Dato& dato2, /*out*/ DDS_Long test_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::RPCDDS::Exception &ex) = 0;
};

/**
 * \brief This class implements a specific server's proxy for the defined interface MultithreadTest.
 */
class MultithreadTestProxy : public eProsima::RPCDDS::Client
{
    public:
    
        /**
         * \brief Default constructor. The server's proxy will use the default eProsima::RPCDDS::UDPTransport.
         *
         * \param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::RPCDDS::ServerTimeoutException is thrown.
         * \exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
         */
        MultithreadTestProxy(std::string remoteServiceName, int domainId = 0, long timeout = 10000);

        /**
         * \brief This constructor sets the transport that will be used by the server's proxy.
         *
         * \param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
         * \param transport The network transport that server's proxy has to use.
         *        This transport's object is not deleted by this class in its destrcutor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::RPCDDS::ServerTimeoutException is thrown.
         * \exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
         */
        MultithreadTestProxy(std::string remoteServiceName, eProsima::RPCDDS::Transport *transport, int domainId = 0, long timeout = 10000);

        /// \brief The default destructor.
        virtual ~MultithreadTestProxy();
        
         
        DDS_Long test(/*in*/ const Dato& dato1, /*out*/ Dato& dato2);
        
         
        void test_async(MultithreadTest_testCallbackHandler &obj, /*in*/ const Dato& dato1);
        
    private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        eProsima::RPCDDS::ClientRPC *test_Service; 
};

#endif // _MultithreadTest_PROXY_H_