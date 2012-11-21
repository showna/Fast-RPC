/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file MultithreadTestProxy.cxx
 * This source file contains the definition of the proxy for interface MultithreadTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "MultithreadTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "MultithreadTestRequestReplyPlugin.h"
#include "MultithreadTestAsyncSupport.h"
#include "exceptions/Exceptions.h"

MultithreadTestProxy::MultithreadTestProxy(std::string remoteServiceName, int domainId, long timeout) :
    Client(remoteServiceName, NULL, domainId, timeout)
{
    createRPCs();
}

MultithreadTestProxy::MultithreadTestProxy(std::string remoteServiceName, eProsima::RPCDDS::Transport *transport, int domainId, long timeout) :
    Client(remoteServiceName, transport, domainId, timeout)
{
    createRPCs();
}

MultithreadTestProxy::~MultithreadTestProxy()
{
    delete test_Service;
}

void MultithreadTestProxy::createRPCs()
{
    this->test_Service = new MultithreadTest_testClientRPC("test",
                                  MultithreadTest_testRequestUtils::registerType(getParticipant()),
                                  MultithreadTest_testReplyUtils::registerType(getParticipant()),
                                  this);

}

 
DDS_Long MultithreadTestProxy::test(/*in*/ const Dato& dato1, /*out*/ Dato& dato2) 
{
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    DDS_Long  test_ret = 0;
    MultithreadTest_testRequest instance;
    MultithreadTest_testReply retInstance;

    MultithreadTest_testReply_initialize(&retInstance);
    MultithreadTest_testRequestUtils::setTypeData(instance, dato1);
    retcode = test_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
    {
        MultithreadTest_testReplyUtils::extractTypeData(retInstance, retcode, dato2, test_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
            throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::RPCDDS::SERVER_TIMEOUT:
            throw eProsima::RPCDDS::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::RPCDDS::SERVER_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ServerInternalException(retInstance.header.rpcddsRetMsg);
            break;
    };
    

    return test_ret;
}

 
void MultithreadTestProxy::test_async(MultithreadTest_testCallbackHandler &obj, /*in*/ const Dato& dato1) 
{
	eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    MultithreadTest_testRequest instance;
    MultithreadTest_testTask *task = NULL;
    MultithreadTest_testRequestUtils::setTypeData(instance, dato1);
    task = new MultithreadTest_testTask(obj, this);
    retcode = test_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
             throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}