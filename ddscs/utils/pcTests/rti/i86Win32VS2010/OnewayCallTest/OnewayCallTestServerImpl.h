/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file OnewayCallTestServerImpl.h
 * This header file contains the declaration of the skeleton for interface OnewayCallTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _OnewayCallTestSERVER_IMPL_H_
#define _OnewayCallTestSERVER_IMPL_H_

#include "utils/Messages.h"
#include "OnewayCallTestRequestReplyUtils.h"

/**
 * \brief This class is the skeleton of the servant and its remote procedures has to be implemented.
 *        When the OnewayCallTestServer object is created, it creates one instance of this class.
 */
class OnewayCallTestServerImpl
{
    public:

        /// \brief The default constructor.
        OnewayCallTestServerImpl(){}

        /// \brief The default destructor.
        virtual ~OnewayCallTestServerImpl(){}

         
        void setLong(/*in*/ DDS_Long lo1);
         
        DDS_Long getLong();
         
        void setBoolean(/*in*/ DDS_Boolean bo1);
         
        DDS_Boolean getBoolean();
         
        void setString(/*in*/ char* s1);
         
        char* getString();
         
        void setStruct(/*in*/ const Structure& ev);
         
        Structure getStruct();
};

#endif // _OnewayCallTestSERVER_IMPL_H_