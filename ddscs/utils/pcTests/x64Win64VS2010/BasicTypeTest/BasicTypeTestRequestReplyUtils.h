
#ifndef _BasicTypeTest_REQUEST_REPLY_UTILS_H_
#define _BasicTypeTest_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "BasicTypeTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class getOctetRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getOctetRequest* createTypeData(DDS_Octet oc1, DDS_Octet oc2);
        
        static void extractTypeData(getOctetRequest* data, DDS_Octet &oc1, DDS_Octet &oc2);
};


class getOctetReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getOctetReply* createTypeData(DDS_Octet oc2, DDS_Octet oc3, DDS_Octet& returnedValue);
        
        static void extractTypeData(getOctetReply* data, DDS_Octet &oc2, DDS_Octet &oc3, DDS_Octet& returnedValue);
};


class getCharRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getCharRequest* createTypeData(DDS_Char ch1, DDS_Char ch2);
        
        static void extractTypeData(getCharRequest* data, DDS_Char &ch1, DDS_Char &ch2);
};


class getCharReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getCharReply* createTypeData(DDS_Char ch2, DDS_Char ch3, DDS_Char& returnedValue);
        
        static void extractTypeData(getCharReply* data, DDS_Char &ch2, DDS_Char &ch3, DDS_Char& returnedValue);
};


class getWCharRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getWCharRequest* createTypeData(DDS_Wchar wch1, DDS_Wchar wch2);
        
        static void extractTypeData(getWCharRequest* data, DDS_Wchar &wch1, DDS_Wchar &wch2);
};


class getWCharReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getWCharReply* createTypeData(DDS_Wchar wch2, DDS_Wchar wch3, DDS_Wchar& returnedValue);
        
        static void extractTypeData(getWCharReply* data, DDS_Wchar &wch2, DDS_Wchar &wch3, DDS_Wchar& returnedValue);
};


class getShortRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getShortRequest* createTypeData(DDS_Short sh1, DDS_Short sh2);
        
        static void extractTypeData(getShortRequest* data, DDS_Short &sh1, DDS_Short &sh2);
};


class getShortReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getShortReply* createTypeData(DDS_Short sh2, DDS_Short sh3, DDS_Short& returnedValue);
        
        static void extractTypeData(getShortReply* data, DDS_Short &sh2, DDS_Short &sh3, DDS_Short& returnedValue);
};


class getUShortRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getUShortRequest* createTypeData(DDS_UnsignedShort ush1, DDS_UnsignedShort ush2);
        
        static void extractTypeData(getUShortRequest* data, DDS_UnsignedShort &ush1, DDS_UnsignedShort &ush2);
};


class getUShortReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getUShortReply* createTypeData(DDS_UnsignedShort ush2, DDS_UnsignedShort ush3, DDS_UnsignedShort& returnedValue);
        
        static void extractTypeData(getUShortReply* data, DDS_UnsignedShort &ush2, DDS_UnsignedShort &ush3, DDS_UnsignedShort& returnedValue);
};


class getLongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getLongRequest* createTypeData(DDS_Long lo1, DDS_Long lo2);
        
        static void extractTypeData(getLongRequest* data, DDS_Long &lo1, DDS_Long &lo2);
};


class getLongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getLongReply* createTypeData(DDS_Long lo2, DDS_Long lo3, DDS_Long& returnedValue);
        
        static void extractTypeData(getLongReply* data, DDS_Long &lo2, DDS_Long &lo3, DDS_Long& returnedValue);
};


class getULongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getULongRequest* createTypeData(DDS_UnsignedLong ulo1, DDS_UnsignedLong ulo2);
        
        static void extractTypeData(getULongRequest* data, DDS_UnsignedLong &ulo1, DDS_UnsignedLong &ulo2);
};


class getULongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getULongReply* createTypeData(DDS_UnsignedLong ulo2, DDS_UnsignedLong ulo3, DDS_UnsignedLong& returnedValue);
        
        static void extractTypeData(getULongReply* data, DDS_UnsignedLong &ulo2, DDS_UnsignedLong &ulo3, DDS_UnsignedLong& returnedValue);
};


class getLLongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getLLongRequest* createTypeData(DDS_LongLong llo1, DDS_LongLong llo2);
        
        static void extractTypeData(getLLongRequest* data, DDS_LongLong &llo1, DDS_LongLong &llo2);
};


class getLLongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getLLongReply* createTypeData(DDS_LongLong llo2, DDS_LongLong llo3, DDS_LongLong& returnedValue);
        
        static void extractTypeData(getLLongReply* data, DDS_LongLong &llo2, DDS_LongLong &llo3, DDS_LongLong& returnedValue);
};


class getULLongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getULLongRequest* createTypeData(DDS_UnsignedLongLong ullo1, DDS_UnsignedLongLong ullo2);
        
        static void extractTypeData(getULLongRequest* data, DDS_UnsignedLongLong &ullo1, DDS_UnsignedLongLong &ullo2);
};


class getULLongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getULLongReply* createTypeData(DDS_UnsignedLongLong ullo2, DDS_UnsignedLongLong ullo3, DDS_UnsignedLongLong& returnedValue);
        
        static void extractTypeData(getULLongReply* data, DDS_UnsignedLongLong &ullo2, DDS_UnsignedLongLong &ullo3, DDS_UnsignedLongLong& returnedValue);
};


class getFloatRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getFloatRequest* createTypeData(DDS_Float fl1, DDS_Float fl2);
        
        static void extractTypeData(getFloatRequest* data, DDS_Float &fl1, DDS_Float &fl2);
};


class getFloatReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getFloatReply* createTypeData(DDS_Float fl2, DDS_Float fl3, DDS_Float& returnedValue);
        
        static void extractTypeData(getFloatReply* data, DDS_Float &fl2, DDS_Float &fl3, DDS_Float& returnedValue);
};


class getDoubleRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getDoubleRequest* createTypeData(DDS_Double do1, DDS_Double do2);
        
        static void extractTypeData(getDoubleRequest* data, DDS_Double &do1, DDS_Double &do2);
};


class getDoubleReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getDoubleReply* createTypeData(DDS_Double do2, DDS_Double do3, DDS_Double& returnedValue);
        
        static void extractTypeData(getDoubleReply* data, DDS_Double &do2, DDS_Double &do3, DDS_Double& returnedValue);
};


class getBooleanRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getBooleanRequest* createTypeData(DDS_Boolean bo1, DDS_Boolean bo2);
        
        static void extractTypeData(getBooleanRequest* data, DDS_Boolean &bo1, DDS_Boolean &bo2);
};


class getBooleanReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getBooleanReply* createTypeData(DDS_Boolean bo2, DDS_Boolean bo3, DDS_Boolean& returnedValue);
        
        static void extractTypeData(getBooleanReply* data, DDS_Boolean &bo2, DDS_Boolean &bo3, DDS_Boolean& returnedValue);
};

 
#endif // _BasicTypeTest_REQUEST_REPLY_UTILS_H_
