/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "EnumYStringTestRequestReplyUtils.h"
#include "EnumYStringTestRequestReplyPlugin.h"


const char* getEnumRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getEnumRequestTypeSupport::get_type_name();

        if(getEnumRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getEnumRequestUtils::setTypeData(getEnumRequest& instance, /*in*/ Valores v1, /*inout*/ Valores v2)
{
    instance.v1 = v1;
    instance.v2 = v2;
    
}

void getEnumRequestUtils::extractTypeData(getEnumRequest& data, /*in*/ Valores& v1, /*inout*/ Valores& v2)
{
    v1 = data.v1;
    v2 = data.v2;  
    
}


const char* getEnumReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getEnumReplyTypeSupport::get_type_name();

        if(getEnumReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getEnumReplyUtils::setTypeData(getEnumReply& instance, /*inout*/ Valores v2, /*out*/ Valores v3, /*out*/ Valores getEnum_ret)
{
    instance.v2 = v2;
    instance.v3 = v3;
    instance.getEnum_ret = getEnum_ret;            
}

void getEnumReplyUtils::extractTypeData(getEnumReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ Valores& v2, /*out*/ Valores& v3, /*out*/ Valores& getEnum_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.ddsrpcRetCode;
    v2 = data.v2;
    v3 = data.v3;  
    getEnum_ret = data.getEnum_ret;            
}


const char* getStringRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getStringRequestTypeSupport::get_type_name();

        if(getStringRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getStringRequestUtils::setTypeData(getStringRequest& instance, /*in*/ char* s1, /*inout*/ char* s2)
{
    instance.s1 = s1;
    instance.s2 = s2;
    
}

void getStringRequestUtils::extractTypeData(getStringRequest& data, /*in*/ char*& s1, /*inout*/ char*& s2)
{
    s1 = data.s1;
    s2 = strdup(data.s2);  
    
}


const char* getStringReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getStringReplyTypeSupport::get_type_name();

        if(getStringReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getStringReplyUtils::setTypeData(getStringReply& instance, /*inout*/ char* s2, /*out*/ char* s3, /*out*/ char* getString_ret)
{
    instance.s2 = s2;
    instance.s3 = s3;
    instance.getString_ret = getString_ret;            
}

void getStringReplyUtils::extractTypeData(getStringReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ char*& s2, /*out*/ char*& s3, /*out*/ char*& getString_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.ddsrpcRetCode;
    if(s2 != NULL)
    	free(s2);s2 = data.s2;
    s3 = data.s3;  
    getString_ret = data.getString_ret;            
}


const char* getStringBoundedRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getStringBoundedRequestTypeSupport::get_type_name();

        if(getStringBoundedRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getStringBoundedRequestUtils::setTypeData(getStringBoundedRequest& instance, /*in*/ char* sb1, /*inout*/ char* sb2)
{
    instance.sb1 = sb1;
    instance.sb2 = sb2;
    
}

void getStringBoundedRequestUtils::extractTypeData(getStringBoundedRequest& data, /*in*/ char*& sb1, /*inout*/ char*& sb2)
{
    sb1 = data.sb1;
    sb2 = strdup(data.sb2);  
    
}


const char* getStringBoundedReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = getStringBoundedReplyTypeSupport::get_type_name();

        if(getStringBoundedReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void getStringBoundedReplyUtils::setTypeData(getStringBoundedReply& instance, /*inout*/ char* sb2, /*out*/ char* sb3, /*out*/ char* getStringBounded_ret)
{
    instance.sb2 = sb2;
    instance.sb3 = sb3;
    instance.getStringBounded_ret = getStringBounded_ret;            
}

void getStringBoundedReplyUtils::extractTypeData(getStringBoundedReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ char*& sb2, /*out*/ char*& sb3, /*out*/ char*& getStringBounded_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.ddsrpcRetCode;
    if(sb2 != NULL)
    	free(sb2);sb2 = data.sb2;
    sb3 = data.sb3;  
    getStringBounded_ret = data.getStringBounded_ret;            
}

 