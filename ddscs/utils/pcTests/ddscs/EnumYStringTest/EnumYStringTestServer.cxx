/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "EnumYStringTestServer.h"
#include "EnumYStringTestRequestReplyPlugin.h"
#include "EnumYStringTestServerRemoteServiceSupport.h"

EnumYStringTestServer::EnumYStringTestServer(int domainId, unsigned int threadCount) : DDSCSServer(domainId, threadCount)
{
    _impl = new EnumYStringTestImpl();
    

        this->setRemoteService(new getEnumServerRemoteService("getEnum", this,
                getEnumRequestUtils::registerType(getParticipant()),
                getEnumReplyUtils::registerType(getParticipant()),
                &EnumYStringTestServer::getEnum, getParticipant()));

        this->setRemoteService(new getStringServerRemoteService("getString", this,
                getStringRequestUtils::registerType(getParticipant()),
                getStringReplyUtils::registerType(getParticipant()),
                &EnumYStringTestServer::getString, getParticipant()));

        this->setRemoteService(new getStringBoundedServerRemoteService("getStringBounded", this,
                getStringBoundedRequestUtils::registerType(getParticipant()),
                getStringBoundedReplyUtils::registerType(getParticipant()),
                &EnumYStringTestServer::getStringBounded, getParticipant()));

}
EnumYStringTestServer::~EnumYStringTestServer()
{
    delete _impl;    
}

void EnumYStringTestServer::getEnum(DDSCSServer *server, void *requestData, ServerRemoteService *service) 
{ 
    EnumYStringTestServer *srv = (EnumYStringTestServer*)server;
    Valores  v1 ;       
    Valores  v2 ;       
    Valores  v3 ;    
    Valores  getEnum_ret ;       
    DDSCSMessages  returnedValue ;        
    getEnumReply *replyData = NULL;

    getEnumRequestUtils::extractTypeData((getEnumRequest*)requestData, v1    ,v2    );
                                         
    returnedValue = srv->_impl->getEnum(v1    ,v2    ,v3    , getEnum_ret    );
           
    replyData = getEnumReplyUtils::createTypeData(v2    ,v3    , getEnum_ret    );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
        
        
        
               
}
void EnumYStringTestServer::getString(DDSCSServer *server, void *requestData, ServerRemoteService *service) 
{ 
    EnumYStringTestServer *srv = (EnumYStringTestServer*)server;
    char*  s1  = NULL;       
    char*  s2  = NULL;       
    char*  s3  = NULL;    
    char*  getString_ret  = NULL;       
    DDSCSMessages  returnedValue ;        
    getStringReply *replyData = NULL;

    getStringRequestUtils::extractTypeData((getStringRequest*)requestData, s1    ,s2    );
                                         
    returnedValue = srv->_impl->getString(s1    ,s2    ,s3    , getString_ret    );
           
    replyData = getStringReplyUtils::createTypeData(s2    ,s3    , getString_ret    );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
    if(s1 != NULL) DDS_String_free(s1);    
    if(s2 != NULL) DDS_String_free(s2);    
    if(s3 != NULL) DDS_String_free(s3);    
    if(getString_ret != NULL) DDS_String_free(getString_ret);           
}
void EnumYStringTestServer::getStringBounded(DDSCSServer *server, void *requestData, ServerRemoteService *service) 
{ 
    EnumYStringTestServer *srv = (EnumYStringTestServer*)server;
    char*  sb1  = NULL;       
    char*  sb2  = NULL;       
    char*  sb3  = NULL;    
    char*  getStringBounded_ret  = NULL;       
    DDSCSMessages  returnedValue ;        
    getStringBoundedReply *replyData = NULL;

    getStringBoundedRequestUtils::extractTypeData((getStringBoundedRequest*)requestData, sb1    ,sb2    );
                                         
    returnedValue = srv->_impl->getStringBounded(sb1    ,sb2    ,sb3    , getStringBounded_ret    );
           
    replyData = getStringBoundedReplyUtils::createTypeData(sb2    ,sb3    , getStringBounded_ret    );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
    if(sb1 != NULL) DDS_String_free(sb1);    
    if(sb2 != NULL) DDS_String_free(sb2);    
    if(sb3 != NULL) DDS_String_free(sb3);    
    if(getStringBounded_ret != NULL) DDS_String_free(getStringBounded_ret);           
}