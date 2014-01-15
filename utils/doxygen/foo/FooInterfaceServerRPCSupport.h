/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file FooInterfaceServerRPCSupport.h
 * This header file contains the declaration of the server's RPC endpoints for interface FooInterface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _FooInterface_SERVER_RPC_SUPPORT_H_
#define _FooInterface_SERVER_RPC_SUPPORT_H_

#include "utils/GenericServerRPC.h"
#include "FooInterfaceRequestReplySupport.h"



GENERIC_SERVER_RPC(FooInterface_FooProcedureServerRPC, FooInterface_FooProcedureReplyDataWriter, FooInterface_FooProcedureRequestDataReader);


#endif  // _FooInterface_SERVER_RPC_SUPPORT_H_