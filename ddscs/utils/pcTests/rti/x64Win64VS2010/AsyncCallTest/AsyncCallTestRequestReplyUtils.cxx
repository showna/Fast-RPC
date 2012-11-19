/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "AsyncCallTestRequestReplyUtils.h"
#include "AsyncCallTestRequestReplyPlugin.h"


const char* AsyncCallTest_getLongRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = AsyncCallTest_getLongRequestTypeSupport::get_type_name();

        if(AsyncCallTest_getLongRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void AsyncCallTest_getLongRequestUtils::setTypeData(AsyncCallTest_getLongRequest& instance, /*in*/ DDS_Long lo1, /*inout*/ DDS_Long lo2)
{
    instance.lo1 = lo1;
    instance.lo2 = lo2;
    
}

void AsyncCallTest_getLongRequestUtils::extractTypeData(AsyncCallTest_getLongRequest& data, /*in*/ DDS_Long& lo1, /*inout*/ DDS_Long& lo2)
{
    lo1 = data.lo1;
    lo2 = data.lo2;  
    
}


const char* AsyncCallTest_getLongReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = AsyncCallTest_getLongReplyTypeSupport::get_type_name();

        if(AsyncCallTest_getLongReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void AsyncCallTest_getLongReplyUtils::setTypeData(AsyncCallTest_getLongReply& instance, /*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret)
{
    instance.lo2 = lo2;
    instance.lo3 = lo3;
    instance.getLong_ret = getLong_ret;            
}

void AsyncCallTest_getLongReplyUtils::extractTypeData(AsyncCallTest_getLongReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3, /*out*/ DDS_Long& getLong_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    lo2 = data.lo2;
    lo3 = data.lo3;  
    getLong_ret = data.getLong_ret;            
}


const char* AsyncCallTest_getBooleanRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = AsyncCallTest_getBooleanRequestTypeSupport::get_type_name();

        if(AsyncCallTest_getBooleanRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void AsyncCallTest_getBooleanRequestUtils::setTypeData(AsyncCallTest_getBooleanRequest& instance, /*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean bo2)
{
    instance.bo1 = bo1;
    instance.bo2 = bo2;
    
}

void AsyncCallTest_getBooleanRequestUtils::extractTypeData(AsyncCallTest_getBooleanRequest& data, /*in*/ DDS_Boolean& bo1, /*inout*/ DDS_Boolean& bo2)
{
    bo1 = data.bo1;
    bo2 = data.bo2;  
    
}


const char* AsyncCallTest_getBooleanReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = AsyncCallTest_getBooleanReplyTypeSupport::get_type_name();

        if(AsyncCallTest_getBooleanReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void AsyncCallTest_getBooleanReplyUtils::setTypeData(AsyncCallTest_getBooleanReply& instance, /*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret)
{
    instance.bo2 = bo2;
    instance.bo3 = bo3;
    instance.getBoolean_ret = getBoolean_ret;            
}

void AsyncCallTest_getBooleanReplyUtils::extractTypeData(AsyncCallTest_getBooleanReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3, /*out*/ DDS_Boolean& getBoolean_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    bo2 = data.bo2;
    bo3 = data.bo3;  
    getBoolean_ret = data.getBoolean_ret;            
}


const char* AsyncCallTest_getStringRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = AsyncCallTest_getStringRequestTypeSupport::get_type_name();

        if(AsyncCallTest_getStringRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void AsyncCallTest_getStringRequestUtils::setTypeData(AsyncCallTest_getStringRequest& instance, /*in*/ char* s1, /*inout*/ char* s2)
{
    instance.s1 = s1;
    instance.s2 = s2;
    
}

void AsyncCallTest_getStringRequestUtils::extractTypeData(AsyncCallTest_getStringRequest& data, /*in*/ char*& s1, /*inout*/ char*& s2)
{
    s1 = data.s1;
    s2 = strdup(data.s2);  
    
}


const char* AsyncCallTest_getStringReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = AsyncCallTest_getStringReplyTypeSupport::get_type_name();

        if(AsyncCallTest_getStringReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void AsyncCallTest_getStringReplyUtils::setTypeData(AsyncCallTest_getStringReply& instance, /*inout*/ char* s2, /*out*/ char* s3, /*out*/ char* getString_ret)
{
    instance.s2 = s2;
    instance.s3 = s3;
    instance.getString_ret = getString_ret;            
}

void AsyncCallTest_getStringReplyUtils::extractTypeData(AsyncCallTest_getStringReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ char*& s2, /*out*/ char*& s3, /*out*/ char*& getString_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    if(s2 != NULL)
    	free(s2);s2 = data.s2;
    s3 = data.s3;  
    getString_ret = data.getString_ret;            
}


const char* AsyncCallTest_duplicateRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = AsyncCallTest_duplicateRequestTypeSupport::get_type_name();

        if(AsyncCallTest_duplicateRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void AsyncCallTest_duplicateRequestUtils::setTypeData(AsyncCallTest_duplicateRequest& instance, /*in*/ const Structure& ev)
{
    instance.ev = ev;
    
}

void AsyncCallTest_duplicateRequestUtils::extractTypeData(AsyncCallTest_duplicateRequest& data, /*in*/ Structure& ev)
{
    ev = data.ev;  
    
}


const char* AsyncCallTest_duplicateReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = AsyncCallTest_duplicateReplyTypeSupport::get_type_name();

        if(AsyncCallTest_duplicateReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void AsyncCallTest_duplicateReplyUtils::setTypeData(AsyncCallTest_duplicateReply& instance, /*out*/ const Structure& duplicate_ret)
{
    instance.duplicate_ret = duplicate_ret;            
}

void AsyncCallTest_duplicateReplyUtils::extractTypeData(AsyncCallTest_duplicateReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ Structure& duplicate_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
  
    duplicate_ret = data.duplicate_ret;            
}

 