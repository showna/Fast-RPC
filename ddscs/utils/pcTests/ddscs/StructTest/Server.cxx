/** 
 * Generated by DDSCS    *
 * Simplest server main  *
 */

#include "StructTestServer.h"

int main()
{
    int returnedValue = 0;
    int domainId = 0;
    unsigned int threadPoolSize = 5;
    StructTestServer *server = new StructTestServer(domainId, threadPoolSize);
    server->executeServer();

    delete server;
}
