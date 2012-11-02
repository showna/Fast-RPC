/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "StructTestRequestReplyUtils.h"
#include "StructTestRequestReplyPlugin.h"


const char* duplicateRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = duplicateRequestTypeSupport::get_type_name();

        if(duplicateRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void duplicateRequestUtils::setTypeData(duplicateRequest& instance, /*in*/ const Envio& ev)
{
    instance.ev = ev;
    
}

void duplicateRequestUtils::extractTypeData(duplicateRequest& data, /*in*/ Envio& ev)
{
    ev = data.ev;  
    
}


const char* duplicateReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = duplicateReplyTypeSupport::get_type_name();

        if(duplicateReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void duplicateReplyUtils::setTypeData(duplicateReply& instance, /*out*/ const Recepcion& duplicate_ret)
{
    instance.duplicate_ret = duplicate_ret;            
}

void duplicateReplyUtils::extractTypeData(duplicateReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ Recepcion& duplicate_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.ddsrpcRetCode;
  
    duplicate_ret = data.duplicate_ret;            
}


const char* sumaRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = sumaRequestTypeSupport::get_type_name();

        if(sumaRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void sumaRequestUtils::setTypeData(sumaRequest& instance, /*in*/ const Envio& ev1, /*in*/ const Envio& ev2)
{
    instance.ev1 = ev1;
    instance.ev2 = ev2;
    
}

void sumaRequestUtils::extractTypeData(sumaRequest& data, /*in*/ Envio& ev1, /*in*/ Envio& ev2)
{
    ev1 = data.ev1;
    ev2 = data.ev2;  
    
}


const char* sumaReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = sumaReplyTypeSupport::get_type_name();

        if(sumaReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void sumaReplyUtils::setTypeData(sumaReply& instance, /*out*/ const Recepcion& suma_ret)
{
    instance.suma_ret = suma_ret;            
}

void sumaReplyUtils::extractTypeData(sumaReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ Recepcion& suma_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.ddsrpcRetCode;
  
    suma_ret = data.suma_ret;            
}

 