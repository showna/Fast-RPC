
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

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getOctetRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getOctetRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getOctetRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getOctetRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getOctetRequest& instance, /*in*/ DDS_Octet oc1, /*inout*/ DDS_Octet oc2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getOctetRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getOctetRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getOctetRequest& data, /*in*/ DDS_Octet& oc1, /*inout*/ DDS_Octet& oc2);
};


class BasicTypeTest_getOctetReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getOctetReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getOctetReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getOctetReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getOctetReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getOctetReply& instance, /*inout*/ DDS_Octet oc2, /*out*/ DDS_Octet oc3, /*out*/ DDS_Octet getOctet_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getOctetReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getOctetReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getOctetReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Octet& oc2, /*out*/ DDS_Octet& oc3, /*out*/ DDS_Octet& getOctet_ret);
};


class BasicTypeTest_getCharRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getCharRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getCharRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getCharRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getCharRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getCharRequest& instance, /*in*/ DDS_Char ch1, /*inout*/ DDS_Char ch2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getCharRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getCharRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getCharRequest& data, /*in*/ DDS_Char& ch1, /*inout*/ DDS_Char& ch2);
};


class BasicTypeTest_getCharReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getCharReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getCharReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getCharReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getCharReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getCharReply& instance, /*inout*/ DDS_Char ch2, /*out*/ DDS_Char ch3, /*out*/ DDS_Char getChar_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getCharReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getCharReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getCharReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Char& ch2, /*out*/ DDS_Char& ch3, /*out*/ DDS_Char& getChar_ret);
};


class BasicTypeTest_getWCharRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getWCharRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getWCharRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getWCharRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getWCharRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getWCharRequest& instance, /*in*/ DDS_Wchar wch1, /*inout*/ DDS_Wchar wch2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getWCharRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getWCharRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getWCharRequest& data, /*in*/ DDS_Wchar& wch1, /*inout*/ DDS_Wchar& wch2);
};


class BasicTypeTest_getWCharReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getWCharReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getWCharReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getWCharReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getWCharReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getWCharReply& instance, /*inout*/ DDS_Wchar wch2, /*out*/ DDS_Wchar wch3, /*out*/ DDS_Wchar getWChar_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getWCharReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getWCharReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getWCharReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Wchar& wch2, /*out*/ DDS_Wchar& wch3, /*out*/ DDS_Wchar& getWChar_ret);
};


class BasicTypeTest_getShortRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getShortRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getShortRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getShortRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getShortRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getShortRequest& instance, /*in*/ DDS_Short sh1, /*inout*/ DDS_Short sh2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getShortRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getShortRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getShortRequest& data, /*in*/ DDS_Short& sh1, /*inout*/ DDS_Short& sh2);
};


class BasicTypeTest_getShortReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getShortReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getShortReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getShortReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getShortReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getShortReply& instance, /*inout*/ DDS_Short sh2, /*out*/ DDS_Short sh3, /*out*/ DDS_Short getShort_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getShortReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getShortReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getShortReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Short& sh2, /*out*/ DDS_Short& sh3, /*out*/ DDS_Short& getShort_ret);
};


class BasicTypeTest_getUShortRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getUShortRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getUShortRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getUShortRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getUShortRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getUShortRequest& instance, /*in*/ DDS_UnsignedShort ush1, /*inout*/ DDS_UnsignedShort ush2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getUShortRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getUShortRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getUShortRequest& data, /*in*/ DDS_UnsignedShort& ush1, /*inout*/ DDS_UnsignedShort& ush2);
};


class BasicTypeTest_getUShortReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getUShortReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getUShortReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getUShortReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getUShortReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getUShortReply& instance, /*inout*/ DDS_UnsignedShort ush2, /*out*/ DDS_UnsignedShort ush3, /*out*/ DDS_UnsignedShort getUShort_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getUShortReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getUShortReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getUShortReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_UnsignedShort& ush2, /*out*/ DDS_UnsignedShort& ush3, /*out*/ DDS_UnsignedShort& getUShort_ret);
};


class BasicTypeTest_getLongRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getLongRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getLongRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getLongRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getLongRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getLongRequest& instance, /*in*/ DDS_Long lo1, /*inout*/ DDS_Long lo2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getLongRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getLongRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getLongRequest& data, /*in*/ DDS_Long& lo1, /*inout*/ DDS_Long& lo2);
};


class BasicTypeTest_getLongReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getLongReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getLongReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getLongReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getLongReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getLongReply& instance, /*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getLongReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getLongReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3, /*out*/ DDS_Long& getLong_ret);
};


class BasicTypeTest_getULongRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getULongRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getULongRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getULongRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getULongRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getULongRequest& instance, /*in*/ DDS_UnsignedLong ulo1, /*inout*/ DDS_UnsignedLong ulo2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getULongRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getULongRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getULongRequest& data, /*in*/ DDS_UnsignedLong& ulo1, /*inout*/ DDS_UnsignedLong& ulo2);
};


class BasicTypeTest_getULongReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getULongReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getULongReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getULongReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getULongReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getULongReply& instance, /*inout*/ DDS_UnsignedLong ulo2, /*out*/ DDS_UnsignedLong ulo3, /*out*/ DDS_UnsignedLong getULong_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getULongReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getULongReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getULongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_UnsignedLong& ulo2, /*out*/ DDS_UnsignedLong& ulo3, /*out*/ DDS_UnsignedLong& getULong_ret);
};


class BasicTypeTest_getLLongRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getLLongRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getLLongRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getLLongRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getLLongRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getLLongRequest& instance, /*in*/ DDS_LongLong llo1, /*inout*/ DDS_LongLong llo2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getLLongRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getLLongRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getLLongRequest& data, /*in*/ DDS_LongLong& llo1, /*inout*/ DDS_LongLong& llo2);
};


class BasicTypeTest_getLLongReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getLLongReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getLLongReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getLLongReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getLLongReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getLLongReply& instance, /*inout*/ DDS_LongLong llo2, /*out*/ DDS_LongLong llo3, /*out*/ DDS_LongLong getLLong_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getLLongReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getLLongReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getLLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_LongLong& llo2, /*out*/ DDS_LongLong& llo3, /*out*/ DDS_LongLong& getLLong_ret);
};


class BasicTypeTest_getULLongRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getULLongRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getULLongRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getULLongRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getULLongRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getULLongRequest& instance, /*in*/ DDS_UnsignedLongLong ullo1, /*inout*/ DDS_UnsignedLongLong ullo2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getULLongRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getULLongRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getULLongRequest& data, /*in*/ DDS_UnsignedLongLong& ullo1, /*inout*/ DDS_UnsignedLongLong& ullo2);
};


class BasicTypeTest_getULLongReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getULLongReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getULLongReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getULLongReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getULLongReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getULLongReply& instance, /*inout*/ DDS_UnsignedLongLong ullo2, /*out*/ DDS_UnsignedLongLong ullo3, /*out*/ DDS_UnsignedLongLong getULLong_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getULLongReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getULLongReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getULLongReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_UnsignedLongLong& ullo2, /*out*/ DDS_UnsignedLongLong& ullo3, /*out*/ DDS_UnsignedLongLong& getULLong_ret);
};


class BasicTypeTest_getFloatRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getFloatRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getFloatRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getFloatRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getFloatRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getFloatRequest& instance, /*in*/ DDS_Float fl1, /*inout*/ DDS_Float fl2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getFloatRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getFloatRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getFloatRequest& data, /*in*/ DDS_Float& fl1, /*inout*/ DDS_Float& fl2);
};


class BasicTypeTest_getFloatReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getFloatReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getFloatReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getFloatReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getFloatReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getFloatReply& instance, /*inout*/ DDS_Float fl2, /*out*/ DDS_Float fl3, /*out*/ DDS_Float getFloat_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getFloatReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getFloatReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getFloatReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Float& fl2, /*out*/ DDS_Float& fl3, /*out*/ DDS_Float& getFloat_ret);
};


class BasicTypeTest_getDoubleRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getDoubleRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getDoubleRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getDoubleRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getDoubleRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getDoubleRequest& instance, /*in*/ DDS_Double do1, /*inout*/ DDS_Double do2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getDoubleRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getDoubleRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getDoubleRequest& data, /*in*/ DDS_Double& do1, /*inout*/ DDS_Double& do2);
};


class BasicTypeTest_getDoubleReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getDoubleReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getDoubleReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getDoubleReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getDoubleReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getDoubleReply& instance, /*inout*/ DDS_Double do2, /*out*/ DDS_Double do3, /*out*/ DDS_Double getDouble_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getDoubleReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getDoubleReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getDoubleReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Double& do2, /*out*/ DDS_Double& do3, /*out*/ DDS_Double& getDouble_ret);
};


class BasicTypeTest_getBooleanRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getBooleanRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getBooleanRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getBooleanRequest.
         *
         * \param instance Pointer to the structure BasicTypeTest_getBooleanRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getBooleanRequest& instance, /*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean bo2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getBooleanRequest.
         *
         * \param data Pointer to the structure BasicTypeTest_getBooleanRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(BasicTypeTest_getBooleanRequest& data, /*in*/ DDS_Boolean& bo1, /*inout*/ DDS_Boolean& bo2);
};


class BasicTypeTest_getBooleanReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure BasicTypeTest_getBooleanReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure BasicTypeTest_getBooleanReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure BasicTypeTest_getBooleanReply.
         *
         * \param instance Pointer to the structure BasicTypeTest_getBooleanReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(BasicTypeTest_getBooleanReply& instance, /*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure BasicTypeTest_getBooleanReply.
         *
         * \param data Pointer to the structure BasicTypeTest_getBooleanReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(BasicTypeTest_getBooleanReply& data, eProsima::DDSRPC::ReturnMessage& retcode, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3, /*out*/ DDS_Boolean& getBoolean_ret);
};

 
#endif // _BasicTypeTest_REQUEST_REPLY_UTILS_H_
