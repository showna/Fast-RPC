/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file UnionTestServerRPCSupport.cxx
 * This source file contains the definition of the server's RPC endpoints for interface UnionTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "server/Server.h"
#include "UnionTestServerRPCSupport.h"


/* Defines */
#define TName                   UnionTest_getEmpleadoServerRPC
#define TDataReplyTypeSupport   UnionTest_getEmpleadoReplyTypeSupport
#define TDataRequestTypeSupport UnionTest_getEmpleadoRequestTypeSupport
#define TData                   UnionTest_getEmpleado
#define TDataReader             UnionTest_getEmpleadoRequestDataReader
#define TDataWriter             UnionTest_getEmpleadoReplyDataWriter


#include "utils/GenericServerRPC.gen"


#undef TName
#undef TDataReplyTypeSupport
#undef TDataRequestTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
