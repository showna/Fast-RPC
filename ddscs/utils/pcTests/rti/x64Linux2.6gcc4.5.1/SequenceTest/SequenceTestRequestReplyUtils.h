
#ifndef _SequenceTest_REQUEST_REPLY_UTILS_H_
#define _SequenceTest_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "SequenceTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class getSLongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(getSLongRequest& instance, /*in*/ const largo& l1, /*inout*/ const largo& l2);
        
        static void extractTypeData(getSLongRequest& data, /*in*/ largo& l1, /*inout*/ largo& l2);
};


class getSLongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(getSLongReply& instance, /*inout*/ const largo& l2, /*out*/ const largo& l3, /*out*/ const largo& getSLong_ret);
        
        static void extractTypeData(getSLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ largo& l2, /*out*/ largo& l3, /*out*/ largo& getSLong_ret);
};


class getStringRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(getStringRequest& instance, /*in*/ const cadena& s1, /*inout*/ const cadena& s2);
        
        static void extractTypeData(getStringRequest& data, /*in*/ cadena& s1, /*inout*/ cadena& s2);
};


class getStringReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(getStringReply& instance, /*inout*/ const cadena& s2, /*out*/ const cadena& s3, /*out*/ const cadena& getString_ret);
        
        static void extractTypeData(getStringReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ cadena& s2, /*out*/ cadena& s3, /*out*/ cadena& getString_ret);
};


class getStringBoundedRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(getStringBoundedRequest& instance, /*in*/ const dattos& sb1, /*inout*/ const dattos& sb2);
        
        static void extractTypeData(getStringBoundedRequest& data, /*in*/ dattos& sb1, /*inout*/ dattos& sb2);
};


class getStringBoundedReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(getStringBoundedReply& instance, /*inout*/ const dattos& sb2, /*out*/ const dattos& sb3, /*out*/ const dattos& getStringBounded_ret);
        
        static void extractTypeData(getStringBoundedReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ dattos& sb2, /*out*/ dattos& sb3, /*out*/ dattos& getStringBounded_ret);
};

 
#endif // _SequenceTest_REQUEST_REPLY_UTILS_H_
