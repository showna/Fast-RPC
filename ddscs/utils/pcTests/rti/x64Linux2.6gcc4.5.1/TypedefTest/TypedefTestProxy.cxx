/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "TypedefTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "TypedefTestRequestReplyPlugin.h"
#include "TypedefTestAsyncSupport.h"
#include "exceptions/Exceptions.h"

TypedefTestProxy::TypedefTestProxy(std::string remoteServiceName, int domainId, long timeout) :
    Client(remoteServiceName, NULL, domainId, timeout)
{
    createRPCs();
}

TypedefTestProxy::TypedefTestProxy(std::string remoteServiceName, eProsima::DDSRPC::Transport *transport, int domainId, long timeout) :
    Client(remoteServiceName, transport, domainId, timeout)
{
    createRPCs();
}

TypedefTestProxy::~TypedefTestProxy()
{
    delete getLargo_Service;
    delete getLarguisimo_Service;
    delete getDatosDef_Service;
    delete getDatosDefondo_Service;
    delete getCadena_Service;
    delete getCorrea_Service;
}

void TypedefTestProxy::createRPCs()
{
    this->getLargo_Service = new TypedefTest_getLargoClientRPC("getLargo",
                                  TypedefTest_getLargoRequestUtils::registerType(getParticipant()),
                                  TypedefTest_getLargoReplyUtils::registerType(getParticipant()),
                                  this);
    this->getLarguisimo_Service = new TypedefTest_getLarguisimoClientRPC("getLarguisimo",
                                  TypedefTest_getLarguisimoRequestUtils::registerType(getParticipant()),
                                  TypedefTest_getLarguisimoReplyUtils::registerType(getParticipant()),
                                  this);
    this->getDatosDef_Service = new TypedefTest_getDatosDefClientRPC("getDatosDef",
                                  TypedefTest_getDatosDefRequestUtils::registerType(getParticipant()),
                                  TypedefTest_getDatosDefReplyUtils::registerType(getParticipant()),
                                  this);
    this->getDatosDefondo_Service = new TypedefTest_getDatosDefondoClientRPC("getDatosDefondo",
                                  TypedefTest_getDatosDefondoRequestUtils::registerType(getParticipant()),
                                  TypedefTest_getDatosDefondoReplyUtils::registerType(getParticipant()),
                                  this);
    this->getCadena_Service = new TypedefTest_getCadenaClientRPC("getCadena",
                                  TypedefTest_getCadenaRequestUtils::registerType(getParticipant()),
                                  TypedefTest_getCadenaReplyUtils::registerType(getParticipant()),
                                  this);
    this->getCorrea_Service = new TypedefTest_getCorreaClientRPC("getCorrea",
                                  TypedefTest_getCorreaRequestUtils::registerType(getParticipant()),
                                  TypedefTest_getCorreaReplyUtils::registerType(getParticipant()),
                                  this);

}

 
largo TypedefTestProxy::getLargo(/*in*/ largo l1, /*out*/ largo& l2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    largo  getLargo_ret = 0;    
    TypedefTest_getLargoRequest instance;
    TypedefTest_getLargoReply retInstance;

    TypedefTest_getLargoReply_initialize(&retInstance);    
    TypedefTest_getLargoRequestUtils::setTypeData(instance, l1);
    retcode = getLargo_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        TypedefTest_getLargoReplyUtils::extractTypeData(retInstance, retcode, l2, getLargo_ret);  
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
    

    return getLargo_ret;
}
 
larguisimo TypedefTestProxy::getLarguisimo(/*in*/ larguisimo ll1, /*out*/ larguisimo& ll2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    larguisimo  getLarguisimo_ret = 0;    
    TypedefTest_getLarguisimoRequest instance;
    TypedefTest_getLarguisimoReply retInstance;

    TypedefTest_getLarguisimoReply_initialize(&retInstance);    
    TypedefTest_getLarguisimoRequestUtils::setTypeData(instance, ll1);
    retcode = getLarguisimo_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        TypedefTest_getLarguisimoReplyUtils::extractTypeData(retInstance, retcode, ll2, getLarguisimo_ret);  
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
    

    return getLarguisimo_ret;
}
 
DatosDef TypedefTestProxy::getDatosDef(/*in*/ const DatosDef& d1, /*out*/ DatosDef& d2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    DatosDef getDatosDef_ret;
        
    TypedefTest_getDatosDefRequest instance;
    TypedefTest_getDatosDefReply retInstance;

    TypedefTest_getDatosDefReply_initialize(&retInstance);    
    TypedefTest_getDatosDefRequestUtils::setTypeData(instance, d1);
    retcode = getDatosDef_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        TypedefTest_getDatosDefReplyUtils::extractTypeData(retInstance, retcode, d2, getDatosDef_ret);  
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
    

    return getDatosDef_ret;
}
 
DatosDefondo TypedefTestProxy::getDatosDefondo(/*in*/ const DatosDefondo& dd1, /*out*/ DatosDefondo& dd2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    DatosDefondo getDatosDefondo_ret;
        
    TypedefTest_getDatosDefondoRequest instance;
    TypedefTest_getDatosDefondoReply retInstance;

    TypedefTest_getDatosDefondoReply_initialize(&retInstance);    
    TypedefTest_getDatosDefondoRequestUtils::setTypeData(instance, dd1);
    retcode = getDatosDefondo_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        TypedefTest_getDatosDefondoReplyUtils::extractTypeData(retInstance, retcode, dd2, getDatosDefondo_ret);  
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
    

    return getDatosDefondo_ret;
}
 
cadena TypedefTestProxy::getCadena(/*in*/ cadena c1, /*out*/ cadena& c2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    cadena  getCadena_ret = NULL;    
    TypedefTest_getCadenaRequest instance;
    TypedefTest_getCadenaReply retInstance;

    TypedefTest_getCadenaReply_initialize(&retInstance);    
    TypedefTest_getCadenaRequestUtils::setTypeData(instance, c1);
    retcode = getCadena_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        TypedefTest_getCadenaReplyUtils::extractTypeData(retInstance, retcode, c2, getCadena_ret);  
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
    

    return getCadena_ret;
}
 
correa TypedefTestProxy::getCorrea(/*in*/ correa cc1, /*out*/ correa& cc2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    correa  getCorrea_ret = NULL;    
    TypedefTest_getCorreaRequest instance;
    TypedefTest_getCorreaReply retInstance;

    TypedefTest_getCorreaReply_initialize(&retInstance);    
    TypedefTest_getCorreaRequestUtils::setTypeData(instance, cc1);
    retcode = getCorrea_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        TypedefTest_getCorreaReplyUtils::extractTypeData(retInstance, retcode, cc2, getCorrea_ret);  
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
    

    return getCorrea_ret;
}

 
void TypedefTestProxy::getLargo_async(TypedefTest_getLargoCallbackHandler &obj, /*in*/ largo l1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    TypedefTest_getLargoRequest instance;
    TypedefTest_getLargoTask *task = NULL;
    TypedefTest_getLargoRequestUtils::setTypeData(instance, l1);
    task = new TypedefTest_getLargoTask(obj, this);
    retcode = getLargo_Service->executeAsync(&instance, task, getTimeout());
    
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
 
void TypedefTestProxy::getLarguisimo_async(TypedefTest_getLarguisimoCallbackHandler &obj, /*in*/ larguisimo ll1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    TypedefTest_getLarguisimoRequest instance;
    TypedefTest_getLarguisimoTask *task = NULL;
    TypedefTest_getLarguisimoRequestUtils::setTypeData(instance, ll1);
    task = new TypedefTest_getLarguisimoTask(obj, this);
    retcode = getLarguisimo_Service->executeAsync(&instance, task, getTimeout());
    
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
 
void TypedefTestProxy::getDatosDef_async(TypedefTest_getDatosDefCallbackHandler &obj, /*in*/ const DatosDef& d1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    TypedefTest_getDatosDefRequest instance;
    TypedefTest_getDatosDefTask *task = NULL;
    TypedefTest_getDatosDefRequestUtils::setTypeData(instance, d1);
    task = new TypedefTest_getDatosDefTask(obj, this);
    retcode = getDatosDef_Service->executeAsync(&instance, task, getTimeout());
    
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
 
void TypedefTestProxy::getDatosDefondo_async(TypedefTest_getDatosDefondoCallbackHandler &obj, /*in*/ const DatosDefondo& dd1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    TypedefTest_getDatosDefondoRequest instance;
    TypedefTest_getDatosDefondoTask *task = NULL;
    TypedefTest_getDatosDefondoRequestUtils::setTypeData(instance, dd1);
    task = new TypedefTest_getDatosDefondoTask(obj, this);
    retcode = getDatosDefondo_Service->executeAsync(&instance, task, getTimeout());
    
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
 
void TypedefTestProxy::getCadena_async(TypedefTest_getCadenaCallbackHandler &obj, /*in*/ cadena c1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    TypedefTest_getCadenaRequest instance;
    TypedefTest_getCadenaTask *task = NULL;
    TypedefTest_getCadenaRequestUtils::setTypeData(instance, c1);
    task = new TypedefTest_getCadenaTask(obj, this);
    retcode = getCadena_Service->executeAsync(&instance, task, getTimeout());
    
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
 
void TypedefTestProxy::getCorrea_async(TypedefTest_getCorreaCallbackHandler &obj, /*in*/ correa cc1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    TypedefTest_getCorreaRequest instance;
    TypedefTest_getCorreaTask *task = NULL;
    TypedefTest_getCorreaRequestUtils::setTypeData(instance, cc1);
    task = new TypedefTest_getCorreaTask(obj, this);
    retcode = getCorrea_Service->executeAsync(&instance, task, getTimeout());
    
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