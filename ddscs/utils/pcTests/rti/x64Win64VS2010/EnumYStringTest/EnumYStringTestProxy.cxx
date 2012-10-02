/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "EnumYStringTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "EnumYStringTestRequestReplyPlugin.h"
#include "EnumYStringTestAsyncSupport.h"


EnumYStringTestProxyH::EnumYStringTestProxyH(eProsima::DDSRPC::Transport *transport, int domainId, long timeout) :
    Client(transport, domainId, timeout)
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

EnumYStringTestProxyH::~EnumYStringTestProxyH()
{
    delete getEnum_Service;
    delete getString_Service;
    delete getStringBounded_Service;
}

 
eProsima::DDSRPC::ReturnMessage EnumYStringTestProxyH::getEnum(/*in*/ const Valores v1, /*inout*/ Valores &v2, /*out*/ Valores &v3, /*out*/ Valores &getEnum_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getEnumRequest *instance = NULL;
    getEnumReply* retInstance = getEnumReplyTypeSupport::create_data();

    instance = getEnumRequestUtils::createTypeData(v1  , v2  );
    returnedValue = getEnum_Service->execute(instance, retInstance, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::RECEIVED_OTHER_REQUEST:
            printf("Y ESTE PAQUETE?\n");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            printf("TIMEOUT\n");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            printf("SERVER ERROR\n");
            break;
        case eProsima::DDSRPC::WITHOUT_RESOURCES:
            printf("SERVER WITHOUT RESOURCES\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:
            getEnumReplyUtils::extractTypeData(retInstance, v2  , v3  , getEnum_ret  );
            //getEnumReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getEnumReplyTypeSupport::delete_data(retInstance);
    getEnumRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage EnumYStringTestProxyH::getString(/*in*/ const char* s1, /*inout*/ char* &s2, /*out*/ char* &s3, /*out*/ char* &getString_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getStringRequest *instance = NULL;
    getStringReply* retInstance = getStringReplyTypeSupport::create_data();

    instance = getStringRequestUtils::createTypeData(s1  , s2  );
    returnedValue = getString_Service->execute(instance, retInstance, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::RECEIVED_OTHER_REQUEST:
            printf("Y ESTE PAQUETE?\n");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            printf("TIMEOUT\n");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            printf("SERVER ERROR\n");
            break;
        case eProsima::DDSRPC::WITHOUT_RESOURCES:
            printf("SERVER WITHOUT RESOURCES\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:
            getStringReplyUtils::extractTypeData(retInstance, s2  , s3  , getString_ret  );
            //getStringReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getStringReplyTypeSupport::delete_data(retInstance);
    getStringRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage EnumYStringTestProxyH::getStringBounded(/*in*/ const char* sb1, /*inout*/ char* &sb2, /*out*/ char* &sb3, /*out*/ char* &getStringBounded_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getStringBoundedRequest *instance = NULL;
    getStringBoundedReply* retInstance = getStringBoundedReplyTypeSupport::create_data();

    instance = getStringBoundedRequestUtils::createTypeData(sb1  , sb2  );
    returnedValue = getStringBounded_Service->execute(instance, retInstance, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::RECEIVED_OTHER_REQUEST:
            printf("Y ESTE PAQUETE?\n");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            printf("TIMEOUT\n");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            printf("SERVER ERROR\n");
            break;
        case eProsima::DDSRPC::WITHOUT_RESOURCES:
            printf("SERVER WITHOUT RESOURCES\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:
            getStringBoundedReplyUtils::extractTypeData(retInstance, sb2  , sb3  , getStringBounded_ret  );
            //getStringBoundedReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getStringBoundedReplyTypeSupport::delete_data(retInstance);
    getStringBoundedRequestTypeSupport::delete_data(instance);

    return returnedValue;
}

 
eProsima::DDSRPC::ReturnMessage EnumYStringTestProxyH::getEnum_async(EnumYStringTest_getEnum &obj, /*in*/ const Valores v1, /*inout*/ const Valores v2) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getEnumRequest *instance = NULL;
    EnumYStringTest_getEnumTask *task = NULL;
    instance = getEnumRequestUtils::createTypeData(v1  , v2  );
    task = new EnumYStringTest_getEnumTask(obj, this);
    returnedValue = getEnum_Service->executeAsync(instance, task, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    getEnumRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage EnumYStringTestProxyH::getString_async(EnumYStringTest_getString &obj, /*in*/ const char* s1, /*inout*/ const char* s2) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getStringRequest *instance = NULL;
    EnumYStringTest_getStringTask *task = NULL;
    instance = getStringRequestUtils::createTypeData(s1  , s2  );
    task = new EnumYStringTest_getStringTask(obj, this);
    returnedValue = getString_Service->executeAsync(instance, task, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    getStringRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage EnumYStringTestProxyH::getStringBounded_async(EnumYStringTest_getStringBounded &obj, /*in*/ const char* sb1, /*inout*/ const char* sb2) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getStringBoundedRequest *instance = NULL;
    EnumYStringTest_getStringBoundedTask *task = NULL;
    instance = getStringBoundedRequestUtils::createTypeData(sb1  , sb2  );
    task = new EnumYStringTest_getStringBoundedTask(obj, this);
    returnedValue = getStringBounded_Service->executeAsync(instance, task, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    getStringBoundedRequestTypeSupport::delete_data(instance);

    return returnedValue;
}

EnumYStringTestProxy::EnumYStringTestProxy(int domainId, long timeout) :
    EnumYStringTestProxyH(new eProsima::DDSRPC::UDPTransport(), domainId, timeout)
{
}

EnumYStringTestProxy::~EnumYStringTestProxy()
{
}

EnumYStringTestWANProxy::EnumYStringTestWANProxy(const char *to_connect, int domainId, long timeout) :
    EnumYStringTestProxyH(new eProsima::DDSRPC::TCPTransport(to_connect), domainId, timeout)
{
}

EnumYStringTestWANProxy::~EnumYStringTestWANProxy()
{
}