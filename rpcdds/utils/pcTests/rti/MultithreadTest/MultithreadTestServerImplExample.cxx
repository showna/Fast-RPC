/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file MultithreadTestServerImplExample.cxx
 * This source file contains the definition of the skeleton for all interfaces.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "MultithreadTestServerImplExample.h"
 
DDS_Long MultithreadTestServerImplExample::test(/*in*/ const Dato& dato1, /*out*/ Dato& dato2) 
{
    DDS_Long returnedValue = 0;
        
    dato2.count = dato1.count;
	Dato_initialize(&dato2);
#if defined(_WIN32)
    _snprintf(dato2.message, 255, "%s", dato1.message);
#elif defined(__linux)
    snprintf(dato2.message, 255, "%s", dato1.message);
#endif
   
    return returnedValue;
} 
