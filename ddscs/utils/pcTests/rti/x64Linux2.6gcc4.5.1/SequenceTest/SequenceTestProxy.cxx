/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file SequenceTestProxy.cxx
 * This source file contains the definition of the proxy for interface SequenceTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "SequenceTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "SequenceTestRequestReplyPlugin.h"
#include "SequenceTestAsyncSupport.h"
#include "exceptions/Exceptions.h"

SequenceTestProxy::SequenceTestProxy(std::string remoteServiceName, int domainId, long timeout) :
    Client(remoteServiceName, NULL, domainId, timeout)
{
    createRPCs();
}

SequenceTestProxy::SequenceTestProxy(std::string remoteServiceName, eProsima::RPCDDS::Transport *transport, int domainId, long timeout) :
    Client(remoteServiceName, transport, domainId, timeout)
{
    createRPCs();
}

SequenceTestProxy::~SequenceTestProxy()
{
    delete getSLong_Service;
    delete getString_Service;
    delete getStringBounded_Service;
}

void SequenceTestProxy::createRPCs()
{
    this->getSLong_Service = new SequenceTest_getSLongClientRPC("getSLong",
                                  SequenceTest_getSLongRequestUtils::registerType(getParticipant()),
                                  SequenceTest_getSLongReplyUtils::registerType(getParticipant()),
                                  this);
    this->getString_Service = new SequenceTest_getStringClientRPC("getString",
                                  SequenceTest_getStringRequestUtils::registerType(getParticipant()),
                                  SequenceTest_getStringReplyUtils::registerType(getParticipant()),
                                  this);
    this->getStringBounded_Service = new SequenceTest_getStringBoundedClientRPC("getStringBounded",
                                  SequenceTest_getStringBoundedRequestUtils::registerType(getParticipant()),
                                  SequenceTest_getStringBoundedReplyUtils::registerType(getParticipant()),
                                  this);

}

 
largo SequenceTestProxy::getSLong(/*in*/ const largo& l1, /*inout*/ largo& l2, /*out*/ largo& l3) 
{
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    largo getSLong_ret;
    SequenceTest_getSLongRequest instance;
    SequenceTest_getSLongReply retInstance;

    SequenceTest_getSLongReply_initialize(&retInstance);
    SequenceTest_getSLongRequestUtils::setTypeData(instance, l1, l2);
    retcode = getSLong_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
    {
        SequenceTest_getSLongReplyUtils::extractTypeData(retInstance, retcode, l2, l3, getSLong_ret);  
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
    

    return getSLong_ret;
}
 
cadena SequenceTestProxy::getString(/*in*/ const cadena& s1, /*inout*/ cadena& s2, /*out*/ cadena& s3) 
{
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    cadena getString_ret;
    SequenceTest_getStringRequest instance;
    SequenceTest_getStringReply retInstance;

    SequenceTest_getStringReply_initialize(&retInstance);
    SequenceTest_getStringRequestUtils::setTypeData(instance, s1, s2);
    retcode = getString_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
    {
        SequenceTest_getStringReplyUtils::extractTypeData(retInstance, retcode, s2, s3, getString_ret);  
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
    

    return getString_ret;
}
 
dattos SequenceTestProxy::getStringBounded(/*in*/ const dattos& sb1, /*inout*/ dattos& sb2, /*out*/ dattos& sb3) 
{
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    dattos getStringBounded_ret;
    SequenceTest_getStringBoundedRequest instance;
    SequenceTest_getStringBoundedReply retInstance;

    SequenceTest_getStringBoundedReply_initialize(&retInstance);
    SequenceTest_getStringBoundedRequestUtils::setTypeData(instance, sb1, sb2);
    retcode = getStringBounded_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
    {
        SequenceTest_getStringBoundedReplyUtils::extractTypeData(retInstance, retcode, sb2, sb3, getStringBounded_ret);  
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
    

    return getStringBounded_ret;
}

 
void SequenceTestProxy::getSLong_async(SequenceTest_getSLongCallbackHandler &obj, /*in*/ const largo& l1, /*inout*/ const largo& l2) 
{
	eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    SequenceTest_getSLongRequest instance;
    SequenceTest_getSLongTask *task = NULL;
    SequenceTest_getSLongRequestUtils::setTypeData(instance, l1, l2);
    task = new SequenceTest_getSLongTask(obj, this);
    retcode = getSLong_Service->executeAsync(&instance, task, getTimeout());
    
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
 
void SequenceTestProxy::getString_async(SequenceTest_getStringCallbackHandler &obj, /*in*/ const cadena& s1, /*inout*/ const cadena& s2) 
{
	eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    SequenceTest_getStringRequest instance;
    SequenceTest_getStringTask *task = NULL;
    SequenceTest_getStringRequestUtils::setTypeData(instance, s1, s2);
    task = new SequenceTest_getStringTask(obj, this);
    retcode = getString_Service->executeAsync(&instance, task, getTimeout());
    
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
 
void SequenceTestProxy::getStringBounded_async(SequenceTest_getStringBoundedCallbackHandler &obj, /*in*/ const dattos& sb1, /*inout*/ const dattos& sb2) 
{
	eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    SequenceTest_getStringBoundedRequest instance;
    SequenceTest_getStringBoundedTask *task = NULL;
    SequenceTest_getStringBoundedRequestUtils::setTypeData(instance, sb1, sb2);
    task = new SequenceTest_getStringBoundedTask(obj, this);
    retcode = getStringBounded_Service->executeAsync(&instance, task, getTimeout());
    
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