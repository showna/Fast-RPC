/** 
 * Generated by DDSCS    *
 * Simplest server main  *
 */

#include "EnumYStringTestServer.h"

int main()
{
    int returnedValue = 0;
    int domainId = 0;
    unsigned int threadPoolSize = 5;
    EnumYStringTestServer *server = new EnumYStringTestServer(domainId,
"EnumYStringTest_Library",
"EnumYStringTest_Profile",
        threadPoolSize);
    server->executeServer();

    delete server;
}
