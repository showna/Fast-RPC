/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file SequenceTestServer.cxx
 * This source file contains the definition of the server for interface SequenceTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "SequenceTestServer.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "exceptions/ServerInternalException.h"
#include "SequenceTestRequestReplyPlugin.h"

#include "SequenceTestServerRPCSupport.h"

SequenceTestServer::SequenceTestServer(std::string serviceName, eProsima::RPCDDS::ServerStrategy *strategy,
    int domainId) :
    Server(serviceName, strategy, NULL, domainId)
{
    _impl = new SequenceTestServerImpl();

    createRPCs();
}

SequenceTestServer::SequenceTestServer(std::string serviceName, eProsima::RPCDDS::ServerStrategy *strategy,
    eProsima::RPCDDS::Transport *transport, int domainId) :
    Server(serviceName, strategy, transport, domainId)
{
    _impl = new SequenceTestServerImpl();
    
    createRPCs();
}

SequenceTestServer::~SequenceTestServer()
{
    delete _impl;    
}

void SequenceTestServer::createRPCs()
{
    this->setRPC(new SequenceTest_getSLongServerRPC("getSLong", this,
                SequenceTest_getSLongRequestUtils::registerType(getParticipant()),
                SequenceTest_getSLongReplyUtils::registerType(getParticipant()),
                &SequenceTestServer::getSLong));
    this->setRPC(new SequenceTest_getStringServerRPC("getString", this,
                SequenceTest_getStringRequestUtils::registerType(getParticipant()),
                SequenceTest_getStringReplyUtils::registerType(getParticipant()),
                &SequenceTestServer::getString));
    this->setRPC(new SequenceTest_getStringBoundedServerRPC("getStringBounded", this,
                SequenceTest_getStringBoundedRequestUtils::registerType(getParticipant()),
                SequenceTest_getStringBoundedReplyUtils::registerType(getParticipant()),
                &SequenceTestServer::getStringBounded));

}

void SequenceTestServer::getSLong(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    SequenceTestServer *srv = dynamic_cast<SequenceTestServer*>(server);
    largo l1;
    largo l2;
    largo l3;
    memset(&l3, 0, sizeof(largo));
    largo getSLong_ret;
    memset(&getSLong_ret, 0, sizeof(largo));   
    SequenceTest_getSLongReply replyData;
    
    largo_initialize(&l2);

    SequenceTest_getSLongRequestUtils::extractTypeData(*(SequenceTest_getSLongRequest*)requestData, l1, l2);

    try
    {
        getSLong_ret = srv->_impl->getSLong(l1, l2, l3);

        SequenceTest_getSLongReplyUtils::setTypeData(replyData, l2, l3, getSLong_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    SequenceTest_getSLongRequestTypeSupport::delete_data((SequenceTest_getSLongRequest*)requestData);
    
    largo_finalize(&getSLong_ret);
    largo_finalize(&l2);
    largo_finalize(&l3);
}
void SequenceTestServer::getString(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    SequenceTestServer *srv = dynamic_cast<SequenceTestServer*>(server);
    cadena s1;
    cadena s2;
    cadena s3;
    memset(&s3, 0, sizeof(cadena));
    cadena getString_ret;
    memset(&getString_ret, 0, sizeof(cadena));   
    SequenceTest_getStringReply replyData;
    
    cadena_initialize(&s2);

    SequenceTest_getStringRequestUtils::extractTypeData(*(SequenceTest_getStringRequest*)requestData, s1, s2);

    try
    {
        getString_ret = srv->_impl->getString(s1, s2, s3);

        SequenceTest_getStringReplyUtils::setTypeData(replyData, s2, s3, getString_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    SequenceTest_getStringRequestTypeSupport::delete_data((SequenceTest_getStringRequest*)requestData);
    
    cadena_finalize(&getString_ret);
    cadena_finalize(&s2);
    cadena_finalize(&s3);
}
void SequenceTestServer::getStringBounded(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    SequenceTestServer *srv = dynamic_cast<SequenceTestServer*>(server);
    dattos sb1;
    dattos sb2;
    dattos sb3;
    memset(&sb3, 0, sizeof(dattos));
    dattos getStringBounded_ret;
    memset(&getStringBounded_ret, 0, sizeof(dattos));   
    SequenceTest_getStringBoundedReply replyData;
    
    dattos_initialize(&sb2);

    SequenceTest_getStringBoundedRequestUtils::extractTypeData(*(SequenceTest_getStringBoundedRequest*)requestData, sb1, sb2);

    try
    {
        getStringBounded_ret = srv->_impl->getStringBounded(sb1, sb2, sb3);

        SequenceTest_getStringBoundedReplyUtils::setTypeData(replyData, sb2, sb3, getStringBounded_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    SequenceTest_getStringBoundedRequestTypeSupport::delete_data((SequenceTest_getStringBoundedRequest*)requestData);
    
    dattos_finalize(&getStringBounded_ret);
    dattos_finalize(&sb2);
    dattos_finalize(&sb3);
}