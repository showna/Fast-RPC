
#ifndef _AsyncCallTest_REQUEST_REPLY_UTILS_H_
#define _AsyncCallTest_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "AsyncCallTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class AsyncCallTest_getLongRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure AsyncCallTest_getLongRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure AsyncCallTest_getLongRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure AsyncCallTest_getLongRequest.
         *
         * \param instance Pointer to the structure AsyncCallTest_getLongRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(AsyncCallTest_getLongRequest& instance, /*in*/ DDS_Long lo1, /*inout*/ DDS_Long lo2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure AsyncCallTest_getLongRequest.
         *
         * \param data Pointer to the structure AsyncCallTest_getLongRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(AsyncCallTest_getLongRequest& data, /*in*/ DDS_Long& lo1, /*inout*/ DDS_Long& lo2);
};


class AsyncCallTest_getLongReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure AsyncCallTest_getLongReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure AsyncCallTest_getLongReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure AsyncCallTest_getLongReply.
         *
         * \param instance Pointer to the structure AsyncCallTest_getLongReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(AsyncCallTest_getLongReply& instance, /*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure AsyncCallTest_getLongReply.
         *
         * \param data Pointer to the structure AsyncCallTest_getLongReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(AsyncCallTest_getLongReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3, /*out*/ DDS_Long& getLong_ret);
};


class AsyncCallTest_getBooleanRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure AsyncCallTest_getBooleanRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure AsyncCallTest_getBooleanRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure AsyncCallTest_getBooleanRequest.
         *
         * \param instance Pointer to the structure AsyncCallTest_getBooleanRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(AsyncCallTest_getBooleanRequest& instance, /*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean bo2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure AsyncCallTest_getBooleanRequest.
         *
         * \param data Pointer to the structure AsyncCallTest_getBooleanRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(AsyncCallTest_getBooleanRequest& data, /*in*/ DDS_Boolean& bo1, /*inout*/ DDS_Boolean& bo2);
};


class AsyncCallTest_getBooleanReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure AsyncCallTest_getBooleanReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure AsyncCallTest_getBooleanReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure AsyncCallTest_getBooleanReply.
         *
         * \param instance Pointer to the structure AsyncCallTest_getBooleanReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(AsyncCallTest_getBooleanReply& instance, /*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure AsyncCallTest_getBooleanReply.
         *
         * \param data Pointer to the structure AsyncCallTest_getBooleanReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(AsyncCallTest_getBooleanReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3, /*out*/ DDS_Boolean& getBoolean_ret);
};


class AsyncCallTest_getStringRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure AsyncCallTest_getStringRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure AsyncCallTest_getStringRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure AsyncCallTest_getStringRequest.
         *
         * \param instance Pointer to the structure AsyncCallTest_getStringRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(AsyncCallTest_getStringRequest& instance, /*in*/ char* s1, /*inout*/ char* s2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure AsyncCallTest_getStringRequest.
         *
         * \param data Pointer to the structure AsyncCallTest_getStringRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(AsyncCallTest_getStringRequest& data, /*in*/ char*& s1, /*inout*/ char*& s2);
};


class AsyncCallTest_getStringReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure AsyncCallTest_getStringReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure AsyncCallTest_getStringReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure AsyncCallTest_getStringReply.
         *
         * \param instance Pointer to the structure AsyncCallTest_getStringReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(AsyncCallTest_getStringReply& instance, /*inout*/ char* s2, /*out*/ char* s3, /*out*/ char* getString_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure AsyncCallTest_getStringReply.
         *
         * \param data Pointer to the structure AsyncCallTest_getStringReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(AsyncCallTest_getStringReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ char*& s2, /*out*/ char*& s3, /*out*/ char*& getString_ret);
};


class AsyncCallTest_duplicateRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure AsyncCallTest_duplicateRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure AsyncCallTest_duplicateRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure AsyncCallTest_duplicateRequest.
         *
         * \param instance Pointer to the structure AsyncCallTest_duplicateRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(AsyncCallTest_duplicateRequest& instance, /*in*/ const Structure& ev);
        
        /**
         * \brief This function extracts the parameters from the members of the structure AsyncCallTest_duplicateRequest.
         *
         * \param data Pointer to the structure AsyncCallTest_duplicateRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(AsyncCallTest_duplicateRequest& data, /*in*/ Structure& ev);
};


class AsyncCallTest_duplicateReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure AsyncCallTest_duplicateReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure AsyncCallTest_duplicateReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure AsyncCallTest_duplicateReply.
         *
         * \param instance Pointer to the structure AsyncCallTest_duplicateReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(AsyncCallTest_duplicateReply& instance, /*out*/ const Structure& duplicate_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure AsyncCallTest_duplicateReply.
         *
         * \param data Pointer to the structure AsyncCallTest_duplicateReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(AsyncCallTest_duplicateReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ Structure& duplicate_ret);
};

 
#endif // _AsyncCallTest_REQUEST_REPLY_UTILS_H_
