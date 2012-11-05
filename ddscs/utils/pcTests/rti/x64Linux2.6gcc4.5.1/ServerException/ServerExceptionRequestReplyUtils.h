
#ifndef _ServerException_REQUEST_REPLY_UTILS_H_
#define _ServerException_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "ServerExceptionRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class sendExceptionRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(sendExceptionRequest& instance);
        
        static void extractTypeData(sendExceptionRequest& data);
};


class sendExceptionReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(sendExceptionReply& instance);
        
        static void extractTypeData(sendExceptionReply& data, eProsima::DDSRPC::ReturnMessage& retcode);
};


class sendExceptionTwoRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(sendExceptionTwoRequest& instance, /*in*/ char* message, /*inout*/ char* message2);
        
        static void extractTypeData(sendExceptionTwoRequest& data, /*in*/ char*& message, /*inout*/ char*& message2);
};


class sendExceptionTwoReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(sendExceptionTwoReply& instance, /*inout*/ char* message2, /*out*/ char* message3, /*out*/ char* sendExceptionTwo_ret);
        
        static void extractTypeData(sendExceptionTwoReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ char*& message2, /*out*/ char*& message3, /*out*/ char*& sendExceptionTwo_ret);
};


class sendExceptionThreeRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(sendExceptionThreeRequest& instance, /*in*/ const Estructura& es, /*inout*/ const Estructura& es2);
        
        static void extractTypeData(sendExceptionThreeRequest& data, /*in*/ Estructura& es, /*inout*/ Estructura& es2);
};


class sendExceptionThreeReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(sendExceptionThreeReply& instance, /*inout*/ const Estructura& es2, /*out*/ const Estructura& es3, /*out*/ const Estructura& sendExceptionThree_ret);
        
        static void extractTypeData(sendExceptionThreeReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ Estructura& es2, /*out*/ Estructura& es3, /*out*/ Estructura& sendExceptionThree_ret);
};

 
#endif // _ServerException_REQUEST_REPLY_UTILS_H_
