/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "OnewayCallTestRequestReplyUtils.h"
#include "OnewayCallTestRequestReplyPlugin.h"


const char* OnewayCallTest_setLongRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_setLongRequestTypeSupport::get_type_name();

        if(OnewayCallTest_setLongRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_setLongRequestUtils::setTypeData(OnewayCallTest_setLongRequest& instance, /*in*/ DDS_Long lo1)
{
    instance.lo1 = lo1;
    
}

void OnewayCallTest_setLongRequestUtils::extractTypeData(OnewayCallTest_setLongRequest& data, /*in*/ DDS_Long& lo1)
{
    lo1 = data.lo1;  
    
}


const char* OnewayCallTest_getLongRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_getLongRequestTypeSupport::get_type_name();

        if(OnewayCallTest_getLongRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_getLongRequestUtils::setTypeData(OnewayCallTest_getLongRequest& instance)
{
    
}

void OnewayCallTest_getLongRequestUtils::extractTypeData(OnewayCallTest_getLongRequest& data)
{
  
    
}


const char* OnewayCallTest_getLongReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_getLongReplyTypeSupport::get_type_name();

        if(OnewayCallTest_getLongReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_getLongReplyUtils::setTypeData(OnewayCallTest_getLongReply& instance, /*out*/ DDS_Long getLong_ret)
{
    instance.getLong_ret = getLong_ret;            
}

void OnewayCallTest_getLongReplyUtils::extractTypeData(OnewayCallTest_getLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ DDS_Long& getLong_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
  
    getLong_ret = data.getLong_ret;            
}


const char* OnewayCallTest_setBooleanRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_setBooleanRequestTypeSupport::get_type_name();

        if(OnewayCallTest_setBooleanRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_setBooleanRequestUtils::setTypeData(OnewayCallTest_setBooleanRequest& instance, /*in*/ DDS_Boolean bo1)
{
    instance.bo1 = bo1;
    
}

void OnewayCallTest_setBooleanRequestUtils::extractTypeData(OnewayCallTest_setBooleanRequest& data, /*in*/ DDS_Boolean& bo1)
{
    bo1 = data.bo1;  
    
}


const char* OnewayCallTest_getBooleanRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_getBooleanRequestTypeSupport::get_type_name();

        if(OnewayCallTest_getBooleanRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_getBooleanRequestUtils::setTypeData(OnewayCallTest_getBooleanRequest& instance)
{
    
}

void OnewayCallTest_getBooleanRequestUtils::extractTypeData(OnewayCallTest_getBooleanRequest& data)
{
  
    
}


const char* OnewayCallTest_getBooleanReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_getBooleanReplyTypeSupport::get_type_name();

        if(OnewayCallTest_getBooleanReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_getBooleanReplyUtils::setTypeData(OnewayCallTest_getBooleanReply& instance, /*out*/ DDS_Boolean getBoolean_ret)
{
    instance.getBoolean_ret = getBoolean_ret;            
}

void OnewayCallTest_getBooleanReplyUtils::extractTypeData(OnewayCallTest_getBooleanReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ DDS_Boolean& getBoolean_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
  
    getBoolean_ret = data.getBoolean_ret;            
}


const char* OnewayCallTest_setStringRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_setStringRequestTypeSupport::get_type_name();

        if(OnewayCallTest_setStringRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_setStringRequestUtils::setTypeData(OnewayCallTest_setStringRequest& instance, /*in*/ char* s1)
{
    instance.s1 = s1;
    
}

void OnewayCallTest_setStringRequestUtils::extractTypeData(OnewayCallTest_setStringRequest& data, /*in*/ char*& s1)
{
    s1 = data.s1;  
    
}


const char* OnewayCallTest_getStringRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_getStringRequestTypeSupport::get_type_name();

        if(OnewayCallTest_getStringRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_getStringRequestUtils::setTypeData(OnewayCallTest_getStringRequest& instance)
{
    
}

void OnewayCallTest_getStringRequestUtils::extractTypeData(OnewayCallTest_getStringRequest& data)
{
  
    
}


const char* OnewayCallTest_getStringReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_getStringReplyTypeSupport::get_type_name();

        if(OnewayCallTest_getStringReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_getStringReplyUtils::setTypeData(OnewayCallTest_getStringReply& instance, /*out*/ char* getString_ret)
{
    instance.getString_ret = getString_ret;            
}

void OnewayCallTest_getStringReplyUtils::extractTypeData(OnewayCallTest_getStringReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ char*& getString_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
  
    getString_ret = data.getString_ret;            
}


const char* OnewayCallTest_setStructRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_setStructRequestTypeSupport::get_type_name();

        if(OnewayCallTest_setStructRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_setStructRequestUtils::setTypeData(OnewayCallTest_setStructRequest& instance, /*in*/ const Structure& ev)
{
    instance.ev = ev;
    
}

void OnewayCallTest_setStructRequestUtils::extractTypeData(OnewayCallTest_setStructRequest& data, /*in*/ Structure& ev)
{
    ev = data.ev;  
    
}


const char* OnewayCallTest_getStructRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_getStructRequestTypeSupport::get_type_name();

        if(OnewayCallTest_getStructRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_getStructRequestUtils::setTypeData(OnewayCallTest_getStructRequest& instance)
{
    
}

void OnewayCallTest_getStructRequestUtils::extractTypeData(OnewayCallTest_getStructRequest& data)
{
  
    
}


const char* OnewayCallTest_getStructReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = OnewayCallTest_getStructReplyTypeSupport::get_type_name();

        if(OnewayCallTest_getStructReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void OnewayCallTest_getStructReplyUtils::setTypeData(OnewayCallTest_getStructReply& instance, /*out*/ const Structure& getStruct_ret)
{
    instance.getStruct_ret = getStruct_ret;            
}

void OnewayCallTest_getStructReplyUtils::extractTypeData(OnewayCallTest_getStructReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ Structure& getStruct_ret)
{
retcode = (eProsima::DDSRPC::ReturnMessage)data.header.ddsrpcRetCode;
  
    getStruct_ret = data.getStruct_ret;            
}

 