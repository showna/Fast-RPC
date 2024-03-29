/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorAsyncSupport.cxx
 * This source file contains functionality to use asynchronous calls for interface Calculator.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorProxy.h"
#include "CalculatorAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "CalculatorRequestReplyTypeSupportImpl.h"


Calculator_additionTask::Calculator_additionTask(Calculator_additionCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
}

Calculator_additionTask::~Calculator_additionTask()
{
}

Calculator_additionCallbackHandler& Calculator_additionTask::getObject()
{
    return m_obj;
}

void* Calculator_additionTask::getReplyInstance()
{
    return &m_reply;
}

void Calculator_additionTask::execute()
{  
    CORBA::Long  addition_ret = 0;
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	Calculator_additionReplyUtils::extractTypeData(m_reply, retcode, addition_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().addition(addition_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg.in()));
	}
}

void Calculator_additionTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


Calculator_substractionTask::Calculator_substractionTask(Calculator_substractionCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
}

Calculator_substractionTask::~Calculator_substractionTask()
{
}

Calculator_substractionCallbackHandler& Calculator_substractionTask::getObject()
{
    return m_obj;
}

void* Calculator_substractionTask::getReplyInstance()
{
    return &m_reply;
}

void Calculator_substractionTask::execute()
{  
    CORBA::Long  substraction_ret = 0;
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	Calculator_substractionReplyUtils::extractTypeData(m_reply, retcode, substraction_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().substraction(substraction_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg.in()));
	}
}

void Calculator_substractionTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


Calculator_multiplicationTask::Calculator_multiplicationTask(Calculator_multiplicationCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
}

Calculator_multiplicationTask::~Calculator_multiplicationTask()
{
}

Calculator_multiplicationCallbackHandler& Calculator_multiplicationTask::getObject()
{
    return m_obj;
}

void* Calculator_multiplicationTask::getReplyInstance()
{
    return &m_reply;
}

void Calculator_multiplicationTask::execute()
{  
    CORBA::Long  multiplication_ret = 0;
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	Calculator_multiplicationReplyUtils::extractTypeData(m_reply, retcode, multiplication_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().multiplication(multiplication_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg.in()));
	}
}

void Calculator_multiplicationTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


Calculator_divisionTask::Calculator_divisionTask(Calculator_divisionCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
}

Calculator_divisionTask::~Calculator_divisionTask()
{
}

Calculator_divisionCallbackHandler& Calculator_divisionTask::getObject()
{
    return m_obj;
}

void* Calculator_divisionTask::getReplyInstance()
{
    return &m_reply;
}

void Calculator_divisionTask::execute()
{  
    CORBA::Long  division_ret = 0;
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	Calculator_divisionReplyUtils::extractTypeData(m_reply, retcode, division_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().division(division_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg.in()));
	}
}

void Calculator_divisionTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}
