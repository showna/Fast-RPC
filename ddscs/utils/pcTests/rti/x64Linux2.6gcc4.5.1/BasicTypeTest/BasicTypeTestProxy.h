#ifndef _BasicTypeTest_PROXY_H_
#define _BasicTypeTest_PROXY_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/Client.h"
#include "BasicTypeTestRequestReplyUtils.h"
#include "BasicTypeTestClientRPCSupport.h"
#include "exceptions/Exception.h"

/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getOctetCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getOctet(/*inout*/ DDS_Octet oc2, /*out*/ DDS_Octet oc3, /*out*/ DDS_Octet getOctet_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getCharCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getChar(/*inout*/ DDS_Char ch2, /*out*/ DDS_Char ch3, /*out*/ DDS_Char getChar_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getWCharCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getWChar(/*inout*/ DDS_Wchar wch2, /*out*/ DDS_Wchar wch3, /*out*/ DDS_Wchar getWChar_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getShortCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getShort(/*inout*/ DDS_Short sh2, /*out*/ DDS_Short sh3, /*out*/ DDS_Short getShort_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getUShortCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getUShort(/*inout*/ DDS_UnsignedShort ush2, /*out*/ DDS_UnsignedShort ush3, /*out*/ DDS_UnsignedShort getUShort_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getLongCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getLong(/*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getULongCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getULong(/*inout*/ DDS_UnsignedLong ulo2, /*out*/ DDS_UnsignedLong ulo3, /*out*/ DDS_UnsignedLong getULong_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getLLongCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getLLong(/*inout*/ DDS_LongLong llo2, /*out*/ DDS_LongLong llo3, /*out*/ DDS_LongLong getLLong_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getULLongCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getULLong(/*inout*/ DDS_UnsignedLongLong ullo2, /*out*/ DDS_UnsignedLongLong ullo3, /*out*/ DDS_UnsignedLongLong getULLong_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getFloatCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getFloat(/*inout*/ DDS_Float fl2, /*out*/ DDS_Float fl3, /*out*/ DDS_Float getFloat_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getDoubleCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getDouble(/*inout*/ DDS_Double do2, /*out*/ DDS_Double do3, /*out*/ DDS_Double getDouble_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that DDSRPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class BasicTypeTest_getBooleanCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getBoolean(/*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::DDSRPC::Exception &ex) = 0;
};

/**
 * \brief This class implements a specific server's proxy for the defined interface BasicTypeTest.
 */
class BasicTypeTestProxy : public eProsima::DDSRPC::Client
{
    public:
    
        /**
         * \brief Default constructor. The server's proxy will use the default eProsima::DDSRPC::UDPTransport.
         *
         * \param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::DDSRPC::ServerTimeoutException is thrown.
         * \exception eProsima::DDSRPC::InitializeException This exception is thrown when the initialization was wrong.
         */
        BasicTypeTestProxy(std::string remoteServiceName, int domainId = 0, long timeout = 10000);

        /**
         * \brief This constructor sets the transport that will be used by the server's proxy.
         *
         * \param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
         * \param transport The network transport that server's proxy has to use.
         *        This transport's object is not deleted by this class in its destrcutor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::DDSRPC::ServerTimeoutException is thrown.
         * \exception eProsima::DDSRPC::InitializeException This exception is thrown when the initialization was wrong.
         */
        BasicTypeTestProxy(std::string remoteServiceName, eProsima::DDSRPC::Transport *transport, int domainId = 0, long timeout = 10000);

        /// \brief The default destructor.
        virtual ~BasicTypeTestProxy();
        
         
        DDS_Octet getOctet(/*in*/ DDS_Octet oc1, /*inout*/ DDS_Octet& oc2, /*out*/ DDS_Octet& oc3);
         
        DDS_Char getChar(/*in*/ DDS_Char ch1, /*inout*/ DDS_Char& ch2, /*out*/ DDS_Char& ch3);
         
        DDS_Wchar getWChar(/*in*/ DDS_Wchar wch1, /*inout*/ DDS_Wchar& wch2, /*out*/ DDS_Wchar& wch3);
         
        DDS_Short getShort(/*in*/ DDS_Short sh1, /*inout*/ DDS_Short& sh2, /*out*/ DDS_Short& sh3);
         
        DDS_UnsignedShort getUShort(/*in*/ DDS_UnsignedShort ush1, /*inout*/ DDS_UnsignedShort& ush2, /*out*/ DDS_UnsignedShort& ush3);
         
        DDS_Long getLong(/*in*/ DDS_Long lo1, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3);
         
        DDS_UnsignedLong getULong(/*in*/ DDS_UnsignedLong ulo1, /*inout*/ DDS_UnsignedLong& ulo2, /*out*/ DDS_UnsignedLong& ulo3);
         
        DDS_LongLong getLLong(/*in*/ DDS_LongLong llo1, /*inout*/ DDS_LongLong& llo2, /*out*/ DDS_LongLong& llo3);
         
        DDS_UnsignedLongLong getULLong(/*in*/ DDS_UnsignedLongLong ullo1, /*inout*/ DDS_UnsignedLongLong& ullo2, /*out*/ DDS_UnsignedLongLong& ullo3);
         
        DDS_Float getFloat(/*in*/ DDS_Float fl1, /*inout*/ DDS_Float& fl2, /*out*/ DDS_Float& fl3);
         
        DDS_Double getDouble(/*in*/ DDS_Double do1, /*inout*/ DDS_Double& do2, /*out*/ DDS_Double& do3);
         
        DDS_Boolean getBoolean(/*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3);
        
         
        void getOctet_async(BasicTypeTest_getOctetCallbackHandler &obj, /*in*/ DDS_Octet oc1, /*inout*/ DDS_Octet oc2);
         
        void getChar_async(BasicTypeTest_getCharCallbackHandler &obj, /*in*/ DDS_Char ch1, /*inout*/ DDS_Char ch2);
         
        void getWChar_async(BasicTypeTest_getWCharCallbackHandler &obj, /*in*/ DDS_Wchar wch1, /*inout*/ DDS_Wchar wch2);
         
        void getShort_async(BasicTypeTest_getShortCallbackHandler &obj, /*in*/ DDS_Short sh1, /*inout*/ DDS_Short sh2);
         
        void getUShort_async(BasicTypeTest_getUShortCallbackHandler &obj, /*in*/ DDS_UnsignedShort ush1, /*inout*/ DDS_UnsignedShort ush2);
         
        void getLong_async(BasicTypeTest_getLongCallbackHandler &obj, /*in*/ DDS_Long lo1, /*inout*/ DDS_Long lo2);
         
        void getULong_async(BasicTypeTest_getULongCallbackHandler &obj, /*in*/ DDS_UnsignedLong ulo1, /*inout*/ DDS_UnsignedLong ulo2);
         
        void getLLong_async(BasicTypeTest_getLLongCallbackHandler &obj, /*in*/ DDS_LongLong llo1, /*inout*/ DDS_LongLong llo2);
         
        void getULLong_async(BasicTypeTest_getULLongCallbackHandler &obj, /*in*/ DDS_UnsignedLongLong ullo1, /*inout*/ DDS_UnsignedLongLong ullo2);
         
        void getFloat_async(BasicTypeTest_getFloatCallbackHandler &obj, /*in*/ DDS_Float fl1, /*inout*/ DDS_Float fl2);
         
        void getDouble_async(BasicTypeTest_getDoubleCallbackHandler &obj, /*in*/ DDS_Double do1, /*inout*/ DDS_Double do2);
         
        void getBoolean_async(BasicTypeTest_getBooleanCallbackHandler &obj, /*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean bo2);
        
    private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        eProsima::DDSRPC::ClientRPC *getOctet_Service;
        eProsima::DDSRPC::ClientRPC *getChar_Service;
        eProsima::DDSRPC::ClientRPC *getWChar_Service;
        eProsima::DDSRPC::ClientRPC *getShort_Service;
        eProsima::DDSRPC::ClientRPC *getUShort_Service;
        eProsima::DDSRPC::ClientRPC *getLong_Service;
        eProsima::DDSRPC::ClientRPC *getULong_Service;
        eProsima::DDSRPC::ClientRPC *getLLong_Service;
        eProsima::DDSRPC::ClientRPC *getULLong_Service;
        eProsima::DDSRPC::ClientRPC *getFloat_Service;
        eProsima::DDSRPC::ClientRPC *getDouble_Service;
        eProsima::DDSRPC::ClientRPC *getBoolean_Service; 
};

#endif // _BasicTypeTest_PROXY_H_