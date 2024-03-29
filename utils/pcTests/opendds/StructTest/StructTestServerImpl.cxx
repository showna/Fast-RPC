/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file StructTestServerImpl.cxx
 * This source file contains the definition of the skeleton for interface StructTest. This definitions have to be implemented.
 *
 * This file was generated by the tool rpcddsgen.
 */
 
#include "StructTestServerImpl.h"

 
Recepcion StructTestServerImpl::duplicate(/*in*/ const Envio& ev) 
{
    Recepcion duplicate_ret;
        
	duplicate_ret.devolucion = ev.dato;
	duplicate_ret.message = strdup(ev.message);
   
    return duplicate_ret;
} 
 
Recepcion StructTestServerImpl::suma(/*in*/ const Envio& ev1, /*in*/ const Envio& ev2) 
{
    Recepcion suma_ret;
	char *text = NULL;
        
    suma_ret.devolucion = ev1.dato + ev2.dato;
    text = (char*)malloc(strlen(ev1.message) + strlen(ev2.message) + 1);
#if (defined(RTI_WIN32) || defined(OPENDDS_WIN32))
    _snprintf(text, strlen(ev1.message) + strlen(ev2.message) + 1, "%s%s", ev1.message, ev2.message);
#elif (defined(RTI_LINUX) || defined(OPENDDS_LINUX))
    snprintf(text, strlen(ev1.message) + strlen(ev2.message) + 1, "%s%s", ev1.message, ev2.message);
#endif

	suma_ret.message = text;
   
    return suma_ret;
} 
