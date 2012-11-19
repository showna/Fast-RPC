#ifndef _EnumYStringTest_PROXY_H_
#define _EnumYStringTest_PROXY_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/Client.h"
#include "EnumYStringTestRequestReplyUtils.h"
#include "EnumYStringTestClientRPCSupport.h"
#include "exceptions/Exception.h"

/**
 * \brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class EnumYStringTest_getEnumCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getEnum(/*inout*/ Valores v2, /*out*/ Valores v3, /*out*/ Valores getEnum_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::RPCDDS::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class EnumYStringTest_getStringCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getString(/*inout*/ char* s2, /*out*/ char* s3, /*out*/ char* getString_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::RPCDDS::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class EnumYStringTest_getStringBoundedCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getStringBounded(/*inout*/ char* sb2, /*out*/ char* sb3, /*out*/ char* getStringBounded_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::RPCDDS::Exception &ex) = 0;
};

/**
 * \brief This class implements a specific server's proxy for the defined interface EnumYStringTest.
 */
class EnumYStringTestProxy : public eProsima::RPCDDS::Client
{
    public:
    
        /**
         * \brief Default constructor. The server's proxy will use the default eProsima::RPCDDS::UDPTransport.
         *
         * \param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::RPCDDS::ServerTimeoutException is thrown.
         * \exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
         */
        EnumYStringTestProxy(std::string remoteServiceName, int domainId = 0, long timeout = 10000);

        /**
         * \brief This constructor sets the transport that will be used by the server's proxy.
         *
         * \param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
         * \param transport The network transport that server's proxy has to use.
         *        This transport's object is not deleted by this class in its destrcutor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::RPCDDS::ServerTimeoutException is thrown.
         * \exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
         */
        EnumYStringTestProxy(std::string remoteServiceName, eProsima::RPCDDS::Transport *transport, int domainId = 0, long timeout = 10000);

        /// \brief The default destructor.
        virtual ~EnumYStringTestProxy();
        
         
        Valores getEnum(/*in*/ Valores v1, /*inout*/ Valores& v2, /*out*/ Valores& v3);
         
        char* getString(/*in*/ char* s1, /*inout*/ char*& s2, /*out*/ char*& s3);
         
        char* getStringBounded(/*in*/ char* sb1, /*inout*/ char*& sb2, /*out*/ char*& sb3);
        
         
        void getEnum_async(EnumYStringTest_getEnumCallbackHandler &obj, /*in*/ Valores v1, /*inout*/ Valores v2);
         
        void getString_async(EnumYStringTest_getStringCallbackHandler &obj, /*in*/ char* s1, /*inout*/ char* s2);
         
        void getStringBounded_async(EnumYStringTest_getStringBoundedCallbackHandler &obj, /*in*/ char* sb1, /*inout*/ char* sb2);
        
    private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        eProsima::RPCDDS::ClientRPC *getEnum_Service;
        eProsima::RPCDDS::ClientRPC *getString_Service;
        eProsima::RPCDDS::ClientRPC *getStringBounded_Service; 
};

#endif // _EnumYStringTest_PROXY_H_