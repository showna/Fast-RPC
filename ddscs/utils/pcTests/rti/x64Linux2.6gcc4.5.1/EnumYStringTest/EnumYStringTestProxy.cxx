/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "EnumYStringTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "EnumYStringTestRequestReplyPlugin.h"
#include "EnumYStringTestAsyncSupport.h"
#include "exceptions/Exceptions.h"

EnumYStringTestProxy::EnumYStringTestProxy(int domainId, long timeout) :
    Client(NULL, domainId, timeout)
{
    createRPCs();
}

EnumYStringTestProxy::EnumYStringTestProxy(eProsima::DDSRPC::Transport *transport, int domainId, long timeout) :
    Client(transport, domainId, timeout)
{
    createRPCs();
}

EnumYStringTestProxy::~EnumYStringTestProxy()
{
    delete getEnum_Service;
    delete getString_Service;
    delete getStringBounded_Service;
}

void EnumYStringTestProxy::createRPCs()
{
    this->getEnum_Service = new getEnumClientRPC("getEnum",
                                  getEnumRequestUtils::registerType(getParticipant()),
                                  getEnumReplyUtils::registerType(getParticipant()),
                                  this);
    this->getString_Service = new getStringClientRPC("getString",
                                  getStringRequestUtils::registerType(getParticipant()),
                                  getStringReplyUtils::registerType(getParticipant()),
                                  this);
    this->getStringBounded_Service = new getStringBoundedClientRPC("getStringBounded",
                                  getStringBoundedRequestUtils::registerType(getParticipant()),
                                  getStringBoundedReplyUtils::registerType(getParticipant()),
                                  this);

}

 
Valores EnumYStringTestProxy::getEnum(/*in*/ Valores v1, /*inout*/ Valores& v2, /*out*/ Valores& v3) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    Valores  getEnum_ret = VALOR1;    
    getEnumRequest instance;
    getEnumReply retInstance;

    getEnumReply_initialize(&retInstance);    
    getEnumRequestUtils::setTypeData(instance, v1, v2);
    retcode = getEnum_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        getEnumReplyUtils::extractTypeData(retInstance, retcode, v2, v3, getEnum_ret); 
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            throw eProsima::DDSRPC::ServerException("Error in server side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getEnum_ret;
}
 
char* EnumYStringTestProxy::getString(/*in*/ char* s1, /*inout*/ char*& s2, /*out*/ char*& s3) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    char*  getString_ret = NULL;    
    getStringRequest instance;
    getStringReply retInstance;

    getStringReply_initialize(&retInstance);    
    getStringRequestUtils::setTypeData(instance, s1, s2);
    retcode = getString_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        getStringReplyUtils::extractTypeData(retInstance, retcode, s2, s3, getString_ret); 
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            throw eProsima::DDSRPC::ServerException("Error in server side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getString_ret;
}
 
char* EnumYStringTestProxy::getStringBounded(/*in*/ char* sb1, /*inout*/ char*& sb2, /*out*/ char*& sb3) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    char*  getStringBounded_ret = NULL;    
    getStringBoundedRequest instance;
    getStringBoundedReply retInstance;

    getStringBoundedReply_initialize(&retInstance);    
    getStringBoundedRequestUtils::setTypeData(instance, sb1, sb2);
    retcode = getStringBounded_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        getStringBoundedReplyUtils::extractTypeData(retInstance, retcode, sb2, sb3, getStringBounded_ret); 
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            throw eProsima::DDSRPC::ServerException("Error in server side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getStringBounded_ret;
}

 
void EnumYStringTestProxy::getEnum_async(EnumYStringTest_getEnum &obj, /*in*/ Valores v1, /*inout*/ Valores v2) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    getEnumRequest instance;
    EnumYStringTest_getEnumTask *task = NULL;
    getEnumRequestUtils::setTypeData(instance, v1, v2);
    task = new EnumYStringTest_getEnumTask(obj, this);
    retcode = getEnum_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void EnumYStringTestProxy::getString_async(EnumYStringTest_getString &obj, /*in*/ char* s1, /*inout*/ char* s2) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    getStringRequest instance;
    EnumYStringTest_getStringTask *task = NULL;
    getStringRequestUtils::setTypeData(instance, s1, s2);
    task = new EnumYStringTest_getStringTask(obj, this);
    retcode = getString_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void EnumYStringTestProxy::getStringBounded_async(EnumYStringTest_getStringBounded &obj, /*in*/ char* sb1, /*inout*/ char* sb2) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_ERROR;
    getStringBoundedRequest instance;
    EnumYStringTest_getStringBoundedTask *task = NULL;
    getStringBoundedRequestUtils::setTypeData(instance, sb1, sb2);
    task = new EnumYStringTest_getStringBoundedTask(obj, this);
    retcode = getStringBounded_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            throw eProsima::DDSRPC::ClientException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}