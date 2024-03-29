/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorProxy.cxx
 * This source file contains the definition of the proxy for interface Calculator.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "CalculatorRequestReplyPlugin.h"
#include "CalculatorAsyncSupport.h"
#include "exceptions/Exceptions.h"

CalculatorProxy::CalculatorProxy(std::string remoteServiceName, int domainId, long timeout) :
    Client(remoteServiceName, NULL, domainId, timeout)
{
    createRPCs();
}

CalculatorProxy::CalculatorProxy(std::string remoteServiceName, eProsima::RPCDDS::Transport *transport, int domainId, long timeout) :
    Client(remoteServiceName, transport, domainId, timeout)
{
    createRPCs();
}

CalculatorProxy::~CalculatorProxy()
{
    delete addition_Service;
    delete subtraction_Service;
}

void CalculatorProxy::createRPCs()
{
    this->addition_Service = new Calculator_additionClientRPC("addition",
                                  Calculator_additionRequestUtils::registerType(getParticipant()),
                                  Calculator_additionReplyUtils::registerType(getParticipant()),
                                  this);
    this->subtraction_Service = new Calculator_subtractionClientRPC("subtraction",
                                  Calculator_subtractionRequestUtils::registerType(getParticipant()),
                                  Calculator_subtractionReplyUtils::registerType(getParticipant()),
                                  this);

}

 
DDS_Long CalculatorProxy::addition(/*in*/ DDS_Long value1, /*in*/ DDS_Long value2) 
{
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    DDS_Long  addition_ret = 0;
    Calculator_additionRequest instance;
    Calculator_additionReply retInstance;

    Calculator_additionReply_initialize(&retInstance);
    Calculator_additionRequestUtils::setTypeData(instance, value1, value2);
    retcode = addition_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
    {
        Calculator_additionReplyUtils::extractTypeData(retInstance, retcode, addition_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
            throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::RPCDDS::SERVER_TIMEOUT:
            throw eProsima::RPCDDS::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::RPCDDS::SERVER_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ServerInternalException(retInstance.header.rpcddsRetMsg);
            break;
    };
    

    return addition_ret;
}
 
DDS_Long CalculatorProxy::subtraction(/*in*/ DDS_Long value1, /*in*/ DDS_Long value2) 
{
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    DDS_Long  subtraction_ret = 0;
    Calculator_subtractionRequest instance;
    Calculator_subtractionReply retInstance;

    Calculator_subtractionReply_initialize(&retInstance);
    Calculator_subtractionRequestUtils::setTypeData(instance, value1, value2);
    retcode = subtraction_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
    {
        Calculator_subtractionReplyUtils::extractTypeData(retInstance, retcode, subtraction_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
            throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::RPCDDS::SERVER_TIMEOUT:
            throw eProsima::RPCDDS::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::RPCDDS::SERVER_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ServerInternalException(retInstance.header.rpcddsRetMsg);
            break;
    };
    

    return subtraction_ret;
}

 
void CalculatorProxy::addition_async(Calculator_additionCallbackHandler &obj, /*in*/ DDS_Long value1, /*in*/ DDS_Long value2) 
{
	eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    Calculator_additionRequest instance;
    Calculator_additionTask *task = NULL;
    Calculator_additionRequestUtils::setTypeData(instance, value1, value2);
    task = new Calculator_additionTask(obj, this);
    retcode = addition_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
             throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void CalculatorProxy::subtraction_async(Calculator_subtractionCallbackHandler &obj, /*in*/ DDS_Long value1, /*in*/ DDS_Long value2) 
{
	eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    Calculator_subtractionRequest instance;
    Calculator_subtractionTask *task = NULL;
    Calculator_subtractionRequestUtils::setTypeData(instance, value1, value2);
    task = new Calculator_subtractionTask(obj, this);
    retcode = subtraction_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
             throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}