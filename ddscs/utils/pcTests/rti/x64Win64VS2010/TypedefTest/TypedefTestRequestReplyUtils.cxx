/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "TypedefTestRequestReplyUtils.h"
#include "TypedefTestRequestReplyPlugin.h"


const char* TypedefTest_getLargoRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getLargoRequestTypeSupport::get_type_name();

        if(TypedefTest_getLargoRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getLargoRequestUtils::setTypeData(TypedefTest_getLargoRequest& instance, /*in*/ largo l1)
{
    instance.l1 = l1;
    
}

void TypedefTest_getLargoRequestUtils::extractTypeData(TypedefTest_getLargoRequest& data, /*in*/ largo& l1)
{
    l1 = data.l1;  
    
}


const char* TypedefTest_getLargoReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getLargoReplyTypeSupport::get_type_name();

        if(TypedefTest_getLargoReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getLargoReplyUtils::setTypeData(TypedefTest_getLargoReply& instance, /*out*/ largo l2, /*out*/ largo getLargo_ret)
{
    instance.l2 = l2;
    instance.getLargo_ret = getLargo_ret;            
}

void TypedefTest_getLargoReplyUtils::extractTypeData(TypedefTest_getLargoReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ largo& l2, /*out*/ largo& getLargo_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
    l2 = data.l2;  
    getLargo_ret = data.getLargo_ret;            
}


const char* TypedefTest_getLarguisimoRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getLarguisimoRequestTypeSupport::get_type_name();

        if(TypedefTest_getLarguisimoRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getLarguisimoRequestUtils::setTypeData(TypedefTest_getLarguisimoRequest& instance, /*in*/ larguisimo ll1)
{
    instance.ll1 = ll1;
    
}

void TypedefTest_getLarguisimoRequestUtils::extractTypeData(TypedefTest_getLarguisimoRequest& data, /*in*/ larguisimo& ll1)
{
    ll1 = data.ll1;  
    
}


const char* TypedefTest_getLarguisimoReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getLarguisimoReplyTypeSupport::get_type_name();

        if(TypedefTest_getLarguisimoReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getLarguisimoReplyUtils::setTypeData(TypedefTest_getLarguisimoReply& instance, /*out*/ larguisimo ll2, /*out*/ larguisimo getLarguisimo_ret)
{
    instance.ll2 = ll2;
    instance.getLarguisimo_ret = getLarguisimo_ret;            
}

void TypedefTest_getLarguisimoReplyUtils::extractTypeData(TypedefTest_getLarguisimoReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ larguisimo& ll2, /*out*/ larguisimo& getLarguisimo_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
    ll2 = data.ll2;  
    getLarguisimo_ret = data.getLarguisimo_ret;            
}


const char* TypedefTest_getDatosDefRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getDatosDefRequestTypeSupport::get_type_name();

        if(TypedefTest_getDatosDefRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getDatosDefRequestUtils::setTypeData(TypedefTest_getDatosDefRequest& instance, /*in*/ const DatosDef& d1)
{
    instance.d1 = d1;
    
}

void TypedefTest_getDatosDefRequestUtils::extractTypeData(TypedefTest_getDatosDefRequest& data, /*in*/ DatosDef& d1)
{
    d1 = data.d1;  
    
}


const char* TypedefTest_getDatosDefReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getDatosDefReplyTypeSupport::get_type_name();

        if(TypedefTest_getDatosDefReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getDatosDefReplyUtils::setTypeData(TypedefTest_getDatosDefReply& instance, /*out*/ const DatosDef& d2, /*out*/ const DatosDef& getDatosDef_ret)
{
    instance.d2 = d2;
    instance.getDatosDef_ret = getDatosDef_ret;            
}

void TypedefTest_getDatosDefReplyUtils::extractTypeData(TypedefTest_getDatosDefReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ DatosDef& d2, /*out*/ DatosDef& getDatosDef_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
    d2 = data.d2;  
    getDatosDef_ret = data.getDatosDef_ret;            
}


const char* TypedefTest_getDatosDefondoRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getDatosDefondoRequestTypeSupport::get_type_name();

        if(TypedefTest_getDatosDefondoRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getDatosDefondoRequestUtils::setTypeData(TypedefTest_getDatosDefondoRequest& instance, /*in*/ const DatosDefondo& dd1)
{
    instance.dd1 = dd1;
    
}

void TypedefTest_getDatosDefondoRequestUtils::extractTypeData(TypedefTest_getDatosDefondoRequest& data, /*in*/ DatosDefondo& dd1)
{
    dd1 = data.dd1;  
    
}


const char* TypedefTest_getDatosDefondoReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getDatosDefondoReplyTypeSupport::get_type_name();

        if(TypedefTest_getDatosDefondoReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getDatosDefondoReplyUtils::setTypeData(TypedefTest_getDatosDefondoReply& instance, /*out*/ const DatosDefondo& dd2, /*out*/ const DatosDefondo& getDatosDefondo_ret)
{
    instance.dd2 = dd2;
    instance.getDatosDefondo_ret = getDatosDefondo_ret;            
}

void TypedefTest_getDatosDefondoReplyUtils::extractTypeData(TypedefTest_getDatosDefondoReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ DatosDefondo& dd2, /*out*/ DatosDefondo& getDatosDefondo_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
    dd2 = data.dd2;  
    getDatosDefondo_ret = data.getDatosDefondo_ret;            
}


const char* TypedefTest_getCadenaRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getCadenaRequestTypeSupport::get_type_name();

        if(TypedefTest_getCadenaRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getCadenaRequestUtils::setTypeData(TypedefTest_getCadenaRequest& instance, /*in*/ cadena c1)
{
    instance.c1 = c1;
    
}

void TypedefTest_getCadenaRequestUtils::extractTypeData(TypedefTest_getCadenaRequest& data, /*in*/ cadena& c1)
{
    c1 = data.c1;  
    
}


const char* TypedefTest_getCadenaReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getCadenaReplyTypeSupport::get_type_name();

        if(TypedefTest_getCadenaReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getCadenaReplyUtils::setTypeData(TypedefTest_getCadenaReply& instance, /*out*/ cadena c2, /*out*/ cadena getCadena_ret)
{
    instance.c2 = c2;
    instance.getCadena_ret = getCadena_ret;            
}

void TypedefTest_getCadenaReplyUtils::extractTypeData(TypedefTest_getCadenaReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ cadena& c2, /*out*/ cadena& getCadena_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
    c2 = data.c2;  
    getCadena_ret = data.getCadena_ret;            
}


const char* TypedefTest_getCorreaRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getCorreaRequestTypeSupport::get_type_name();

        if(TypedefTest_getCorreaRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getCorreaRequestUtils::setTypeData(TypedefTest_getCorreaRequest& instance, /*in*/ correa cc1)
{
    instance.cc1 = cc1;
    
}

void TypedefTest_getCorreaRequestUtils::extractTypeData(TypedefTest_getCorreaRequest& data, /*in*/ correa& cc1)
{
    cc1 = data.cc1;  
    
}


const char* TypedefTest_getCorreaReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = TypedefTest_getCorreaReplyTypeSupport::get_type_name();

        if(TypedefTest_getCorreaReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void TypedefTest_getCorreaReplyUtils::setTypeData(TypedefTest_getCorreaReply& instance, /*out*/ correa cc2, /*out*/ correa getCorrea_ret)
{
    instance.cc2 = cc2;
    instance.getCorrea_ret = getCorrea_ret;            
}

void TypedefTest_getCorreaReplyUtils::extractTypeData(TypedefTest_getCorreaReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ correa& cc2, /*out*/ correa& getCorrea_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
    cc2 = data.cc2;  
    getCorrea_ret = data.getCorrea_ret;            
}

 