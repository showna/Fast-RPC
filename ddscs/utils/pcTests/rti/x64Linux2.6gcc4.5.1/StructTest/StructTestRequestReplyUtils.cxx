/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "StructTestRequestReplyUtils.h"
#include "StructTestRequestReplyPlugin.h"


const char* StructTest_duplicateRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = StructTest_duplicateRequestTypeSupport::get_type_name();

        if(StructTest_duplicateRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void StructTest_duplicateRequestUtils::setTypeData(StructTest_duplicateRequest& instance, /*in*/ const Envio& ev)
{
    instance.ev = ev;
    
}

void StructTest_duplicateRequestUtils::extractTypeData(StructTest_duplicateRequest& data, /*in*/ Envio& ev)
{
    ev = data.ev;  
    
}


const char* StructTest_duplicateReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = StructTest_duplicateReplyTypeSupport::get_type_name();

        if(StructTest_duplicateReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void StructTest_duplicateReplyUtils::setTypeData(StructTest_duplicateReply& instance, /*out*/ const Recepcion& duplicate_ret)
{
    instance.duplicate_ret = duplicate_ret;            
}

void StructTest_duplicateReplyUtils::extractTypeData(StructTest_duplicateReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ Recepcion& duplicate_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
  
    duplicate_ret = data.duplicate_ret;            
}


const char* StructTest_sumaRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = StructTest_sumaRequestTypeSupport::get_type_name();

        if(StructTest_sumaRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void StructTest_sumaRequestUtils::setTypeData(StructTest_sumaRequest& instance, /*in*/ const Envio& ev1, /*in*/ const Envio& ev2)
{
    instance.ev1 = ev1;
    instance.ev2 = ev2;
    
}

void StructTest_sumaRequestUtils::extractTypeData(StructTest_sumaRequest& data, /*in*/ Envio& ev1, /*in*/ Envio& ev2)
{
    ev1 = data.ev1;
    ev2 = data.ev2;  
    
}


const char* StructTest_sumaReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = StructTest_sumaReplyTypeSupport::get_type_name();

        if(StructTest_sumaReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void StructTest_sumaReplyUtils::setTypeData(StructTest_sumaReply& instance, /*out*/ const Recepcion& suma_ret)
{
    instance.suma_ret = suma_ret;            
}

void StructTest_sumaReplyUtils::extractTypeData(StructTest_sumaReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ Recepcion& suma_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
  
    suma_ret = data.suma_ret;            
}

 