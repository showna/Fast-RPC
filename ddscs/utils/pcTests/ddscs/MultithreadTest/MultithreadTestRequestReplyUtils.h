
#ifndef _MultithreadTest_REQUEST_REPLY_UTILS_H_
#define _MultithreadTest_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "dds_cpp/dds_cpp_domain.h"
#include "MultithreadTestRequestReplySupport.h"


class testRequestUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);
         
        static testRequest* createTypeData(Dato & dato1);
        
        static void extractTypeData(testRequest* data, Dato  &dato1);
};


class testReplyUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);
         
        static testReply* createTypeData(Dato & dato2, DDS_Long& returnedValue);
        
        static void extractTypeData(testReply* data, Dato  &dato2, DDS_Long& returnedValue);
};

 
#endif // _MultithreadTest_REQUEST_REPLY_UTILS_H_
