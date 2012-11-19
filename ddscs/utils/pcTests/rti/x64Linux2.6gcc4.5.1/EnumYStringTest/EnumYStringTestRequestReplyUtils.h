
#ifndef _EnumYStringTest_REQUEST_REPLY_UTILS_H_
#define _EnumYStringTest_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "EnumYStringTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class EnumYStringTest_getEnumRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure EnumYStringTest_getEnumRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure EnumYStringTest_getEnumRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure EnumYStringTest_getEnumRequest.
         *
         * \param instance Pointer to the structure EnumYStringTest_getEnumRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(EnumYStringTest_getEnumRequest& instance, /*in*/ Valores v1, /*inout*/ Valores v2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure EnumYStringTest_getEnumRequest.
         *
         * \param data Pointer to the structure EnumYStringTest_getEnumRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(EnumYStringTest_getEnumRequest& data, /*in*/ Valores& v1, /*inout*/ Valores& v2);
};


class EnumYStringTest_getEnumReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure EnumYStringTest_getEnumReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure EnumYStringTest_getEnumReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure EnumYStringTest_getEnumReply.
         *
         * \param instance Pointer to the structure EnumYStringTest_getEnumReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(EnumYStringTest_getEnumReply& instance, /*inout*/ Valores v2, /*out*/ Valores v3, /*out*/ Valores getEnum_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure EnumYStringTest_getEnumReply.
         *
         * \param data Pointer to the structure EnumYStringTest_getEnumReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(EnumYStringTest_getEnumReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ Valores& v2, /*out*/ Valores& v3, /*out*/ Valores& getEnum_ret);
};


class EnumYStringTest_getStringRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure EnumYStringTest_getStringRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure EnumYStringTest_getStringRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure EnumYStringTest_getStringRequest.
         *
         * \param instance Pointer to the structure EnumYStringTest_getStringRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(EnumYStringTest_getStringRequest& instance, /*in*/ char* s1, /*inout*/ char* s2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure EnumYStringTest_getStringRequest.
         *
         * \param data Pointer to the structure EnumYStringTest_getStringRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(EnumYStringTest_getStringRequest& data, /*in*/ char*& s1, /*inout*/ char*& s2);
};


class EnumYStringTest_getStringReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure EnumYStringTest_getStringReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure EnumYStringTest_getStringReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure EnumYStringTest_getStringReply.
         *
         * \param instance Pointer to the structure EnumYStringTest_getStringReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(EnumYStringTest_getStringReply& instance, /*inout*/ char* s2, /*out*/ char* s3, /*out*/ char* getString_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure EnumYStringTest_getStringReply.
         *
         * \param data Pointer to the structure EnumYStringTest_getStringReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(EnumYStringTest_getStringReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ char*& s2, /*out*/ char*& s3, /*out*/ char*& getString_ret);
};


class EnumYStringTest_getStringBoundedRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure EnumYStringTest_getStringBoundedRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure EnumYStringTest_getStringBoundedRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure EnumYStringTest_getStringBoundedRequest.
         *
         * \param instance Pointer to the structure EnumYStringTest_getStringBoundedRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(EnumYStringTest_getStringBoundedRequest& instance, /*in*/ char* sb1, /*inout*/ char* sb2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure EnumYStringTest_getStringBoundedRequest.
         *
         * \param data Pointer to the structure EnumYStringTest_getStringBoundedRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(EnumYStringTest_getStringBoundedRequest& data, /*in*/ char*& sb1, /*inout*/ char*& sb2);
};


class EnumYStringTest_getStringBoundedReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure EnumYStringTest_getStringBoundedReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure EnumYStringTest_getStringBoundedReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure EnumYStringTest_getStringBoundedReply.
         *
         * \param instance Pointer to the structure EnumYStringTest_getStringBoundedReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(EnumYStringTest_getStringBoundedReply& instance, /*inout*/ char* sb2, /*out*/ char* sb3, /*out*/ char* getStringBounded_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure EnumYStringTest_getStringBoundedReply.
         *
         * \param data Pointer to the structure EnumYStringTest_getStringBoundedReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(EnumYStringTest_getStringBoundedReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ char*& sb2, /*out*/ char*& sb3, /*out*/ char*& getStringBounded_ret);
};

 
#endif // _EnumYStringTest_REQUEST_REPLY_UTILS_H_
