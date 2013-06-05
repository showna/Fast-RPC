/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorRequestReplyUtils.cxx
 * This source file contains the definition of helpful functions for the DDS messages for interface Calculator.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorRequestReplyUtils.h"
#include "CalculatorRequestReplyTypeSupportImpl.h"


const char* Calculator_additionRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        Calculator_additionRequestTypeSupport_var ts = new Calculator_additionRequestTypeSupportImpl;
        typeName = CORBA::string_dup ("Calculator_additionRequest");

        if(ts->register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void Calculator_additionRequestUtils::setTypeData(Calculator_additionRequest& instance, /*in*/ CORBA::Long x, /*in*/ CORBA::Long y)
{
    instance.x = x;
    instance.y = y;
    
}

void Calculator_additionRequestUtils::extractTypeData(Calculator_additionRequest& data, /*in*/ CORBA::Long& x, /*in*/ CORBA::Long& y)
{
    x = data.x;
    y = data.y;  
    
}


const char* Calculator_additionReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        Calculator_additionReplyTypeSupport_var ts = new Calculator_additionReplyTypeSupportImpl;
        typeName = CORBA::string_dup ("Calculator_additionReply");

        if(ts->register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void Calculator_additionReplyUtils::setTypeData(Calculator_additionReply& instance, /*out*/ CORBA::LongLong addition_ret)
{
    instance.addition_ret = addition_ret;            
}

void Calculator_additionReplyUtils::extractTypeData(Calculator_additionReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ CORBA::LongLong& addition_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
  
    addition_ret = data.addition_ret;            
}


const char* Calculator_substractionRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        Calculator_substractionRequestTypeSupport_var ts = new Calculator_substractionRequestTypeSupportImpl;
        typeName = CORBA::string_dup ("Calculator_substractionRequest");

        if(ts->register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void Calculator_substractionRequestUtils::setTypeData(Calculator_substractionRequest& instance, /*in*/ CORBA::Long x, /*in*/ CORBA::Long y)
{
    instance.x = x;
    instance.y = y;
    
}

void Calculator_substractionRequestUtils::extractTypeData(Calculator_substractionRequest& data, /*in*/ CORBA::Long& x, /*in*/ CORBA::Long& y)
{
    x = data.x;
    y = data.y;  
    
}


const char* Calculator_substractionReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        Calculator_substractionReplyTypeSupport_var ts = new Calculator_substractionReplyTypeSupportImpl;
        typeName = CORBA::string_dup ("Calculator_substractionReply");

        if(ts->register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void Calculator_substractionReplyUtils::setTypeData(Calculator_substractionReply& instance, /*out*/ CORBA::LongLong substraction_ret)
{
    instance.substraction_ret = substraction_ret;            
}

void Calculator_substractionReplyUtils::extractTypeData(Calculator_substractionReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ CORBA::LongLong& substraction_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
  
    substraction_ret = data.substraction_ret;            
}


const char* Calculator_multiplicationRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        Calculator_multiplicationRequestTypeSupport_var ts = new Calculator_multiplicationRequestTypeSupportImpl;
        typeName = CORBA::string_dup ("Calculator_multiplicationRequest");

        if(ts->register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void Calculator_multiplicationRequestUtils::setTypeData(Calculator_multiplicationRequest& instance, /*in*/ CORBA::Long x, /*in*/ CORBA::Long y)
{
    instance.x = x;
    instance.y = y;
    
}

void Calculator_multiplicationRequestUtils::extractTypeData(Calculator_multiplicationRequest& data, /*in*/ CORBA::Long& x, /*in*/ CORBA::Long& y)
{
    x = data.x;
    y = data.y;  
    
}


const char* Calculator_multiplicationReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        Calculator_multiplicationReplyTypeSupport_var ts = new Calculator_multiplicationReplyTypeSupportImpl;
        typeName = CORBA::string_dup ("Calculator_multiplicationReply");

        if(ts->register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void Calculator_multiplicationReplyUtils::setTypeData(Calculator_multiplicationReply& instance, /*out*/ CORBA::LongLong multiplication_ret)
{
    instance.multiplication_ret = multiplication_ret;            
}

void Calculator_multiplicationReplyUtils::extractTypeData(Calculator_multiplicationReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ CORBA::LongLong& multiplication_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
  
    multiplication_ret = data.multiplication_ret;            
}


const char* Calculator_divisionRequestUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        Calculator_divisionRequestTypeSupport_var ts = new Calculator_divisionRequestTypeSupportImpl;
        typeName = CORBA::string_dup ("Calculator_divisionRequest");

        if(ts->register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void Calculator_divisionRequestUtils::setTypeData(Calculator_divisionRequest& instance, /*in*/ CORBA::Long x, /*in*/ CORBA::Long y)
{
    instance.x = x;
    instance.y = y;
    
}

void Calculator_divisionRequestUtils::extractTypeData(Calculator_divisionRequest& data, /*in*/ CORBA::Long& x, /*in*/ CORBA::Long& y)
{
    x = data.x;
    y = data.y;  
    
}


const char* Calculator_divisionReplyUtils::registerType(DDS::DomainParticipant *participant)
{
    const char *typeName = NULL;

    if(participant != NULL)
    {
        Calculator_divisionReplyTypeSupport_var ts = new Calculator_divisionReplyTypeSupportImpl;
        typeName = CORBA::string_dup ("Calculator_divisionReply");

        if(ts->register_type(participant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

void Calculator_divisionReplyUtils::setTypeData(Calculator_divisionReply& instance, /*out*/ CORBA::LongLong division_ret)
{
    instance.division_ret = division_ret;            
}

void Calculator_divisionReplyUtils::extractTypeData(Calculator_divisionReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ CORBA::LongLong& division_ret)
{
retcode = (eProsima::RPCDDS::ReturnMessage)data.header.rpcddsRetCode;
  
    division_ret = data.division_ret;            
}

 