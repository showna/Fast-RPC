/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "HelloWorldAsyncProxy.h"
#include "client/ClientRPC.h"
#include "HelloWorldAsyncRequestReplyPlugin.h"
#include "HelloWorldAsyncAsyncSupport.h"


HelloWorldAsyncProxy::HelloWorldAsyncProxy(int domainId, unsigned int timeout
, const char *qosLibrary, const char *qosProfile) : Client(domainId, qosLibrary, qosProfile)
{
    m_timeout = timeout;
    this->suma_Service = new sumaClientRPC("suma",
                                  sumaRequestUtils::registerType(getParticipant()),
    NULL,
    NULL,
                                  sumaReplyUtils::registerType(getParticipant()),
    NULL,
    NULL,
                                  this);

}

HelloWorldAsyncProxy::~HelloWorldAsyncProxy()
{
    delete suma_Service;
}

unsigned int HelloWorldAsyncProxy::getTimeout()
{
  return m_timeout;
}
 
 void HelloWorldAsyncProxy::setTimeout(unsigned int millis)
 {
    m_timeout = millis;
 }

 
eProsima::DDSRPC::ReturnMessage
 HelloWorldAsyncProxy::suma(DDS_Long id1, DDS_Long id2 ,DDS_Long &suma_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue ;    
    sumaRequest *instance = NULL;
    sumaReply *retInstance = sumaReplyTypeSupport::create_data();
    instance = sumaRequestUtils::createTypeData(id1    , id2    );
    returnedValue = suma_Service->execute(instance, retInstance, m_timeout);
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::RECEIVED_OTHER_REQUEST:
            printf("Y ESTE PAQUETE?\n");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            printf("TIMEOUT\n");
            break;
        case eProsima::DDSRPC::SERVER_ERROR:
            printf("SERVER ERROR\n");
            break;
        case eProsima::DDSRPC::WITHOUT_RESOURCES:
            printf("SERVER WITHOUT RESOURCES\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:
            sumaReplyUtils::extractTypeData(retInstance, suma_ret    );
            //sumaReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    sumaReplyTypeSupport::delete_data(retInstance);
    sumaRequestTypeSupport::delete_data(instance);

    return returnedValue;
}

 
eProsima::DDSRPC::ReturnMessage
 HelloWorldAsyncProxy::suma_async(sumaCallback sumacallback, DDS_Long id1, DDS_Long id2 ) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue ;    
    sumaRequest *instance = NULL;
    sumaTask *task = NULL;
    instance = sumaRequestUtils::createTypeData(id1    , id2    );
    task = new sumaTask(sumacallback, this, suma_Service);
    returnedValue = suma_Service->executeAsync(instance, task, m_timeout);
    switch (returnedValue)
    {
        case eProsima::DDSRPC::CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case eProsima::DDSRPC::OPERATION_SUCCESSFUL:       
            break;
    };
    
    sumaRequestTypeSupport::delete_data(instance);

    return returnedValue;
}