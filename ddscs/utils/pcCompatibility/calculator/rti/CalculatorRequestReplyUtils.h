/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorRequestReplyUtils.h
 * This header file contains the declaration of helpful functions for the DDS messages for interface Calculator.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _Calculator_REQUEST_REPLY_UTILS_H_
#define _Calculator_REQUEST_REPLY_UTILS_H_

#include "utils/Messages.h"
#include "CalculatorRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


/**
 * \brief This class contains helpful operations for the generated topic Calculator_additionRequest.
 */
class Calculator_additionRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure Calculator_additionRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure Calculator_additionRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure Calculator_additionRequest.
         *
         * \param instance Pointer to the structure Calculator_additionRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(Calculator_additionRequest& instance, /*in*/ DDS_Long x, /*in*/ DDS_Long y);
        
        /**
         * \brief This function extracts the parameters from the members of the structure Calculator_additionRequest.
         *
         * \param data Pointer to the structure Calculator_additionRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(Calculator_additionRequest& data, /*in*/ DDS_Long& x, /*in*/ DDS_Long& y);
};


/**
 * \brief This class contains helpful operations for the generated topic Calculator_additionReply.
 */
class Calculator_additionReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure Calculator_additionReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure Calculator_additionReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure Calculator_additionReply.
         *
         * \param instance Pointer to the structure Calculator_additionReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(Calculator_additionReply& instance, /*out*/ DDS_LongLong addition_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure Calculator_additionReply.
         *
         * \param data Pointer to the structure Calculator_additionReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(Calculator_additionReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ DDS_LongLong& addition_ret);
};


/**
 * \brief This class contains helpful operations for the generated topic Calculator_substractionRequest.
 */
class Calculator_substractionRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure Calculator_substractionRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure Calculator_substractionRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure Calculator_substractionRequest.
         *
         * \param instance Pointer to the structure Calculator_substractionRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(Calculator_substractionRequest& instance, /*in*/ DDS_Long x, /*in*/ DDS_Long y);
        
        /**
         * \brief This function extracts the parameters from the members of the structure Calculator_substractionRequest.
         *
         * \param data Pointer to the structure Calculator_substractionRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(Calculator_substractionRequest& data, /*in*/ DDS_Long& x, /*in*/ DDS_Long& y);
};


/**
 * \brief This class contains helpful operations for the generated topic Calculator_substractionReply.
 */
class Calculator_substractionReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure Calculator_substractionReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure Calculator_substractionReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure Calculator_substractionReply.
         *
         * \param instance Pointer to the structure Calculator_substractionReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(Calculator_substractionReply& instance, /*out*/ DDS_LongLong substraction_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure Calculator_substractionReply.
         *
         * \param data Pointer to the structure Calculator_substractionReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(Calculator_substractionReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ DDS_LongLong& substraction_ret);
};


/**
 * \brief This class contains helpful operations for the generated topic Calculator_multiplicationRequest.
 */
class Calculator_multiplicationRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure Calculator_multiplicationRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure Calculator_multiplicationRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure Calculator_multiplicationRequest.
         *
         * \param instance Pointer to the structure Calculator_multiplicationRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(Calculator_multiplicationRequest& instance, /*in*/ DDS_Long x, /*in*/ DDS_Long y);
        
        /**
         * \brief This function extracts the parameters from the members of the structure Calculator_multiplicationRequest.
         *
         * \param data Pointer to the structure Calculator_multiplicationRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(Calculator_multiplicationRequest& data, /*in*/ DDS_Long& x, /*in*/ DDS_Long& y);
};


/**
 * \brief This class contains helpful operations for the generated topic Calculator_multiplicationReply.
 */
class Calculator_multiplicationReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure Calculator_multiplicationReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure Calculator_multiplicationReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure Calculator_multiplicationReply.
         *
         * \param instance Pointer to the structure Calculator_multiplicationReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(Calculator_multiplicationReply& instance, /*out*/ DDS_LongLong multiplication_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure Calculator_multiplicationReply.
         *
         * \param data Pointer to the structure Calculator_multiplicationReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(Calculator_multiplicationReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ DDS_LongLong& multiplication_ret);
};


/**
 * \brief This class contains helpful operations for the generated topic Calculator_divisionRequest.
 */
class Calculator_divisionRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure Calculator_divisionRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure Calculator_divisionRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure Calculator_divisionRequest.
         *
         * \param instance Pointer to the structure Calculator_divisionRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(Calculator_divisionRequest& instance, /*in*/ DDS_Long x, /*in*/ DDS_Long y);
        
        /**
         * \brief This function extracts the parameters from the members of the structure Calculator_divisionRequest.
         *
         * \param data Pointer to the structure Calculator_divisionRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(Calculator_divisionRequest& data, /*in*/ DDS_Long& x, /*in*/ DDS_Long& y);
};


/**
 * \brief This class contains helpful operations for the generated topic Calculator_divisionReply.
 */
class Calculator_divisionReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure Calculator_divisionReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure Calculator_divisionReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure Calculator_divisionReply.
         *
         * \param instance Pointer to the structure Calculator_divisionReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(Calculator_divisionReply& instance, /*out*/ DDS_LongLong division_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure Calculator_divisionReply.
         *
         * \param data Pointer to the structure Calculator_divisionReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(Calculator_divisionReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ DDS_LongLong& division_ret);
};

 
#endif // _Calculator_REQUEST_REPLY_UTILS_H_