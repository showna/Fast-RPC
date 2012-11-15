/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "BasicTypeTestServer.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "exceptions/ServerInternalException.h"
#include "BasicTypeTestRequestReplyPlugin.h"

#include "BasicTypeTestServerRPCSupport.h"

BasicTypeTestServer::BasicTypeTestServer(std::string serviceName, eProsima::DDSRPC::ServerStrategy *strategy,
    int domainId) :
    Server(serviceName, strategy, NULL, domainId)
{
    _impl = new BasicTypeTestServerImpl();

    createRPCs();
}

BasicTypeTestServer::BasicTypeTestServer(std::string serviceName, eProsima::DDSRPC::ServerStrategy *strategy,
    eProsima::DDSRPC::Transport *transport, int domainId) :
    Server(serviceName, strategy, transport, domainId)
{
    _impl = new BasicTypeTestServerImpl();
    
    createRPCs();
}

BasicTypeTestServer::~BasicTypeTestServer()
{
    delete _impl;    
}

void BasicTypeTestServer::createRPCs()
{
    this->setRPC(new BasicTypeTest_getOctetServerRPC("getOctet", this,
                BasicTypeTest_getOctetRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getOctetReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getOctet));
    this->setRPC(new BasicTypeTest_getCharServerRPC("getChar", this,
                BasicTypeTest_getCharRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getCharReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getChar));
    this->setRPC(new BasicTypeTest_getWCharServerRPC("getWChar", this,
                BasicTypeTest_getWCharRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getWCharReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getWChar));
    this->setRPC(new BasicTypeTest_getShortServerRPC("getShort", this,
                BasicTypeTest_getShortRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getShortReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getShort));
    this->setRPC(new BasicTypeTest_getUShortServerRPC("getUShort", this,
                BasicTypeTest_getUShortRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getUShortReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getUShort));
    this->setRPC(new BasicTypeTest_getLongServerRPC("getLong", this,
                BasicTypeTest_getLongRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getLongReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getLong));
    this->setRPC(new BasicTypeTest_getULongServerRPC("getULong", this,
                BasicTypeTest_getULongRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getULongReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getULong));
    this->setRPC(new BasicTypeTest_getLLongServerRPC("getLLong", this,
                BasicTypeTest_getLLongRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getLLongReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getLLong));
    this->setRPC(new BasicTypeTest_getULLongServerRPC("getULLong", this,
                BasicTypeTest_getULLongRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getULLongReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getULLong));
    this->setRPC(new BasicTypeTest_getFloatServerRPC("getFloat", this,
                BasicTypeTest_getFloatRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getFloatReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getFloat));
    this->setRPC(new BasicTypeTest_getDoubleServerRPC("getDouble", this,
                BasicTypeTest_getDoubleRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getDoubleReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getDouble));
    this->setRPC(new BasicTypeTest_getBooleanServerRPC("getBoolean", this,
                BasicTypeTest_getBooleanRequestUtils::registerType(getParticipant()),
                BasicTypeTest_getBooleanReplyUtils::registerType(getParticipant()),
                &BasicTypeTestServer::getBoolean));

}

void BasicTypeTestServer::getOctet(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_Octet  oc1 = 0;    
    DDS_Octet  oc2 = 0;    
    DDS_Octet  oc3 = 0;    
    DDS_Octet  getOctet_ret = 0;       
    BasicTypeTest_getOctetReply replyData;
    
        

    BasicTypeTest_getOctetRequestUtils::extractTypeData(*(BasicTypeTest_getOctetRequest*)requestData, oc1, oc2);

    try
    {
        getOctet_ret = srv->_impl->getOctet(oc1, oc2, oc3);

        BasicTypeTest_getOctetReplyUtils::setTypeData(replyData, oc2, oc3, getOctet_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getOctetRequestTypeSupport::delete_data((BasicTypeTest_getOctetRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getChar(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_Char  ch1 = 0;    
    DDS_Char  ch2 = 0;    
    DDS_Char  ch3 = 0;    
    DDS_Char  getChar_ret = 0;       
    BasicTypeTest_getCharReply replyData;
    
        

    BasicTypeTest_getCharRequestUtils::extractTypeData(*(BasicTypeTest_getCharRequest*)requestData, ch1, ch2);

    try
    {
        getChar_ret = srv->_impl->getChar(ch1, ch2, ch3);

        BasicTypeTest_getCharReplyUtils::setTypeData(replyData, ch2, ch3, getChar_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getCharRequestTypeSupport::delete_data((BasicTypeTest_getCharRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getWChar(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_Wchar  wch1 = 0;    
    DDS_Wchar  wch2 = 0;    
    DDS_Wchar  wch3 = 0;    
    DDS_Wchar  getWChar_ret = 0;       
    BasicTypeTest_getWCharReply replyData;
    
        

    BasicTypeTest_getWCharRequestUtils::extractTypeData(*(BasicTypeTest_getWCharRequest*)requestData, wch1, wch2);

    try
    {
        getWChar_ret = srv->_impl->getWChar(wch1, wch2, wch3);

        BasicTypeTest_getWCharReplyUtils::setTypeData(replyData, wch2, wch3, getWChar_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getWCharRequestTypeSupport::delete_data((BasicTypeTest_getWCharRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getShort(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_Short  sh1 = 0;    
    DDS_Short  sh2 = 0;    
    DDS_Short  sh3 = 0;    
    DDS_Short  getShort_ret = 0;       
    BasicTypeTest_getShortReply replyData;
    
        

    BasicTypeTest_getShortRequestUtils::extractTypeData(*(BasicTypeTest_getShortRequest*)requestData, sh1, sh2);

    try
    {
        getShort_ret = srv->_impl->getShort(sh1, sh2, sh3);

        BasicTypeTest_getShortReplyUtils::setTypeData(replyData, sh2, sh3, getShort_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getShortRequestTypeSupport::delete_data((BasicTypeTest_getShortRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getUShort(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_UnsignedShort  ush1 = 0;    
    DDS_UnsignedShort  ush2 = 0;    
    DDS_UnsignedShort  ush3 = 0;    
    DDS_UnsignedShort  getUShort_ret = 0;       
    BasicTypeTest_getUShortReply replyData;
    
        

    BasicTypeTest_getUShortRequestUtils::extractTypeData(*(BasicTypeTest_getUShortRequest*)requestData, ush1, ush2);

    try
    {
        getUShort_ret = srv->_impl->getUShort(ush1, ush2, ush3);

        BasicTypeTest_getUShortReplyUtils::setTypeData(replyData, ush2, ush3, getUShort_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getUShortRequestTypeSupport::delete_data((BasicTypeTest_getUShortRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_Long  lo1 = 0;    
    DDS_Long  lo2 = 0;    
    DDS_Long  lo3 = 0;    
    DDS_Long  getLong_ret = 0;       
    BasicTypeTest_getLongReply replyData;
    
        

    BasicTypeTest_getLongRequestUtils::extractTypeData(*(BasicTypeTest_getLongRequest*)requestData, lo1, lo2);

    try
    {
        getLong_ret = srv->_impl->getLong(lo1, lo2, lo3);

        BasicTypeTest_getLongReplyUtils::setTypeData(replyData, lo2, lo3, getLong_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getLongRequestTypeSupport::delete_data((BasicTypeTest_getLongRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getULong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_UnsignedLong  ulo1 = 0;    
    DDS_UnsignedLong  ulo2 = 0;    
    DDS_UnsignedLong  ulo3 = 0;    
    DDS_UnsignedLong  getULong_ret = 0;       
    BasicTypeTest_getULongReply replyData;
    
        

    BasicTypeTest_getULongRequestUtils::extractTypeData(*(BasicTypeTest_getULongRequest*)requestData, ulo1, ulo2);

    try
    {
        getULong_ret = srv->_impl->getULong(ulo1, ulo2, ulo3);

        BasicTypeTest_getULongReplyUtils::setTypeData(replyData, ulo2, ulo3, getULong_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getULongRequestTypeSupport::delete_data((BasicTypeTest_getULongRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getLLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_LongLong  llo1 = 0;    
    DDS_LongLong  llo2 = 0;    
    DDS_LongLong  llo3 = 0;    
    DDS_LongLong  getLLong_ret = 0;       
    BasicTypeTest_getLLongReply replyData;
    
        

    BasicTypeTest_getLLongRequestUtils::extractTypeData(*(BasicTypeTest_getLLongRequest*)requestData, llo1, llo2);

    try
    {
        getLLong_ret = srv->_impl->getLLong(llo1, llo2, llo3);

        BasicTypeTest_getLLongReplyUtils::setTypeData(replyData, llo2, llo3, getLLong_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getLLongRequestTypeSupport::delete_data((BasicTypeTest_getLLongRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getULLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_UnsignedLongLong  ullo1 = 0;    
    DDS_UnsignedLongLong  ullo2 = 0;    
    DDS_UnsignedLongLong  ullo3 = 0;    
    DDS_UnsignedLongLong  getULLong_ret = 0;       
    BasicTypeTest_getULLongReply replyData;
    
        

    BasicTypeTest_getULLongRequestUtils::extractTypeData(*(BasicTypeTest_getULLongRequest*)requestData, ullo1, ullo2);

    try
    {
        getULLong_ret = srv->_impl->getULLong(ullo1, ullo2, ullo3);

        BasicTypeTest_getULLongReplyUtils::setTypeData(replyData, ullo2, ullo3, getULLong_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getULLongRequestTypeSupport::delete_data((BasicTypeTest_getULLongRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getFloat(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_Float  fl1 = 0;    
    DDS_Float  fl2 = 0;    
    DDS_Float  fl3 = 0;    
    DDS_Float  getFloat_ret = 0;       
    BasicTypeTest_getFloatReply replyData;
    
        

    BasicTypeTest_getFloatRequestUtils::extractTypeData(*(BasicTypeTest_getFloatRequest*)requestData, fl1, fl2);

    try
    {
        getFloat_ret = srv->_impl->getFloat(fl1, fl2, fl3);

        BasicTypeTest_getFloatReplyUtils::setTypeData(replyData, fl2, fl3, getFloat_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getFloatRequestTypeSupport::delete_data((BasicTypeTest_getFloatRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getDouble(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_Double  do1 = 0;    
    DDS_Double  do2 = 0;    
    DDS_Double  do3 = 0;    
    DDS_Double  getDouble_ret = 0;       
    BasicTypeTest_getDoubleReply replyData;
    
        

    BasicTypeTest_getDoubleRequestUtils::extractTypeData(*(BasicTypeTest_getDoubleRequest*)requestData, do1, do2);

    try
    {
        getDouble_ret = srv->_impl->getDouble(do1, do2, do3);

        BasicTypeTest_getDoubleReplyUtils::setTypeData(replyData, do2, do3, getDouble_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getDoubleRequestTypeSupport::delete_data((BasicTypeTest_getDoubleRequest*)requestData);
    
        
        
        
}
void BasicTypeTestServer::getBoolean(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    BasicTypeTestServer *srv = dynamic_cast<BasicTypeTestServer*>(server);
    DDS_Boolean  bo1 = RTI_FALSE;    
    DDS_Boolean  bo2 = RTI_FALSE;    
    DDS_Boolean  bo3 = RTI_FALSE;    
    DDS_Boolean  getBoolean_ret = RTI_FALSE;       
    BasicTypeTest_getBooleanReply replyData;
    
        

    BasicTypeTest_getBooleanRequestUtils::extractTypeData(*(BasicTypeTest_getBooleanRequest*)requestData, bo1, bo2);

    try
    {
        getBoolean_ret = srv->_impl->getBoolean(bo1, bo2, bo3);

        BasicTypeTest_getBooleanReplyUtils::setTypeData(replyData, bo2, bo3, getBoolean_ret);
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
        replyData.header.ddsrpcRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::DDSRPC::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.ddsrpcRetCode = eProsima::DDSRPC::SERVER_INTERNAL_ERROR;
        replyData.header.ddsrpcRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    BasicTypeTest_getBooleanRequestTypeSupport::delete_data((BasicTypeTest_getBooleanRequest*)requestData);
    
        
        
        
}