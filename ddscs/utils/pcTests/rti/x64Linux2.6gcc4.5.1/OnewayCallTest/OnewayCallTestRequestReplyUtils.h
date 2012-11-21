/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file OnewayCallTestRequestReplyUtils.h
 * This header file contains the declaration of helpful functions for the DDS messages for interface OnewayCallTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _OnewayCallTest_REQUEST_REPLY_UTILS_H_
#define _OnewayCallTest_REQUEST_REPLY_UTILS_H_

#include "utils/Messages.h"
#include "OnewayCallTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class OnewayCallTest_setLongRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_setLongRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_setLongRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_setLongRequest.
         *
         * \param instance Pointer to the structure OnewayCallTest_setLongRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_setLongRequest& instance, /*in*/ DDS_Long lo1);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_setLongRequest.
         *
         * \param data Pointer to the structure OnewayCallTest_setLongRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(OnewayCallTest_setLongRequest& data, /*in*/ DDS_Long& lo1);
};


class OnewayCallTest_getLongRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_getLongRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_getLongRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_getLongRequest.
         *
         * \param instance Pointer to the structure OnewayCallTest_getLongRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_getLongRequest& instance);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_getLongRequest.
         *
         * \param data Pointer to the structure OnewayCallTest_getLongRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(OnewayCallTest_getLongRequest& data);
};


class OnewayCallTest_getLongReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_getLongReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_getLongReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_getLongReply.
         *
         * \param instance Pointer to the structure OnewayCallTest_getLongReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_getLongReply& instance, /*out*/ DDS_Long getLong_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_getLongReply.
         *
         * \param data Pointer to the structure OnewayCallTest_getLongReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(OnewayCallTest_getLongReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ DDS_Long& getLong_ret);
};


class OnewayCallTest_setBooleanRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_setBooleanRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_setBooleanRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_setBooleanRequest.
         *
         * \param instance Pointer to the structure OnewayCallTest_setBooleanRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_setBooleanRequest& instance, /*in*/ DDS_Boolean bo1);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_setBooleanRequest.
         *
         * \param data Pointer to the structure OnewayCallTest_setBooleanRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(OnewayCallTest_setBooleanRequest& data, /*in*/ DDS_Boolean& bo1);
};


class OnewayCallTest_getBooleanRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_getBooleanRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_getBooleanRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_getBooleanRequest.
         *
         * \param instance Pointer to the structure OnewayCallTest_getBooleanRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_getBooleanRequest& instance);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_getBooleanRequest.
         *
         * \param data Pointer to the structure OnewayCallTest_getBooleanRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(OnewayCallTest_getBooleanRequest& data);
};


class OnewayCallTest_getBooleanReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_getBooleanReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_getBooleanReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_getBooleanReply.
         *
         * \param instance Pointer to the structure OnewayCallTest_getBooleanReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_getBooleanReply& instance, /*out*/ DDS_Boolean getBoolean_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_getBooleanReply.
         *
         * \param data Pointer to the structure OnewayCallTest_getBooleanReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(OnewayCallTest_getBooleanReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ DDS_Boolean& getBoolean_ret);
};


class OnewayCallTest_setStringRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_setStringRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_setStringRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_setStringRequest.
         *
         * \param instance Pointer to the structure OnewayCallTest_setStringRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_setStringRequest& instance, /*in*/ char* s1);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_setStringRequest.
         *
         * \param data Pointer to the structure OnewayCallTest_setStringRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(OnewayCallTest_setStringRequest& data, /*in*/ char*& s1);
};


class OnewayCallTest_getStringRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_getStringRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_getStringRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_getStringRequest.
         *
         * \param instance Pointer to the structure OnewayCallTest_getStringRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_getStringRequest& instance);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_getStringRequest.
         *
         * \param data Pointer to the structure OnewayCallTest_getStringRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(OnewayCallTest_getStringRequest& data);
};


class OnewayCallTest_getStringReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_getStringReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_getStringReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_getStringReply.
         *
         * \param instance Pointer to the structure OnewayCallTest_getStringReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_getStringReply& instance, /*out*/ char* getString_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_getStringReply.
         *
         * \param data Pointer to the structure OnewayCallTest_getStringReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(OnewayCallTest_getStringReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ char*& getString_ret);
};


class OnewayCallTest_setStructRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_setStructRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_setStructRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_setStructRequest.
         *
         * \param instance Pointer to the structure OnewayCallTest_setStructRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_setStructRequest& instance, /*in*/ const Structure& ev);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_setStructRequest.
         *
         * \param data Pointer to the structure OnewayCallTest_setStructRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(OnewayCallTest_setStructRequest& data, /*in*/ Structure& ev);
};


class OnewayCallTest_getStructRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_getStructRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_getStructRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_getStructRequest.
         *
         * \param instance Pointer to the structure OnewayCallTest_getStructRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_getStructRequest& instance);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_getStructRequest.
         *
         * \param data Pointer to the structure OnewayCallTest_getStructRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(OnewayCallTest_getStructRequest& data);
};


class OnewayCallTest_getStructReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure OnewayCallTest_getStructReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure OnewayCallTest_getStructReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure OnewayCallTest_getStructReply.
         *
         * \param instance Pointer to the structure OnewayCallTest_getStructReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(OnewayCallTest_getStructReply& instance, /*out*/ const Structure& getStruct_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure OnewayCallTest_getStructReply.
         *
         * \param data Pointer to the structure OnewayCallTest_getStructReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(OnewayCallTest_getStructReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ Structure& getStruct_ret);
};

 
#endif // _OnewayCallTest_REQUEST_REPLY_UTILS_H_
