/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "OnewayCallTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "OnewayCallTestRequestReplyPlugin.h"
#include "OnewayCallTestAsyncSupport.h"
#include "exceptions/Exceptions.h"

OnewayCallTestProxy::OnewayCallTestProxy(std::string remoteServiceName, int domainId, long timeout) :
    Client(remoteServiceName, NULL, domainId, timeout)
{
    createRPCs();
}

OnewayCallTestProxy::OnewayCallTestProxy(std::string remoteServiceName, eProsima::DDSRPC::Transport *transport, int domainId, long timeout) :
    Client(remoteServiceName, transport, domainId, timeout)
{
    createRPCs();
}

OnewayCallTestProxy::~OnewayCallTestProxy()
{
    delete setLong_Service;
    delete getLong_Service;
    delete setBoolean_Service;
    delete getBoolean_Service;
    delete setString_Service;
    delete getString_Service;
    delete setStruct_Service;
    delete getStruct_Service;
}

void OnewayCallTestProxy::createRPCs()
{
    this->setLong_Service = new OnewayCallTest_setLongClientRPC("setLong",
                                  OnewayCallTest_setLongRequestUtils::registerType(getParticipant()),
                                  this);
    this->getLong_Service = new OnewayCallTest_getLongClientRPC("getLong",
                                  OnewayCallTest_getLongRequestUtils::registerType(getParticipant()),
                                  OnewayCallTest_getLongReplyUtils::registerType(getParticipant()),
                                  this);
    this->setBoolean_Service = new OnewayCallTest_setBooleanClientRPC("setBoolean",
                                  OnewayCallTest_setBooleanRequestUtils::registerType(getParticipant()),
                                  this);
    this->getBoolean_Service = new OnewayCallTest_getBooleanClientRPC("getBoolean",
                                  OnewayCallTest_getBooleanRequestUtils::registerType(getParticipant()),
                                  OnewayCallTest_getBooleanReplyUtils::registerType(getParticipant()),
                                  this);
    this->setString_Service = new OnewayCallTest_setStringClientRPC("setString",
                                  OnewayCallTest_setStringRequestUtils::registerType(getParticipant()),
                                  this);
    this->getString_Service = new OnewayCallTest_getStringClientRPC("getString",
                                  OnewayCallTest_getStringRequestUtils::registerType(getParticipant()),
                                  OnewayCallTest_getStringReplyUtils::registerType(getParticipant()),
                                  this);
    this->setStruct_Service = new OnewayCallTest_setStructClientRPC("setStruct",
                                  OnewayCallTest_setStructRequestUtils::registerType(getParticipant()),
                                  this);
    this->getStruct_Service = new OnewayCallTest_getStructClientRPC("getStruct",
                                  OnewayCallTest_getStructRequestUtils::registerType(getParticipant()),
                                  OnewayCallTest_getStructReplyUtils::registerType(getParticipant()),
                                  this);

}

 
void OnewayCallTestProxy::setLong(/*in*/ DDS_Long lo1) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    OnewayCallTest_setLongRequest instance;
    OnewayCallTest_setLongRequestUtils::setTypeData(instance, lo1);
    retcode = setLong_Service->execute(&instance, NULL, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

}
 
DDS_Long OnewayCallTestProxy::getLong() 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    DDS_Long  getLong_ret = 0;    
    OnewayCallTest_getLongRequest instance;
    OnewayCallTest_getLongReply retInstance;

    OnewayCallTest_getLongReply_initialize(&retInstance);    
    OnewayCallTest_getLongRequestUtils::setTypeData(instance);
    retcode = getLong_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        OnewayCallTest_getLongReplyUtils::extractTypeData(retInstance, retcode, getLong_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
    };
    

    return getLong_ret;
}
 
void OnewayCallTestProxy::setBoolean(/*in*/ DDS_Boolean bo1) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    OnewayCallTest_setBooleanRequest instance;
    OnewayCallTest_setBooleanRequestUtils::setTypeData(instance, bo1);
    retcode = setBoolean_Service->execute(&instance, NULL, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

}
 
DDS_Boolean OnewayCallTestProxy::getBoolean() 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    DDS_Boolean  getBoolean_ret = RTI_FALSE;    
    OnewayCallTest_getBooleanRequest instance;
    OnewayCallTest_getBooleanReply retInstance;

    OnewayCallTest_getBooleanReply_initialize(&retInstance);    
    OnewayCallTest_getBooleanRequestUtils::setTypeData(instance);
    retcode = getBoolean_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        OnewayCallTest_getBooleanReplyUtils::extractTypeData(retInstance, retcode, getBoolean_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
    };
    

    return getBoolean_ret;
}
 
void OnewayCallTestProxy::setString(/*in*/ char* s1) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    OnewayCallTest_setStringRequest instance;
    OnewayCallTest_setStringRequestUtils::setTypeData(instance, s1);
    retcode = setString_Service->execute(&instance, NULL, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

}
 
char* OnewayCallTestProxy::getString() 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    char*  getString_ret = NULL;    
    OnewayCallTest_getStringRequest instance;
    OnewayCallTest_getStringReply retInstance;

    OnewayCallTest_getStringReply_initialize(&retInstance);    
    OnewayCallTest_getStringRequestUtils::setTypeData(instance);
    retcode = getString_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        OnewayCallTest_getStringReplyUtils::extractTypeData(retInstance, retcode, getString_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
    };
    

    return getString_ret;
}
 
void OnewayCallTestProxy::setStruct(/*in*/ const Structure& ev) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    OnewayCallTest_setStructRequest instance;
    OnewayCallTest_setStructRequestUtils::setTypeData(instance, ev);
    retcode = setStruct_Service->execute(&instance, NULL, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

}
 
Structure OnewayCallTestProxy::getStruct() 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    Structure getStruct_ret;
        
    OnewayCallTest_getStructRequest instance;
    OnewayCallTest_getStructReply retInstance;

    OnewayCallTest_getStructReply_initialize(&retInstance);    
    OnewayCallTest_getStructRequestUtils::setTypeData(instance);
    retcode = getStruct_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        OnewayCallTest_getStructReplyUtils::extractTypeData(retInstance, retcode, getStruct_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
    };
    

    return getStruct_ret;
}

 
void OnewayCallTestProxy::getLong_async(OnewayCallTest_getLongCallbackHandler &obj) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    OnewayCallTest_getLongRequest instance;
    OnewayCallTest_getLongTask *task = NULL;
    OnewayCallTest_getLongRequestUtils::setTypeData(instance);
    task = new OnewayCallTest_getLongTask(obj, this);
    retcode = getLong_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void OnewayCallTestProxy::getBoolean_async(OnewayCallTest_getBooleanCallbackHandler &obj) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    OnewayCallTest_getBooleanRequest instance;
    OnewayCallTest_getBooleanTask *task = NULL;
    OnewayCallTest_getBooleanRequestUtils::setTypeData(instance);
    task = new OnewayCallTest_getBooleanTask(obj, this);
    retcode = getBoolean_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void OnewayCallTestProxy::getString_async(OnewayCallTest_getStringCallbackHandler &obj) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    OnewayCallTest_getStringRequest instance;
    OnewayCallTest_getStringTask *task = NULL;
    OnewayCallTest_getStringRequestUtils::setTypeData(instance);
    task = new OnewayCallTest_getStringTask(obj, this);
    retcode = getString_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void OnewayCallTestProxy::getStruct_async(OnewayCallTest_getStructCallbackHandler &obj) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    OnewayCallTest_getStructRequest instance;
    OnewayCallTest_getStructTask *task = NULL;
    OnewayCallTest_getStructRequestUtils::setTypeData(instance);
    task = new OnewayCallTest_getStructTask(obj, this);
    retcode = getStruct_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}