#ifndef _EnumYStringTest_PROXY_H_
#define _EnumYStringTest_PROXY_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/Client.h"
#include "EnumYStringTestRequestReplyUtils.h"
#include "EnumYStringTestClientRPCSupport.h"

class EnumYStringTest_getEnum
{
    public:
        virtual void getEnum(/*inout*/ Valores v2, /*out*/ Valores v3, /*out*/ Valores getEnum_ret)
        {
        }
   
        virtual void error(eProsima::DDSRPC::ReturnMessage message)
        {
        }
};
class EnumYStringTest_getString
{
    public:
        virtual void getString(/*inout*/ char* s2, /*out*/ char* s3, /*out*/ char* getString_ret)
        {
        }
   
        virtual void error(eProsima::DDSRPC::ReturnMessage message)
        {
        }
};
class EnumYStringTest_getStringBounded
{
    public:
        virtual void getStringBounded(/*inout*/ char* sb2, /*out*/ char* sb3, /*out*/ char* getStringBounded_ret)
        {
        }
   
        virtual void error(eProsima::DDSRPC::ReturnMessage message)
        {
        }
};

/**
 * \brief This class implements a specific server's proxy for the defined interface by user.
 */
class EnumYStringTestProxy : public eProsima::DDSRPC::Client
{
    public:
    
        /**
         * \brief Default constructor. The server's proxy will use the default eProsima::DDSRPC::UDPTransport.
         *
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::DDSRPC::ServerTimeoutException is thrown.
         */
        EnumYStringTestProxy(int domainId = 0, long timeout = 10000);

        /**
         * \brief This constructor sets the transport that will be used by the server's proxy.
         *
         * \param transport The network transport that server's proxy has to use.
         *        This transport's object is not deleted by this class in its destrcutor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::DDSRPC::ServerTimeoutException is thrown.
         */
        EnumYStringTestProxy(eProsima::DDSRPC::Transport *transport, int domainId = 0, long timeout = 10000);

        /// \brief The default destructor.
        virtual ~EnumYStringTestProxy();
        
         
        Valores getEnum(/*in*/ Valores v1, /*inout*/ Valores& v2, /*out*/ Valores& v3);
         
        char* getString(/*in*/ char* s1, /*inout*/ char*& s2, /*out*/ char*& s3);
         
        char* getStringBounded(/*in*/ char* sb1, /*inout*/ char*& sb2, /*out*/ char*& sb3);
        
         
        void getEnum_async(EnumYStringTest_getEnum &obj, /*in*/ Valores v1, /*inout*/ Valores v2);
         
        void getString_async(EnumYStringTest_getString &obj, /*in*/ char* s1, /*inout*/ char* s2);
         
        void getStringBounded_async(EnumYStringTest_getStringBounded &obj, /*in*/ char* sb1, /*inout*/ char* sb2);
        
    private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        eProsima::DDSRPC::ClientRPC *getEnum_Service;
        eProsima::DDSRPC::ClientRPC *getString_Service;
        eProsima::DDSRPC::ClientRPC *getStringBounded_Service; 
};

#endif // _EnumYStringTest_PROXY_H_