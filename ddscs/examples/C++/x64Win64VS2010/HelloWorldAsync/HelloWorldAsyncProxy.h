#ifndef _HelloWorldAsync_PROXY_H_
#define _HelloWorldAsync_PROXY_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/Client.h"
#include "HelloWorldAsyncRequestReplyUtils.h"
#include "HelloWorldAsyncClientRPCSupport.h"

typedef void (*sumaCallback)( DDS_Long suma_ret);

class HelloWorldAsyncProxy : public eProsima::DDSRPC::Client
{
    public:

        /// \brief The default constructor.
        HelloWorldAsyncProxy(int domainId = 0, unsigned int timeout = 3000,
        const char *qosLibrary =  NULL, const char *qosProfile = NULL);

        /// \brief The default destructor.
        virtual ~HelloWorldAsyncProxy();

        unsigned int getTimeout();
        void setTimeout(unsigned int millis);
        
         
        eProsima::DDSRPC::ReturnMessage
         suma(DDS_Long id1, DDS_Long id2 ,DDS_Long &suma_ret);
        
         
        eProsima::DDSRPC::ReturnMessage
         suma_async(sumaCallback sumacallback, DDS_Long id1, DDS_Long id2 );
        
    private:
        eProsima::DDSRPC::ClientRPC *suma_Service; 
        
        unsigned int m_timeout;
};

#endif // _HelloWorldAsync_PROXY_H_