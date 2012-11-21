/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file AsyncCallTestClientRPCSupport.h
 * This header file contains the declaration of the proxy's RPC endpoints for interface AsyncCallTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _AsyncCallTest_CLIENT_RPC_SUPPORT_H_
#define _AsyncCallTest_CLIENT_RPC_SUPPORT_H_

#include "utils/GenericClientRPC.h"
#include "AsyncCallTestRequestReplySupport.h"


GENERIC_CLIENT_RPC(AsyncCallTest_getLongClientRPC, AsyncCallTest_getLongRequestDataWriter, AsyncCallTest_getLongReplyDataReader);


GENERIC_CLIENT_RPC(AsyncCallTest_getBooleanClientRPC, AsyncCallTest_getBooleanRequestDataWriter, AsyncCallTest_getBooleanReplyDataReader);


GENERIC_CLIENT_RPC(AsyncCallTest_getStringClientRPC, AsyncCallTest_getStringRequestDataWriter, AsyncCallTest_getStringReplyDataReader);


GENERIC_CLIENT_RPC(AsyncCallTest_duplicateClientRPC, AsyncCallTest_duplicateRequestDataWriter, AsyncCallTest_duplicateReplyDataReader);


#endif  // _AsyncCallTest_CLIENT_RPC_SUPPORT_H_