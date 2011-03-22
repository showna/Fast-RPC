
#ifndef _RateGen_REQUEST_REPLY_UTILS_H_
#define _RateGen_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "dds_cpp/dds_cpp_domain.h"
#include "RateGenRequestReplySupport.h"


class subscribe_PulseRequestUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);
         
        static subscribe_PulseRequest* createTypeData(tickConsumer & c, DDS_Long i, DDS_Long kk);
        
        static void extractTypeData(subscribe_PulseRequest* data, tickConsumer  &c, DDS_Long &i, DDS_Long &kk);
};


class subscribe_PulseReplyUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);
         
        static subscribe_PulseReply* createTypeData(DDS_Long kk, DDS_Octet ret1, Cookie& returnedValue);
        
        static void extractTypeData(subscribe_PulseReply* data, DDS_Long &kk, DDS_Octet &ret1, Cookie& returnedValue);
};


class unsubscribe_PulseRequestUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);
         
        static unsubscribe_PulseRequest* createTypeData(Cookie & ck);
        
        static void extractTypeData(unsubscribe_PulseRequest* data, Cookie  &ck);
};


class unsubscribe_PulseReplyUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);
         
        static unsubscribe_PulseReply* createTypeData(tickConsumer& returnedValue);
        
        static void extractTypeData(unsubscribe_PulseReply* data, tickConsumer& returnedValue);
};


class noReturnFunctionRequestUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);
         
        static noReturnFunctionRequest* createTypeData(DDS_Long id);
        
        static void extractTypeData(noReturnFunctionRequest* data, DDS_Long &id);
};


class noReturnFunctionReplyUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);
         
        static noReturnFunctionReply* createTypeData(DDS_Octet ret2);
        
        static void extractTypeData(noReturnFunctionReply* data, DDS_Octet &ret2);
};

 
#endif // _RateGen_REQUEST_REPLY_UTILS_H_
