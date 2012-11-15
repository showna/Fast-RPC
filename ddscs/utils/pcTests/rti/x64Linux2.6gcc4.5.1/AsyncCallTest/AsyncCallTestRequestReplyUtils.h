
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

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(AsyncCallTest_getLongRequest& instance, /*in*/ DDS_Long lo1, /*inout*/ DDS_Long lo2);
        
        static void extractTypeData(AsyncCallTest_getLongRequest& data, /*in*/ DDS_Long& lo1, /*inout*/ DDS_Long& lo2);
};


class AsyncCallTest_getLongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(AsyncCallTest_getLongReply& instance, /*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret);
        
        static void extractTypeData(AsyncCallTest_getLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3, /*out*/ DDS_Long& getLong_ret);
};


class AsyncCallTest_getBooleanRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(AsyncCallTest_getBooleanRequest& instance, /*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean bo2);
        
        static void extractTypeData(AsyncCallTest_getBooleanRequest& data, /*in*/ DDS_Boolean& bo1, /*inout*/ DDS_Boolean& bo2);
};


class AsyncCallTest_getBooleanReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(AsyncCallTest_getBooleanReply& instance, /*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret);
        
        static void extractTypeData(AsyncCallTest_getBooleanReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3, /*out*/ DDS_Boolean& getBoolean_ret);
};


class AsyncCallTest_getStringRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(AsyncCallTest_getStringRequest& instance, /*in*/ char* s1, /*inout*/ char* s2);
        
        static void extractTypeData(AsyncCallTest_getStringRequest& data, /*in*/ char*& s1, /*inout*/ char*& s2);
};


class AsyncCallTest_getStringReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(AsyncCallTest_getStringReply& instance, /*inout*/ char* s2, /*out*/ char* s3, /*out*/ char* getString_ret);
        
        static void extractTypeData(AsyncCallTest_getStringReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ char*& s2, /*out*/ char*& s3, /*out*/ char*& getString_ret);
};


class AsyncCallTest_duplicateRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(AsyncCallTest_duplicateRequest& instance, /*in*/ const Structure& ev);
        
        static void extractTypeData(AsyncCallTest_duplicateRequest& data, /*in*/ Structure& ev);
};


class AsyncCallTest_duplicateReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(AsyncCallTest_duplicateReply& instance, /*out*/ const Structure& duplicate_ret);
        
        static void extractTypeData(AsyncCallTest_duplicateReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*out*/ Structure& duplicate_ret);
};

 
#endif // _AsyncCallTest_REQUEST_REPLY_UTILS_H_
