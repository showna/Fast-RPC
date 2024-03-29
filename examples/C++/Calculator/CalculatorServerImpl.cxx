/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorServerImpl.cxx
 * This source file contains the definition of the skeleton for interface Calculator. This definitions have to be implemented.
 *
 * This file was generated by the tool rpcddsgen.
 */
 
#include "CalculatorServerImpl.h"

 
DDS_Long CalculatorServerImpl::addition(/*in*/ DDS_Long value1, /*in*/ DDS_Long value2) 
{
    DDS_Long  addition_ret = value1 + value2;
   
    return addition_ret;
} 
 
DDS_Long CalculatorServerImpl::subtraction(/*in*/ DDS_Long value1, /*in*/ DDS_Long value2) 
{
    DDS_Long  subtraction_ret = value1 - value2;
   
    return subtraction_ret;
} 