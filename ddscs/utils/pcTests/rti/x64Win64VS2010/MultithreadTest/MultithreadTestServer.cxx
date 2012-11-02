/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "MultithreadTestServer.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "MultithreadTestRequestReplyPlugin.h"

#include "MultithreadTestServerRPCSupport.h"

MultithreadTestServer::MultithreadTestServer(eProsima::DDSRPC::ServerStrategy *strategy,
    int domainId) :
    Server(strategy, NULL, domainId)
{
    _impl = new MultithreadTestServerImpl();

    createRPCs();
}

MultithreadTestServer::MultithreadTestServer(eProsima::DDSRPC::ServerStrategy *strategy,
    eProsima::DDSRPC::Transport *transport, int domainId) :
    Server(strategy, transport, domainId)
{
    _impl = new MultithreadTestServerImpl();
    
    createRPCs();
}

MultithreadTestServer::~MultithreadTestServer()
{
    delete _impl;    
}

void MultithreadTestServer::createRPCs()
{
    this->setRPC(new testServerRPC("test", this,
                testRequestUtils::registerType(getParticipant()),
                testReplyUtils::registerType(getParticipant()),
                &MultithreadTestServer::test, getParticipant()));

}

void MultithreadTestServer::test(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    MultithreadTestServer *srv = dynamic_cast<MultithreadTestServer*>(server);
    Dato dato1;
        
    Dato dato2;
    memset(&dato2, 0, sizeof(Dato));    
    DDS_Long  returnedValue = 0;       
    testReply replyData;

    testRequestUtils::extractTypeData(*(testRequest*)requestData, dato1  );

returnedValue = srv->_impl->test(dato1  , dato2  );

    testReplyUtils::setTypeData(replyData, dato2  , returnedValue);

    // sendReply takes care of deleting the data
    service->sendReply(requestData, &replyData, eProsima::DDSRPC::OPERATION_SUCCESSFUL);
    
    testRequestTypeSupport::delete_data((testRequest*)requestData);
    
        
    Dato_finalize(&dato2);    
}