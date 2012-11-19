
#ifndef _ServerException_REQUEST_REPLY_UTILS_H_
#define _ServerException_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "ServerExceptionRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class ServerException_sendExceptionRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure ServerException_sendExceptionRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure ServerException_sendExceptionRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure ServerException_sendExceptionRequest.
         *
         * \param instance Pointer to the structure ServerException_sendExceptionRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(ServerException_sendExceptionRequest& instance);
        
        /**
         * \brief This function extracts the parameters from the members of the structure ServerException_sendExceptionRequest.
         *
         * \param data Pointer to the structure ServerException_sendExceptionRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(ServerException_sendExceptionRequest& data);
};


class ServerException_sendExceptionReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure ServerException_sendExceptionReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure ServerException_sendExceptionReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure ServerException_sendExceptionReply.
         *
         * \param instance Pointer to the structure ServerException_sendExceptionReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(ServerException_sendExceptionReply& instance);
        
        /**
         * \brief This function extracts the parameters from the members of the structure ServerException_sendExceptionReply.
         *
         * \param data Pointer to the structure ServerException_sendExceptionReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(ServerException_sendExceptionReply& data, eProsima::RPCDDS::ReturnMessage& retcode);
};


class ServerException_sendExceptionTwoRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure ServerException_sendExceptionTwoRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure ServerException_sendExceptionTwoRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure ServerException_sendExceptionTwoRequest.
         *
         * \param instance Pointer to the structure ServerException_sendExceptionTwoRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(ServerException_sendExceptionTwoRequest& instance, /*in*/ char* message, /*inout*/ char* message2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure ServerException_sendExceptionTwoRequest.
         *
         * \param data Pointer to the structure ServerException_sendExceptionTwoRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(ServerException_sendExceptionTwoRequest& data, /*in*/ char*& message, /*inout*/ char*& message2);
};


class ServerException_sendExceptionTwoReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure ServerException_sendExceptionTwoReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure ServerException_sendExceptionTwoReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure ServerException_sendExceptionTwoReply.
         *
         * \param instance Pointer to the structure ServerException_sendExceptionTwoReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(ServerException_sendExceptionTwoReply& instance, /*inout*/ char* message2, /*out*/ char* message3, /*out*/ char* sendExceptionTwo_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure ServerException_sendExceptionTwoReply.
         *
         * \param data Pointer to the structure ServerException_sendExceptionTwoReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(ServerException_sendExceptionTwoReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ char*& message2, /*out*/ char*& message3, /*out*/ char*& sendExceptionTwo_ret);
};


class ServerException_sendExceptionThreeRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure ServerException_sendExceptionThreeRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure ServerException_sendExceptionThreeRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure ServerException_sendExceptionThreeRequest.
         *
         * \param instance Pointer to the structure ServerException_sendExceptionThreeRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(ServerException_sendExceptionThreeRequest& instance, /*in*/ const Estructura& es, /*inout*/ const Estructura& es2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure ServerException_sendExceptionThreeRequest.
         *
         * \param data Pointer to the structure ServerException_sendExceptionThreeRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(ServerException_sendExceptionThreeRequest& data, /*in*/ Estructura& es, /*inout*/ Estructura& es2);
};


class ServerException_sendExceptionThreeReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure ServerException_sendExceptionThreeReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure ServerException_sendExceptionThreeReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure ServerException_sendExceptionThreeReply.
         *
         * \param instance Pointer to the structure ServerException_sendExceptionThreeReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(ServerException_sendExceptionThreeReply& instance, /*inout*/ const Estructura& es2, /*out*/ const Estructura& es3, /*out*/ const Estructura& sendExceptionThree_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure ServerException_sendExceptionThreeReply.
         *
         * \param data Pointer to the structure ServerException_sendExceptionThreeReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(ServerException_sendExceptionThreeReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*inout*/ Estructura& es2, /*out*/ Estructura& es3, /*out*/ Estructura& sendExceptionThree_ret);
};

 
#endif // _ServerException_REQUEST_REPLY_UTILS_H_
