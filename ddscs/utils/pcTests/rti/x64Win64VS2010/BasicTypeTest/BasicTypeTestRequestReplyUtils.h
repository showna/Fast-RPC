
#ifndef _BasicTypeTest_REQUEST_REPLY_UTILS_H_
#define _BasicTypeTest_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "BasicTypeTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class BasicTypeTest_getOctetRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getOctetRequest& instance, /*in*/ DDS_Octet oc1, /*inout*/ DDS_Octet oc2);
        
        static void extractTypeData(BasicTypeTest_getOctetRequest& data, /*in*/ DDS_Octet& oc1, /*inout*/ DDS_Octet& oc2);
};


class BasicTypeTest_getOctetReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getOctetReply& instance, /*inout*/ DDS_Octet oc2, /*out*/ DDS_Octet oc3, /*out*/ DDS_Octet getOctet_ret);
        
        static void extractTypeData(BasicTypeTest_getOctetReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Octet& oc2, /*out*/ DDS_Octet& oc3, /*out*/ DDS_Octet& getOctet_ret);
};


class BasicTypeTest_getCharRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getCharRequest& instance, /*in*/ DDS_Char ch1, /*inout*/ DDS_Char ch2);
        
        static void extractTypeData(BasicTypeTest_getCharRequest& data, /*in*/ DDS_Char& ch1, /*inout*/ DDS_Char& ch2);
};


class BasicTypeTest_getCharReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getCharReply& instance, /*inout*/ DDS_Char ch2, /*out*/ DDS_Char ch3, /*out*/ DDS_Char getChar_ret);
        
        static void extractTypeData(BasicTypeTest_getCharReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Char& ch2, /*out*/ DDS_Char& ch3, /*out*/ DDS_Char& getChar_ret);
};


class BasicTypeTest_getWCharRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getWCharRequest& instance, /*in*/ DDS_Wchar wch1, /*inout*/ DDS_Wchar wch2);
        
        static void extractTypeData(BasicTypeTest_getWCharRequest& data, /*in*/ DDS_Wchar& wch1, /*inout*/ DDS_Wchar& wch2);
};


class BasicTypeTest_getWCharReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getWCharReply& instance, /*inout*/ DDS_Wchar wch2, /*out*/ DDS_Wchar wch3, /*out*/ DDS_Wchar getWChar_ret);
        
        static void extractTypeData(BasicTypeTest_getWCharReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Wchar& wch2, /*out*/ DDS_Wchar& wch3, /*out*/ DDS_Wchar& getWChar_ret);
};


class BasicTypeTest_getShortRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getShortRequest& instance, /*in*/ DDS_Short sh1, /*inout*/ DDS_Short sh2);
        
        static void extractTypeData(BasicTypeTest_getShortRequest& data, /*in*/ DDS_Short& sh1, /*inout*/ DDS_Short& sh2);
};


class BasicTypeTest_getShortReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getShortReply& instance, /*inout*/ DDS_Short sh2, /*out*/ DDS_Short sh3, /*out*/ DDS_Short getShort_ret);
        
        static void extractTypeData(BasicTypeTest_getShortReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Short& sh2, /*out*/ DDS_Short& sh3, /*out*/ DDS_Short& getShort_ret);
};


class BasicTypeTest_getUShortRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getUShortRequest& instance, /*in*/ DDS_UnsignedShort ush1, /*inout*/ DDS_UnsignedShort ush2);
        
        static void extractTypeData(BasicTypeTest_getUShortRequest& data, /*in*/ DDS_UnsignedShort& ush1, /*inout*/ DDS_UnsignedShort& ush2);
};


class BasicTypeTest_getUShortReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getUShortReply& instance, /*inout*/ DDS_UnsignedShort ush2, /*out*/ DDS_UnsignedShort ush3, /*out*/ DDS_UnsignedShort getUShort_ret);
        
        static void extractTypeData(BasicTypeTest_getUShortReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_UnsignedShort& ush2, /*out*/ DDS_UnsignedShort& ush3, /*out*/ DDS_UnsignedShort& getUShort_ret);
};


class BasicTypeTest_getLongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getLongRequest& instance, /*in*/ DDS_Long lo1, /*inout*/ DDS_Long lo2);
        
        static void extractTypeData(BasicTypeTest_getLongRequest& data, /*in*/ DDS_Long& lo1, /*inout*/ DDS_Long& lo2);
};


class BasicTypeTest_getLongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getLongReply& instance, /*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret);
        
        static void extractTypeData(BasicTypeTest_getLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3, /*out*/ DDS_Long& getLong_ret);
};


class BasicTypeTest_getULongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getULongRequest& instance, /*in*/ DDS_UnsignedLong ulo1, /*inout*/ DDS_UnsignedLong ulo2);
        
        static void extractTypeData(BasicTypeTest_getULongRequest& data, /*in*/ DDS_UnsignedLong& ulo1, /*inout*/ DDS_UnsignedLong& ulo2);
};


class BasicTypeTest_getULongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getULongReply& instance, /*inout*/ DDS_UnsignedLong ulo2, /*out*/ DDS_UnsignedLong ulo3, /*out*/ DDS_UnsignedLong getULong_ret);
        
        static void extractTypeData(BasicTypeTest_getULongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_UnsignedLong& ulo2, /*out*/ DDS_UnsignedLong& ulo3, /*out*/ DDS_UnsignedLong& getULong_ret);
};


class BasicTypeTest_getLLongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getLLongRequest& instance, /*in*/ DDS_LongLong llo1, /*inout*/ DDS_LongLong llo2);
        
        static void extractTypeData(BasicTypeTest_getLLongRequest& data, /*in*/ DDS_LongLong& llo1, /*inout*/ DDS_LongLong& llo2);
};


class BasicTypeTest_getLLongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getLLongReply& instance, /*inout*/ DDS_LongLong llo2, /*out*/ DDS_LongLong llo3, /*out*/ DDS_LongLong getLLong_ret);
        
        static void extractTypeData(BasicTypeTest_getLLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_LongLong& llo2, /*out*/ DDS_LongLong& llo3, /*out*/ DDS_LongLong& getLLong_ret);
};


class BasicTypeTest_getULLongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getULLongRequest& instance, /*in*/ DDS_UnsignedLongLong ullo1, /*inout*/ DDS_UnsignedLongLong ullo2);
        
        static void extractTypeData(BasicTypeTest_getULLongRequest& data, /*in*/ DDS_UnsignedLongLong& ullo1, /*inout*/ DDS_UnsignedLongLong& ullo2);
};


class BasicTypeTest_getULLongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getULLongReply& instance, /*inout*/ DDS_UnsignedLongLong ullo2, /*out*/ DDS_UnsignedLongLong ullo3, /*out*/ DDS_UnsignedLongLong getULLong_ret);
        
        static void extractTypeData(BasicTypeTest_getULLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_UnsignedLongLong& ullo2, /*out*/ DDS_UnsignedLongLong& ullo3, /*out*/ DDS_UnsignedLongLong& getULLong_ret);
};


class BasicTypeTest_getFloatRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getFloatRequest& instance, /*in*/ DDS_Float fl1, /*inout*/ DDS_Float fl2);
        
        static void extractTypeData(BasicTypeTest_getFloatRequest& data, /*in*/ DDS_Float& fl1, /*inout*/ DDS_Float& fl2);
};


class BasicTypeTest_getFloatReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getFloatReply& instance, /*inout*/ DDS_Float fl2, /*out*/ DDS_Float fl3, /*out*/ DDS_Float getFloat_ret);
        
        static void extractTypeData(BasicTypeTest_getFloatReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Float& fl2, /*out*/ DDS_Float& fl3, /*out*/ DDS_Float& getFloat_ret);
};


class BasicTypeTest_getDoubleRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getDoubleRequest& instance, /*in*/ DDS_Double do1, /*inout*/ DDS_Double do2);
        
        static void extractTypeData(BasicTypeTest_getDoubleRequest& data, /*in*/ DDS_Double& do1, /*inout*/ DDS_Double& do2);
};


class BasicTypeTest_getDoubleReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getDoubleReply& instance, /*inout*/ DDS_Double do2, /*out*/ DDS_Double do3, /*out*/ DDS_Double getDouble_ret);
        
        static void extractTypeData(BasicTypeTest_getDoubleReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Double& do2, /*out*/ DDS_Double& do3, /*out*/ DDS_Double& getDouble_ret);
};


class BasicTypeTest_getBooleanRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getBooleanRequest& instance, /*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean bo2);
        
        static void extractTypeData(BasicTypeTest_getBooleanRequest& data, /*in*/ DDS_Boolean& bo1, /*inout*/ DDS_Boolean& bo2);
};


class BasicTypeTest_getBooleanReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static void setTypeData(BasicTypeTest_getBooleanReply& instance, /*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret);
        
        static void extractTypeData(BasicTypeTest_getBooleanReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3, /*out*/ DDS_Boolean& getBoolean_ret);
};

 
#endif // _BasicTypeTest_REQUEST_REPLY_UTILS_H_
