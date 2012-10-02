/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "TypedefTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "TypedefTestRequestReplyPlugin.h"
#include "TypedefTestAsyncSupport.h"


TypedefTestProxyH::TypedefTestProxyH(eProsima::DDSRPC::Transport *transport, int domainId, long timeout) :
    Client(transport, domainId, timeout)
{
    this->getLargo_Service = new getLargoClientRPC("getLargo",
                                  getLargoRequestUtils::registerType(getParticipant()),
                                  getLargoReplyUtils::registerType(getParticipant()),
                                  this);
    this->getLarguisimo_Service = new getLarguisimoClientRPC("getLarguisimo",
                                  getLarguisimoRequestUtils::registerType(getParticipant()),
                                  getLarguisimoReplyUtils::registerType(getParticipant()),
                                  this);
    this->getDatosDef_Service = new getDatosDefClientRPC("getDatosDef",
                                  getDatosDefRequestUtils::registerType(getParticipant()),
                                  getDatosDefReplyUtils::registerType(getParticipant()),
                                  this);
    this->getDatosDefondo_Service = new getDatosDefondoClientRPC("getDatosDefondo",
                                  getDatosDefondoRequestUtils::registerType(getParticipant()),
                                  getDatosDefondoReplyUtils::registerType(getParticipant()),
                                  this);
    this->getCadena_Service = new getCadenaClientRPC("getCadena",
                                  getCadenaRequestUtils::registerType(getParticipant()),
                                  getCadenaReplyUtils::registerType(getParticipant()),
                                  this);
    this->getCorrea_Service = new getCorreaClientRPC("getCorrea",
                                  getCorreaRequestUtils::registerType(getParticipant()),
                                  getCorreaReplyUtils::registerType(getParticipant()),
                                  this);

}

TypedefTestProxyH::~TypedefTestProxyH()
{
    delete getLargo_Service;
    delete getLarguisimo_Service;
    delete getDatosDef_Service;
    delete getDatosDefondo_Service;
    delete getCadena_Service;
    delete getCorrea_Service;
}

 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getLargo(/*in*/ const largo l1, /*out*/ largo &l2, /*out*/ largo &getLargo_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getLargoRequest *instance = NULL;
    getLargoReply* retInstance = getLargoReplyTypeSupport::create_data();

    instance = getLargoRequestUtils::createTypeData(l1  );
    returnedValue = getLargo_Service->execute(instance, retInstance, getTimeout());
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
            getLargoReplyUtils::extractTypeData(retInstance, l2  , getLargo_ret  );
            //getLargoReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getLargoReplyTypeSupport::delete_data(retInstance);
    getLargoRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getLarguisimo(/*in*/ const larguisimo ll1, /*out*/ larguisimo &ll2, /*out*/ larguisimo &getLarguisimo_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getLarguisimoRequest *instance = NULL;
    getLarguisimoReply* retInstance = getLarguisimoReplyTypeSupport::create_data();

    instance = getLarguisimoRequestUtils::createTypeData(ll1  );
    returnedValue = getLarguisimo_Service->execute(instance, retInstance, getTimeout());
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
            getLarguisimoReplyUtils::extractTypeData(retInstance, ll2  , getLarguisimo_ret  );
            //getLarguisimoReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getLarguisimoReplyTypeSupport::delete_data(retInstance);
    getLarguisimoRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getDatosDef(/*in*/ const DatosDef* d1, /*out*/ DatosDef* &d2, /*out*/ DatosDef* &getDatosDef_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getDatosDefRequest *instance = NULL;
    getDatosDefReply* retInstance = getDatosDefReplyTypeSupport::create_data();

    instance = getDatosDefRequestUtils::createTypeData(d1  );
    returnedValue = getDatosDef_Service->execute(instance, retInstance, getTimeout());
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
            getDatosDefReplyUtils::extractTypeData(retInstance, d2  , getDatosDef_ret  );
            //getDatosDefReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getDatosDefReplyTypeSupport::delete_data(retInstance);
    getDatosDefRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getDatosDefondo(/*in*/ const DatosDefondo* dd1, /*out*/ DatosDefondo* &dd2, /*out*/ DatosDefondo* &getDatosDefondo_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getDatosDefondoRequest *instance = NULL;
    getDatosDefondoReply* retInstance = getDatosDefondoReplyTypeSupport::create_data();

    instance = getDatosDefondoRequestUtils::createTypeData(dd1  );
    returnedValue = getDatosDefondo_Service->execute(instance, retInstance, getTimeout());
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
            getDatosDefondoReplyUtils::extractTypeData(retInstance, dd2  , getDatosDefondo_ret  );
            //getDatosDefondoReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getDatosDefondoReplyTypeSupport::delete_data(retInstance);
    getDatosDefondoRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getCadena(/*in*/ const cadena c1, /*out*/ cadena &c2, /*out*/ cadena &getCadena_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getCadenaRequest *instance = NULL;
    getCadenaReply* retInstance = getCadenaReplyTypeSupport::create_data();

    instance = getCadenaRequestUtils::createTypeData(c1  );
    returnedValue = getCadena_Service->execute(instance, retInstance, getTimeout());
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
            getCadenaReplyUtils::extractTypeData(retInstance, c2  , getCadena_ret  );
            //getCadenaReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getCadenaReplyTypeSupport::delete_data(retInstance);
    getCadenaRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getCorrea(/*in*/ const correa cc1, /*out*/ correa &cc2, /*out*/ correa &getCorrea_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getCorreaRequest *instance = NULL;
    getCorreaReply* retInstance = getCorreaReplyTypeSupport::create_data();

    instance = getCorreaRequestUtils::createTypeData(cc1  );
    returnedValue = getCorrea_Service->execute(instance, retInstance, getTimeout());
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
            getCorreaReplyUtils::extractTypeData(retInstance, cc2  , getCorrea_ret  );
            //getCorreaReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getCorreaReplyTypeSupport::delete_data(retInstance);
    getCorreaRequestTypeSupport::delete_data(instance);

    return returnedValue;
}

 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getLargo_async(TypedefTest_getLargo &obj, /*in*/ const largo l1) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getLargoRequest *instance = NULL;
    TypedefTest_getLargoTask *task = NULL;
    instance = getLargoRequestUtils::createTypeData(l1  );
    task = new TypedefTest_getLargoTask(obj, this);
    returnedValue = getLargo_Service->executeAsync(instance, task, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    getLargoRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getLarguisimo_async(TypedefTest_getLarguisimo &obj, /*in*/ const larguisimo ll1) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getLarguisimoRequest *instance = NULL;
    TypedefTest_getLarguisimoTask *task = NULL;
    instance = getLarguisimoRequestUtils::createTypeData(ll1  );
    task = new TypedefTest_getLarguisimoTask(obj, this);
    returnedValue = getLarguisimo_Service->executeAsync(instance, task, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    getLarguisimoRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getDatosDef_async(TypedefTest_getDatosDef &obj, /*in*/ const DatosDef* d1) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getDatosDefRequest *instance = NULL;
    TypedefTest_getDatosDefTask *task = NULL;
    instance = getDatosDefRequestUtils::createTypeData(d1  );
    task = new TypedefTest_getDatosDefTask(obj, this);
    returnedValue = getDatosDef_Service->executeAsync(instance, task, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    getDatosDefRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getDatosDefondo_async(TypedefTest_getDatosDefondo &obj, /*in*/ const DatosDefondo* dd1) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getDatosDefondoRequest *instance = NULL;
    TypedefTest_getDatosDefondoTask *task = NULL;
    instance = getDatosDefondoRequestUtils::createTypeData(dd1  );
    task = new TypedefTest_getDatosDefondoTask(obj, this);
    returnedValue = getDatosDefondo_Service->executeAsync(instance, task, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    getDatosDefondoRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getCadena_async(TypedefTest_getCadena &obj, /*in*/ const cadena c1) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getCadenaRequest *instance = NULL;
    TypedefTest_getCadenaTask *task = NULL;
    instance = getCadenaRequestUtils::createTypeData(c1  );
    task = new TypedefTest_getCadenaTask(obj, this);
    returnedValue = getCadena_Service->executeAsync(instance, task, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    getCadenaRequestTypeSupport::delete_data(instance);

    return returnedValue;
}
 
eProsima::DDSRPC::ReturnMessage TypedefTestProxyH::getCorrea_async(TypedefTest_getCorrea &obj, /*in*/ const correa cc1) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;    
    getCorreaRequest *instance = NULL;
    TypedefTest_getCorreaTask *task = NULL;
    instance = getCorreaRequestUtils::createTypeData(cc1  );
    task = new TypedefTest_getCorreaTask(obj, this);
    returnedValue = getCorrea_Service->executeAsync(instance, task, getTimeout());
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    getCorreaRequestTypeSupport::delete_data(instance);

    return returnedValue;
}

TypedefTestProxy::TypedefTestProxy(int domainId, long timeout) :
    TypedefTestProxyH(new eProsima::DDSRPC::UDPTransport(), domainId, timeout)
{
}

TypedefTestProxy::~TypedefTestProxy()
{
}

TypedefTestWANProxy::TypedefTestWANProxy(const char *to_connect, int domainId, long timeout) :
    TypedefTestProxyH(new eProsima::DDSRPC::TCPTransport(to_connect), domainId, timeout)
{
}

TypedefTestWANProxy::~TypedefTestWANProxy()
{
}