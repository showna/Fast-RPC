
#ifndef _SequenceTest_REQUEST_REPLY_UTILS_H_
#define _SequenceTest_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "SequenceTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class SequenceTest_getSLongRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure SequenceTest_getSLongRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure SequenceTest_getSLongRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure SequenceTest_getSLongRequest.
         *
         * \param instance Pointer to the structure SequenceTest_getSLongRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(SequenceTest_getSLongRequest& instance, /*in*/ const largo& l1, /*inout*/ const largo& l2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure SequenceTest_getSLongRequest.
         *
         * \param data Pointer to the structure SequenceTest_getSLongRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(SequenceTest_getSLongRequest& data, /*in*/ largo& l1, /*inout*/ largo& l2);
};


class SequenceTest_getSLongReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure SequenceTest_getSLongReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure SequenceTest_getSLongReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure SequenceTest_getSLongReply.
         *
         * \param instance Pointer to the structure SequenceTest_getSLongReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(SequenceTest_getSLongReply& instance, /*inout*/ const largo& l2, /*out*/ const largo& l3, /*out*/ const largo& getSLong_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure SequenceTest_getSLongReply.
         *
         * \param data Pointer to the structure SequenceTest_getSLongReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(SequenceTest_getSLongReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ largo& l2, /*out*/ largo& l3, /*out*/ largo& getSLong_ret);
};


class SequenceTest_getStringRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure SequenceTest_getStringRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure SequenceTest_getStringRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure SequenceTest_getStringRequest.
         *
         * \param instance Pointer to the structure SequenceTest_getStringRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(SequenceTest_getStringRequest& instance, /*in*/ const cadena& s1, /*inout*/ const cadena& s2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure SequenceTest_getStringRequest.
         *
         * \param data Pointer to the structure SequenceTest_getStringRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(SequenceTest_getStringRequest& data, /*in*/ cadena& s1, /*inout*/ cadena& s2);
};


class SequenceTest_getStringReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure SequenceTest_getStringReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure SequenceTest_getStringReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure SequenceTest_getStringReply.
         *
         * \param instance Pointer to the structure SequenceTest_getStringReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(SequenceTest_getStringReply& instance, /*inout*/ const cadena& s2, /*out*/ const cadena& s3, /*out*/ const cadena& getString_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure SequenceTest_getStringReply.
         *
         * \param data Pointer to the structure SequenceTest_getStringReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(SequenceTest_getStringReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ cadena& s2, /*out*/ cadena& s3, /*out*/ cadena& getString_ret);
};


class SequenceTest_getStringBoundedRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure SequenceTest_getStringBoundedRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure SequenceTest_getStringBoundedRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure SequenceTest_getStringBoundedRequest.
         *
         * \param instance Pointer to the structure SequenceTest_getStringBoundedRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(SequenceTest_getStringBoundedRequest& instance, /*in*/ const dattos& sb1, /*inout*/ const dattos& sb2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure SequenceTest_getStringBoundedRequest.
         *
         * \param data Pointer to the structure SequenceTest_getStringBoundedRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(SequenceTest_getStringBoundedRequest& data, /*in*/ dattos& sb1, /*inout*/ dattos& sb2);
};


class SequenceTest_getStringBoundedReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure SequenceTest_getStringBoundedReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure SequenceTest_getStringBoundedReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure SequenceTest_getStringBoundedReply.
         *
         * \param instance Pointer to the structure SequenceTest_getStringBoundedReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(SequenceTest_getStringBoundedReply& instance, /*inout*/ const dattos& sb2, /*out*/ const dattos& sb3, /*out*/ const dattos& getStringBounded_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure SequenceTest_getStringBoundedReply.
         *
         * \param data Pointer to the structure SequenceTest_getStringBoundedReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(SequenceTest_getStringBoundedReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ dattos& sb2, /*out*/ dattos& sb3, /*out*/ dattos& getStringBounded_ret);
};

 
#endif // _SequenceTest_REQUEST_REPLY_UTILS_H_
