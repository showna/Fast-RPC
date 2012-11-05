/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "TypedefTestServer.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "TypedefTestRequestReplyPlugin.h"

#include "TypedefTestServerRPCSupport.h"

TypedefTestServer::TypedefTestServer(eProsima::DDSRPC::ServerStrategy *strategy,
    int domainId) :
    Server(strategy, NULL, domainId)
{
    _impl = new TypedefTestServerImpl();

    createRPCs();
}

TypedefTestServer::TypedefTestServer(eProsima::DDSRPC::ServerStrategy *strategy,
    eProsima::DDSRPC::Transport *transport, int domainId) :
    Server(strategy, transport, domainId)
{
    _impl = new TypedefTestServerImpl();
    
    createRPCs();
}

TypedefTestServer::~TypedefTestServer()
{
    delete _impl;    
}

void TypedefTestServer::createRPCs()
{
    this->setRPC(new getLargoServerRPC("getLargo", this,
                getLargoRequestUtils::registerType(getParticipant()),
                getLargoReplyUtils::registerType(getParticipant()),
                &TypedefTestServer::getLargo, getParticipant()));
    this->setRPC(new getLarguisimoServerRPC("getLarguisimo", this,
                getLarguisimoRequestUtils::registerType(getParticipant()),
                getLarguisimoReplyUtils::registerType(getParticipant()),
                &TypedefTestServer::getLarguisimo, getParticipant()));
    this->setRPC(new getDatosDefServerRPC("getDatosDef", this,
                getDatosDefRequestUtils::registerType(getParticipant()),
                getDatosDefReplyUtils::registerType(getParticipant()),
                &TypedefTestServer::getDatosDef, getParticipant()));
    this->setRPC(new getDatosDefondoServerRPC("getDatosDefondo", this,
                getDatosDefondoRequestUtils::registerType(getParticipant()),
                getDatosDefondoReplyUtils::registerType(getParticipant()),
                &TypedefTestServer::getDatosDefondo, getParticipant()));
    this->setRPC(new getCadenaServerRPC("getCadena", this,
                getCadenaRequestUtils::registerType(getParticipant()),
                getCadenaReplyUtils::registerType(getParticipant()),
                &TypedefTestServer::getCadena, getParticipant()));
    this->setRPC(new getCorreaServerRPC("getCorrea", this,
                getCorreaRequestUtils::registerType(getParticipant()),
                getCorreaReplyUtils::registerType(getParticipant()),
                &TypedefTestServer::getCorrea, getParticipant()));

}

void TypedefTestServer::getLargo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = dynamic_cast<TypedefTestServer*>(server);
    largo  l1 = 0;    
    largo  l2 = 0;    
    largo  getLargo_ret = 0;       
    getLargoReply replyData;
    

    getLargoRequestUtils::extractTypeData(*(getLargoRequest*)requestData, l1);

    getLargo_ret = srv->_impl->getLargo(l1, l2);

    getLargoReplyUtils::setTypeData(replyData, l2, getLargo_ret);

    // sendReply takes care of deleting the data
    service->sendReply(requestData, &replyData, eProsima::DDSRPC::OPERATION_SUCCESSFUL);
    
    getLargoRequestTypeSupport::delete_data((getLargoRequest*)requestData);
    
        
        
}
void TypedefTestServer::getLarguisimo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = dynamic_cast<TypedefTestServer*>(server);
    larguisimo  ll1 = 0;    
    larguisimo  ll2 = 0;    
    larguisimo  getLarguisimo_ret = 0;       
    getLarguisimoReply replyData;
    

    getLarguisimoRequestUtils::extractTypeData(*(getLarguisimoRequest*)requestData, ll1);

    getLarguisimo_ret = srv->_impl->getLarguisimo(ll1, ll2);

    getLarguisimoReplyUtils::setTypeData(replyData, ll2, getLarguisimo_ret);

    // sendReply takes care of deleting the data
    service->sendReply(requestData, &replyData, eProsima::DDSRPC::OPERATION_SUCCESSFUL);
    
    getLarguisimoRequestTypeSupport::delete_data((getLarguisimoRequest*)requestData);
    
        
        
}
void TypedefTestServer::getDatosDef(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = dynamic_cast<TypedefTestServer*>(server);
    DatosDef d1;
        
    DatosDef d2;
    memset(&d2, 0, sizeof(DatosDef));    
    DatosDef getDatosDef_ret;
           
    getDatosDefReply replyData;
    

    getDatosDefRequestUtils::extractTypeData(*(getDatosDefRequest*)requestData, d1);

    getDatosDef_ret = srv->_impl->getDatosDef(d1, d2);

    getDatosDefReplyUtils::setTypeData(replyData, d2, getDatosDef_ret);

    // sendReply takes care of deleting the data
    service->sendReply(requestData, &replyData, eProsima::DDSRPC::OPERATION_SUCCESSFUL);
    
    getDatosDefRequestTypeSupport::delete_data((getDatosDefRequest*)requestData);
    
    DatosDef_finalize(&getDatosDef_ret);    
    DatosDef_finalize(&d2);    
}
void TypedefTestServer::getDatosDefondo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = dynamic_cast<TypedefTestServer*>(server);
    DatosDefondo dd1;
        
    DatosDefondo dd2;
    memset(&dd2, 0, sizeof(DatosDefondo));    
    DatosDefondo getDatosDefondo_ret;
           
    getDatosDefondoReply replyData;
    

    getDatosDefondoRequestUtils::extractTypeData(*(getDatosDefondoRequest*)requestData, dd1);

    getDatosDefondo_ret = srv->_impl->getDatosDefondo(dd1, dd2);

    getDatosDefondoReplyUtils::setTypeData(replyData, dd2, getDatosDefondo_ret);

    // sendReply takes care of deleting the data
    service->sendReply(requestData, &replyData, eProsima::DDSRPC::OPERATION_SUCCESSFUL);
    
    getDatosDefondoRequestTypeSupport::delete_data((getDatosDefondoRequest*)requestData);
    
    DatosDefondo_finalize(&getDatosDefondo_ret);    
    DatosDefondo_finalize(&dd2);    
}
void TypedefTestServer::getCadena(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = dynamic_cast<TypedefTestServer*>(server);
    cadena  c1 = NULL;    
    cadena  c2 = NULL;    
    cadena  getCadena_ret = NULL;       
    getCadenaReply replyData;
    

    getCadenaRequestUtils::extractTypeData(*(getCadenaRequest*)requestData, c1);

    getCadena_ret = srv->_impl->getCadena(c1, c2);

    getCadenaReplyUtils::setTypeData(replyData, c2, getCadena_ret);

    // sendReply takes care of deleting the data
    service->sendReply(requestData, &replyData, eProsima::DDSRPC::OPERATION_SUCCESSFUL);
    
    getCadenaRequestTypeSupport::delete_data((getCadenaRequest*)requestData);
    
    if(getCadena_ret != NULL) free(getCadena_ret);    
    if(c2 != NULL) free(c2);    
}
void TypedefTestServer::getCorrea(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = dynamic_cast<TypedefTestServer*>(server);
    correa  cc1 = NULL;    
    correa  cc2 = NULL;    
    correa  getCorrea_ret = NULL;       
    getCorreaReply replyData;
    

    getCorreaRequestUtils::extractTypeData(*(getCorreaRequest*)requestData, cc1);

    getCorrea_ret = srv->_impl->getCorrea(cc1, cc2);

    getCorreaReplyUtils::setTypeData(replyData, cc2, getCorrea_ret);

    // sendReply takes care of deleting the data
    service->sendReply(requestData, &replyData, eProsima::DDSRPC::OPERATION_SUCCESSFUL);
    
    getCorreaRequestTypeSupport::delete_data((getCorreaRequest*)requestData);
    
    if(getCorrea_ret != NULL) free(getCorrea_ret);    
    if(cc2 != NULL) free(cc2);    
}