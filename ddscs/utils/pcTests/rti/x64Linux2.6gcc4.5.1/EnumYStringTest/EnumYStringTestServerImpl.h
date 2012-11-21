/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file EnumYStringTestServerImpl.h
 * This header file contains the declaration of the skeleton for interface EnumYStringTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _EnumYStringTestSERVER_IMPL_H_
#define _EnumYStringTestSERVER_IMPL_H_

#include "utils/Messages.h"
#include "EnumYStringTestRequestReplyUtils.h"

/**
 * \brief This class is the skeleton of the servant and its remote procedures has to be implemented.
 *        When the EnumYStringTestServer object is created, it creates one instance of this class.
 */
class EnumYStringTestServerImpl
{
    public:

        /// \brief The default constructor.
        EnumYStringTestServerImpl(){}

        /// \brief The default destructor.
        virtual ~EnumYStringTestServerImpl(){}

         
        Valores getEnum(/*in*/ Valores v1, /*inout*/ Valores& v2, /*out*/ Valores& v3);
         
        char* getString(/*in*/ char* s1, /*inout*/ char*& s2, /*out*/ char*& s3);
         
        char* getStringBounded(/*in*/ char* sb1, /*inout*/ char*& sb2, /*out*/ char*& sb3);
};

#endif // _EnumYStringTestSERVER_IMPL_H_