/** 
 * Generated by DDSCS    *
 * Simplest server main  *
 */

#include "UnionTestServer.h"

int main()
{
    int returnedValue = 0;
    int domainId = 0;
    unsigned int threadPoolSize = 5;
    UnionTestServer *server = new UnionTestServer(domainId,
"UnionTest_Library",
"UnionTest_Profile",
        threadPoolSize);
    server->executeServer();

    delete server;
}
