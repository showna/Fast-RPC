/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "UnionTestProxy.h"
#include "client/ClientRPC.h"
#include "UnionTestRequestReplyPlugin.h"


UnionTestProxy::UnionTestProxy(int domainId, unsigned int timeout
, const char *qosLibrary, const char *qosProfile) : Client(domainId, qosLibrary, qosProfile)
{
    m_timeout = timeout;
    this->getEmpleado_Service = new getEmpleadoClientRPC("getEmpleado",
                                  getEmpleadoRequestUtils::registerType(getParticipant()),
    "UnionTest_Library",
    "UnionTest_Profile",
                                  getEmpleadoReplyUtils::registerType(getParticipant()),
    "UnionTest_Library",
    "UnionTest_Profile",
                                  getParticipant());

}

UnionTestProxy::~UnionTestProxy()
{
    delete getEmpleado_Service;
}

unsigned int UnionTestProxy::getTimeout()
{
  return m_timeout;
}
 
 void UnionTestProxy::setTimeout(unsigned int millis)
 {
    m_timeout = millis;
 }

 
eProsima::DDSRPC::ReturnMessage
 UnionTestProxy::getEmpleado(Empleado* em1 ,Empleado* &em2,Empleado* &em3, Empleado* &getEmpleado_ret) 
{
    eProsima::DDSRPC::ReturnMessage  returnedValue ;    
    getEmpleadoRequest *instance = NULL;
    getEmpleadoReply *retInstance = getEmpleadoReplyTypeSupport::create_data();
    instance = getEmpleadoRequestUtils::createTypeData(em1    ,em2    );
    returnedValue = getEmpleado_Service->execute(instance, retInstance, m_timeout);
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
            getEmpleadoReplyUtils::extractTypeData(retInstance, em2    ,em3    , getEmpleado_ret    );
            //getEmpleadoReplyTypeSupport::print_data(retInstance);          
            break;
    };
    
    getEmpleadoReplyTypeSupport::delete_data(retInstance);
    getEmpleadoRequestTypeSupport::delete_data(instance);

    return returnedValue;
}