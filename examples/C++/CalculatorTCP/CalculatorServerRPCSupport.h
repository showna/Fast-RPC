/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorServerRPCSupport.h
 * This header file contains the declaration of the server's RPC endpoints for interface Calculator.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _Calculator_SERVER_RPC_SUPPORT_H_
#define _Calculator_SERVER_RPC_SUPPORT_H_

#include "utils/GenericServerRPC.h"
#include "CalculatorRequestReplySupport.h"



GENERIC_SERVER_RPC(Calculator_additionServerRPC, Calculator_additionReplyDataWriter, Calculator_additionRequestDataReader);


GENERIC_SERVER_RPC(Calculator_subtractionServerRPC, Calculator_subtractionReplyDataWriter, Calculator_subtractionRequestDataReader);


#endif  // _Calculator_SERVER_RPC_SUPPORT_H_