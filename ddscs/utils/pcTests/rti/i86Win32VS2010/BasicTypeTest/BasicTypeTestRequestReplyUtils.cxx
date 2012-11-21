/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file BasicTypeTestRequestReplyUtils.cxx
 * This source file contains the definition of helpful functions for the DDS messages for interface BasicTypeTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "BasicTypeTestRequestReplyUtils.h"
#include "BasicTypeTestRequestReplyPlugin.h"


const char* BasicTypeTest_getOctetRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getOctetRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getOctetRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getOctetRequestUtils::setTypeData(BasicTypeTest_getOctetRequest& instance, /*in*/ DDS_Octet oc1, /*inout*/ DDS_Octet oc2)
{
    instance.oc1 = oc1;
    instance.oc2 = oc2;
    
}

void BasicTypeTest_getOctetRequestUtils::extractTypeData(BasicTypeTest_getOctetRequest& data, /*in*/ DDS_Octet& oc1, /*inout*/ DDS_Octet& oc2)
{
    oc1 = data.oc1;
    oc2 = data.oc2;  
    
}


const char* BasicTypeTest_getOctetReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getOctetReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getOctetReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getOctetReplyUtils::setTypeData(BasicTypeTest_getOctetReply& instance, /*inout*/ DDS_Octet oc2, /*out*/ DDS_Octet oc3, /*out*/ DDS_Octet getOctet_ret)
{
    instance.oc2 = oc2;
    instance.oc3 = oc3;
    instance.getOctet_ret = getOctet_ret;            
}

void BasicTypeTest_getOctetReplyUtils::extractTypeData(BasicTypeTest_getOctetReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Octet& oc2, /*out*/ DDS_Octet& oc3, /*out*/ DDS_Octet& getOctet_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    oc2 = data.oc2;
    oc3 = data.oc3;  
    getOctet_ret = data.getOctet_ret;            
}


const char* BasicTypeTest_getCharRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getCharRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getCharRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getCharRequestUtils::setTypeData(BasicTypeTest_getCharRequest& instance, /*in*/ DDS_Char ch1, /*inout*/ DDS_Char ch2)
{
    instance.ch1 = ch1;
    instance.ch2 = ch2;
    
}

void BasicTypeTest_getCharRequestUtils::extractTypeData(BasicTypeTest_getCharRequest& data, /*in*/ DDS_Char& ch1, /*inout*/ DDS_Char& ch2)
{
    ch1 = data.ch1;
    ch2 = data.ch2;  
    
}


const char* BasicTypeTest_getCharReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getCharReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getCharReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getCharReplyUtils::setTypeData(BasicTypeTest_getCharReply& instance, /*inout*/ DDS_Char ch2, /*out*/ DDS_Char ch3, /*out*/ DDS_Char getChar_ret)
{
    instance.ch2 = ch2;
    instance.ch3 = ch3;
    instance.getChar_ret = getChar_ret;            
}

void BasicTypeTest_getCharReplyUtils::extractTypeData(BasicTypeTest_getCharReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Char& ch2, /*out*/ DDS_Char& ch3, /*out*/ DDS_Char& getChar_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    ch2 = data.ch2;
    ch3 = data.ch3;  
    getChar_ret = data.getChar_ret;            
}


const char* BasicTypeTest_getWCharRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getWCharRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getWCharRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getWCharRequestUtils::setTypeData(BasicTypeTest_getWCharRequest& instance, /*in*/ DDS_Wchar wch1, /*inout*/ DDS_Wchar wch2)
{
    instance.wch1 = wch1;
    instance.wch2 = wch2;
    
}

void BasicTypeTest_getWCharRequestUtils::extractTypeData(BasicTypeTest_getWCharRequest& data, /*in*/ DDS_Wchar& wch1, /*inout*/ DDS_Wchar& wch2)
{
    wch1 = data.wch1;
    wch2 = data.wch2;  
    
}


const char* BasicTypeTest_getWCharReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getWCharReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getWCharReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getWCharReplyUtils::setTypeData(BasicTypeTest_getWCharReply& instance, /*inout*/ DDS_Wchar wch2, /*out*/ DDS_Wchar wch3, /*out*/ DDS_Wchar getWChar_ret)
{
    instance.wch2 = wch2;
    instance.wch3 = wch3;
    instance.getWChar_ret = getWChar_ret;            
}

void BasicTypeTest_getWCharReplyUtils::extractTypeData(BasicTypeTest_getWCharReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Wchar& wch2, /*out*/ DDS_Wchar& wch3, /*out*/ DDS_Wchar& getWChar_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    wch2 = data.wch2;
    wch3 = data.wch3;  
    getWChar_ret = data.getWChar_ret;            
}


const char* BasicTypeTest_getShortRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getShortRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getShortRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getShortRequestUtils::setTypeData(BasicTypeTest_getShortRequest& instance, /*in*/ DDS_Short sh1, /*inout*/ DDS_Short sh2)
{
    instance.sh1 = sh1;
    instance.sh2 = sh2;
    
}

void BasicTypeTest_getShortRequestUtils::extractTypeData(BasicTypeTest_getShortRequest& data, /*in*/ DDS_Short& sh1, /*inout*/ DDS_Short& sh2)
{
    sh1 = data.sh1;
    sh2 = data.sh2;  
    
}


const char* BasicTypeTest_getShortReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getShortReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getShortReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getShortReplyUtils::setTypeData(BasicTypeTest_getShortReply& instance, /*inout*/ DDS_Short sh2, /*out*/ DDS_Short sh3, /*out*/ DDS_Short getShort_ret)
{
    instance.sh2 = sh2;
    instance.sh3 = sh3;
    instance.getShort_ret = getShort_ret;            
}

void BasicTypeTest_getShortReplyUtils::extractTypeData(BasicTypeTest_getShortReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Short& sh2, /*out*/ DDS_Short& sh3, /*out*/ DDS_Short& getShort_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    sh2 = data.sh2;
    sh3 = data.sh3;  
    getShort_ret = data.getShort_ret;            
}


const char* BasicTypeTest_getUShortRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getUShortRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getUShortRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getUShortRequestUtils::setTypeData(BasicTypeTest_getUShortRequest& instance, /*in*/ DDS_UnsignedShort ush1, /*inout*/ DDS_UnsignedShort ush2)
{
    instance.ush1 = ush1;
    instance.ush2 = ush2;
    
}

void BasicTypeTest_getUShortRequestUtils::extractTypeData(BasicTypeTest_getUShortRequest& data, /*in*/ DDS_UnsignedShort& ush1, /*inout*/ DDS_UnsignedShort& ush2)
{
    ush1 = data.ush1;
    ush2 = data.ush2;  
    
}


const char* BasicTypeTest_getUShortReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getUShortReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getUShortReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getUShortReplyUtils::setTypeData(BasicTypeTest_getUShortReply& instance, /*inout*/ DDS_UnsignedShort ush2, /*out*/ DDS_UnsignedShort ush3, /*out*/ DDS_UnsignedShort getUShort_ret)
{
    instance.ush2 = ush2;
    instance.ush3 = ush3;
    instance.getUShort_ret = getUShort_ret;            
}

void BasicTypeTest_getUShortReplyUtils::extractTypeData(BasicTypeTest_getUShortReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_UnsignedShort& ush2, /*out*/ DDS_UnsignedShort& ush3, /*out*/ DDS_UnsignedShort& getUShort_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    ush2 = data.ush2;
    ush3 = data.ush3;  
    getUShort_ret = data.getUShort_ret;            
}


const char* BasicTypeTest_getLongRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getLongRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getLongRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getLongRequestUtils::setTypeData(BasicTypeTest_getLongRequest& instance, /*in*/ DDS_Long lo1, /*inout*/ DDS_Long lo2)
{
    instance.lo1 = lo1;
    instance.lo2 = lo2;
    
}

void BasicTypeTest_getLongRequestUtils::extractTypeData(BasicTypeTest_getLongRequest& data, /*in*/ DDS_Long& lo1, /*inout*/ DDS_Long& lo2)
{
    lo1 = data.lo1;
    lo2 = data.lo2;  
    
}


const char* BasicTypeTest_getLongReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getLongReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getLongReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getLongReplyUtils::setTypeData(BasicTypeTest_getLongReply& instance, /*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret)
{
    instance.lo2 = lo2;
    instance.lo3 = lo3;
    instance.getLong_ret = getLong_ret;            
}

void BasicTypeTest_getLongReplyUtils::extractTypeData(BasicTypeTest_getLongReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3, /*out*/ DDS_Long& getLong_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    lo2 = data.lo2;
    lo3 = data.lo3;  
    getLong_ret = data.getLong_ret;            
}


const char* BasicTypeTest_getULongRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getULongRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getULongRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getULongRequestUtils::setTypeData(BasicTypeTest_getULongRequest& instance, /*in*/ DDS_UnsignedLong ulo1, /*inout*/ DDS_UnsignedLong ulo2)
{
    instance.ulo1 = ulo1;
    instance.ulo2 = ulo2;
    
}

void BasicTypeTest_getULongRequestUtils::extractTypeData(BasicTypeTest_getULongRequest& data, /*in*/ DDS_UnsignedLong& ulo1, /*inout*/ DDS_UnsignedLong& ulo2)
{
    ulo1 = data.ulo1;
    ulo2 = data.ulo2;  
    
}


const char* BasicTypeTest_getULongReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getULongReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getULongReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getULongReplyUtils::setTypeData(BasicTypeTest_getULongReply& instance, /*inout*/ DDS_UnsignedLong ulo2, /*out*/ DDS_UnsignedLong ulo3, /*out*/ DDS_UnsignedLong getULong_ret)
{
    instance.ulo2 = ulo2;
    instance.ulo3 = ulo3;
    instance.getULong_ret = getULong_ret;            
}

void BasicTypeTest_getULongReplyUtils::extractTypeData(BasicTypeTest_getULongReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_UnsignedLong& ulo2, /*out*/ DDS_UnsignedLong& ulo3, /*out*/ DDS_UnsignedLong& getULong_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    ulo2 = data.ulo2;
    ulo3 = data.ulo3;  
    getULong_ret = data.getULong_ret;            
}


const char* BasicTypeTest_getLLongRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getLLongRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getLLongRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getLLongRequestUtils::setTypeData(BasicTypeTest_getLLongRequest& instance, /*in*/ DDS_LongLong llo1, /*inout*/ DDS_LongLong llo2)
{
    instance.llo1 = llo1;
    instance.llo2 = llo2;
    
}

void BasicTypeTest_getLLongRequestUtils::extractTypeData(BasicTypeTest_getLLongRequest& data, /*in*/ DDS_LongLong& llo1, /*inout*/ DDS_LongLong& llo2)
{
    llo1 = data.llo1;
    llo2 = data.llo2;  
    
}


const char* BasicTypeTest_getLLongReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getLLongReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getLLongReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getLLongReplyUtils::setTypeData(BasicTypeTest_getLLongReply& instance, /*inout*/ DDS_LongLong llo2, /*out*/ DDS_LongLong llo3, /*out*/ DDS_LongLong getLLong_ret)
{
    instance.llo2 = llo2;
    instance.llo3 = llo3;
    instance.getLLong_ret = getLLong_ret;            
}

void BasicTypeTest_getLLongReplyUtils::extractTypeData(BasicTypeTest_getLLongReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_LongLong& llo2, /*out*/ DDS_LongLong& llo3, /*out*/ DDS_LongLong& getLLong_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    llo2 = data.llo2;
    llo3 = data.llo3;  
    getLLong_ret = data.getLLong_ret;            
}


const char* BasicTypeTest_getULLongRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getULLongRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getULLongRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getULLongRequestUtils::setTypeData(BasicTypeTest_getULLongRequest& instance, /*in*/ DDS_UnsignedLongLong ullo1, /*inout*/ DDS_UnsignedLongLong ullo2)
{
    instance.ullo1 = ullo1;
    instance.ullo2 = ullo2;
    
}

void BasicTypeTest_getULLongRequestUtils::extractTypeData(BasicTypeTest_getULLongRequest& data, /*in*/ DDS_UnsignedLongLong& ullo1, /*inout*/ DDS_UnsignedLongLong& ullo2)
{
    ullo1 = data.ullo1;
    ullo2 = data.ullo2;  
    
}


const char* BasicTypeTest_getULLongReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getULLongReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getULLongReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getULLongReplyUtils::setTypeData(BasicTypeTest_getULLongReply& instance, /*inout*/ DDS_UnsignedLongLong ullo2, /*out*/ DDS_UnsignedLongLong ullo3, /*out*/ DDS_UnsignedLongLong getULLong_ret)
{
    instance.ullo2 = ullo2;
    instance.ullo3 = ullo3;
    instance.getULLong_ret = getULLong_ret;            
}

void BasicTypeTest_getULLongReplyUtils::extractTypeData(BasicTypeTest_getULLongReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_UnsignedLongLong& ullo2, /*out*/ DDS_UnsignedLongLong& ullo3, /*out*/ DDS_UnsignedLongLong& getULLong_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    ullo2 = data.ullo2;
    ullo3 = data.ullo3;  
    getULLong_ret = data.getULLong_ret;            
}


const char* BasicTypeTest_getFloatRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getFloatRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getFloatRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getFloatRequestUtils::setTypeData(BasicTypeTest_getFloatRequest& instance, /*in*/ DDS_Float fl1, /*inout*/ DDS_Float fl2)
{
    instance.fl1 = fl1;
    instance.fl2 = fl2;
    
}

void BasicTypeTest_getFloatRequestUtils::extractTypeData(BasicTypeTest_getFloatRequest& data, /*in*/ DDS_Float& fl1, /*inout*/ DDS_Float& fl2)
{
    fl1 = data.fl1;
    fl2 = data.fl2;  
    
}


const char* BasicTypeTest_getFloatReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getFloatReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getFloatReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getFloatReplyUtils::setTypeData(BasicTypeTest_getFloatReply& instance, /*inout*/ DDS_Float fl2, /*out*/ DDS_Float fl3, /*out*/ DDS_Float getFloat_ret)
{
    instance.fl2 = fl2;
    instance.fl3 = fl3;
    instance.getFloat_ret = getFloat_ret;            
}

void BasicTypeTest_getFloatReplyUtils::extractTypeData(BasicTypeTest_getFloatReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Float& fl2, /*out*/ DDS_Float& fl3, /*out*/ DDS_Float& getFloat_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    fl2 = data.fl2;
    fl3 = data.fl3;  
    getFloat_ret = data.getFloat_ret;            
}


const char* BasicTypeTest_getDoubleRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getDoubleRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getDoubleRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getDoubleRequestUtils::setTypeData(BasicTypeTest_getDoubleRequest& instance, /*in*/ DDS_Double do1, /*inout*/ DDS_Double do2)
{
    instance.do1 = do1;
    instance.do2 = do2;
    
}

void BasicTypeTest_getDoubleRequestUtils::extractTypeData(BasicTypeTest_getDoubleRequest& data, /*in*/ DDS_Double& do1, /*inout*/ DDS_Double& do2)
{
    do1 = data.do1;
    do2 = data.do2;  
    
}


const char* BasicTypeTest_getDoubleReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getDoubleReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getDoubleReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getDoubleReplyUtils::setTypeData(BasicTypeTest_getDoubleReply& instance, /*inout*/ DDS_Double do2, /*out*/ DDS_Double do3, /*out*/ DDS_Double getDouble_ret)
{
    instance.do2 = do2;
    instance.do3 = do3;
    instance.getDouble_ret = getDouble_ret;            
}

void BasicTypeTest_getDoubleReplyUtils::extractTypeData(BasicTypeTest_getDoubleReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Double& do2, /*out*/ DDS_Double& do3, /*out*/ DDS_Double& getDouble_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    do2 = data.do2;
    do3 = data.do3;  
    getDouble_ret = data.getDouble_ret;            
}


const char* BasicTypeTest_getBooleanRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getBooleanRequestTypeSupport::get_type_name();

        if(BasicTypeTest_getBooleanRequestTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getBooleanRequestUtils::setTypeData(BasicTypeTest_getBooleanRequest& instance, /*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean bo2)
{
    instance.bo1 = bo1;
    instance.bo2 = bo2;
    
}

void BasicTypeTest_getBooleanRequestUtils::extractTypeData(BasicTypeTest_getBooleanRequest& data, /*in*/ DDS_Boolean& bo1, /*inout*/ DDS_Boolean& bo2)
{
    bo1 = data.bo1;
    bo2 = data.bo2;  
    
}


const char* BasicTypeTest_getBooleanReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        typeName = BasicTypeTest_getBooleanReplyTypeSupport::get_type_name();

        if(BasicTypeTest_getBooleanReplyTypeSupport::register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void BasicTypeTest_getBooleanReplyUtils::setTypeData(BasicTypeTest_getBooleanReply& instance, /*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret)
{
    instance.bo2 = bo2;
    instance.bo3 = bo3;
    instance.getBoolean_ret = getBoolean_ret;            
}

void BasicTypeTest_getBooleanReplyUtils::extractTypeData(BasicTypeTest_getBooleanReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3, /*out*/ DDS_Boolean& getBoolean_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
    bo2 = data.bo2;
    bo3 = data.bo3;  
    getBoolean_ret = data.getBoolean_ret;            
}

 