/** 
 * Generated by DDSRPC   *
 * Simplest server main  *
 */

#include "BasicTypeTestServer.h"

int main()
{
    int returnedValue = 0;
    int domainId = 0;
    unsigned int threadPoolSize = 5;
    BasicTypeTestServer *server = new BasicTypeTestServer(domainId, threadPoolSize);
    server->executeServer();

    delete server;
}
