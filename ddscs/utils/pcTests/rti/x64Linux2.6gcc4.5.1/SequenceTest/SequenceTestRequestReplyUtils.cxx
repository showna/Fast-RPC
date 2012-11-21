/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file SequenceTestRequestReplyUtils.cxx
 * This source file contains the definition of helpful functions for the DDS messages for interface SequenceTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "SequenceTestRequestReplyUtils.h"
#include "SequenceTestRequestReplyPlugin.h"


const char* SequenceTest_getSLongRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = SequenceTest_getSLongRequestTypeSupport::get_type_name();

        if(SequenceTest_getSLongRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void SequenceTest_getSLongRequestUtils::setTypeData(SequenceTest_getSLongRequest& instance, /*in*/ const largo& l1, /*inout*/ const largo& l2)
{
    instance.l1 = l1;
    instance.l2 = l2;
    
}

void SequenceTest_getSLongRequestUtils::extractTypeData(SequenceTest_getSLongRequest& data, /*in*/ largo& l1, /*inout*/ largo& l2)
{
    l1 = data.l1;
    largoPluginSupport_copy_data(&l2, &data.l2);  
    
}


const char* SequenceTest_getSLongReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = SequenceTest_getSLongReplyTypeSupport::get_type_name();

        if(SequenceTest_getSLongReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void SequenceTest_getSLongReplyUtils::setTypeData(SequenceTest_getSLongReply& instance, /*inout*/ const largo& l2, /*out*/ const largo& l3, /*out*/ const largo& getSLong_ret)
{
    instance.l2 = l2;
    instance.l3 = l3;
    instance.getSLong_ret = getSLong_ret;            
}

void SequenceTest_getSLongReplyUtils::extractTypeData(SequenceTest_getSLongReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ largo& l2, /*out*/ largo& l3, /*out*/ largo& getSLong_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    largo_finalize(&l2);l2 = data.l2;
    l3 = data.l3;  
    getSLong_ret = data.getSLong_ret;            
}


const char* SequenceTest_getStringRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = SequenceTest_getStringRequestTypeSupport::get_type_name();

        if(SequenceTest_getStringRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void SequenceTest_getStringRequestUtils::setTypeData(SequenceTest_getStringRequest& instance, /*in*/ const cadena& s1, /*inout*/ const cadena& s2)
{
    instance.s1 = s1;
    instance.s2 = s2;
    
}

void SequenceTest_getStringRequestUtils::extractTypeData(SequenceTest_getStringRequest& data, /*in*/ cadena& s1, /*inout*/ cadena& s2)
{
    s1 = data.s1;
    cadenaPluginSupport_copy_data(&s2, &data.s2);  
    
}


const char* SequenceTest_getStringReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = SequenceTest_getStringReplyTypeSupport::get_type_name();

        if(SequenceTest_getStringReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void SequenceTest_getStringReplyUtils::setTypeData(SequenceTest_getStringReply& instance, /*inout*/ const cadena& s2, /*out*/ const cadena& s3, /*out*/ const cadena& getString_ret)
{
    instance.s2 = s2;
    instance.s3 = s3;
    instance.getString_ret = getString_ret;            
}

void SequenceTest_getStringReplyUtils::extractTypeData(SequenceTest_getStringReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ cadena& s2, /*out*/ cadena& s3, /*out*/ cadena& getString_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    cadena_finalize(&s2);s2 = data.s2;
    s3 = data.s3;  
    getString_ret = data.getString_ret;            
}


const char* SequenceTest_getStringBoundedRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = SequenceTest_getStringBoundedRequestTypeSupport::get_type_name();

        if(SequenceTest_getStringBoundedRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void SequenceTest_getStringBoundedRequestUtils::setTypeData(SequenceTest_getStringBoundedRequest& instance, /*in*/ const dattos& sb1, /*inout*/ const dattos& sb2)
{
    instance.sb1 = sb1;
    instance.sb2 = sb2;
    
}

void SequenceTest_getStringBoundedRequestUtils::extractTypeData(SequenceTest_getStringBoundedRequest& data, /*in*/ dattos& sb1, /*inout*/ dattos& sb2)
{
    sb1 = data.sb1;
    dattosPluginSupport_copy_data(&sb2, &data.sb2);  
    
}


const char* SequenceTest_getStringBoundedReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = SequenceTest_getStringBoundedReplyTypeSupport::get_type_name();

        if(SequenceTest_getStringBoundedReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void SequenceTest_getStringBoundedReplyUtils::setTypeData(SequenceTest_getStringBoundedReply& instance, /*inout*/ const dattos& sb2, /*out*/ const dattos& sb3, /*out*/ const dattos& getStringBounded_ret)
{
    instance.sb2 = sb2;
    instance.sb3 = sb3;
    instance.getStringBounded_ret = getStringBounded_ret;            
}

void SequenceTest_getStringBoundedReplyUtils::extractTypeData(SequenceTest_getStringBoundedReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ dattos& sb2, /*out*/ dattos& sb3, /*out*/ dattos& getStringBounded_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    dattos_finalize(&sb2);sb2 = data.sb2;
    sb3 = data.sb3;  
    getStringBounded_ret = data.getStringBounded_ret;            
}

 