/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <netinet/in.h>
#include <boost/shared_ptr.hpp>
#include <boost/chrono.hpp>

#include "SimpleDelay.h"
#include "SimpleDelay.tcc"

#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/transport/TSocket.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;

int main(int argc, char** argv)
{
    boost::chrono::duration<double> suma_call_seconds[1000];
    boost::chrono::duration<double> duplicate_call_seconds[1000];
    boost::chrono::duration<double> suma_procedure_seconds;
    boost::chrono::duration<double> duplicate_procedure_seconds;
    boost::chrono::duration<double> program_seconds;

    if(argc == 2)
    {
        uint8_t ip[4];

        // Check that the parameter is a IP address.
        if(sscanf(argv[1], "%hhu.%hhu.%hhu.%hhu", &ip[0], &ip[1], &ip[2], &ip[3]) == 4)
        {
            boost::shared_ptr<TSocket> socket(new TSocket(argv[1], 9090));
            boost::shared_ptr<TBufferedTransport> transport(new TBufferedTransport(socket));
            boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(transport));
            SimpleDelayClient client(protocol);

            try
            {
                transport->open();

                boost::chrono::system_clock::time_point program_start = boost::chrono::system_clock::now();

                boost::chrono::system_clock::time_point procedure_start = boost::chrono::system_clock::now();
                // Testing suma procedure.
                for(int i = 0; i < 1000; ++i)
                {
                    boost::chrono::system_clock::time_point call_start = boost::chrono::system_clock::now();
                    int32_t result = client.suma(10, i);
                    suma_call_seconds[i] = boost::chrono::system_clock::now() - call_start;
                }

                suma_procedure_seconds = boost::chrono::system_clock::now() - procedure_start;

                procedure_start = boost::chrono::system_clock::now();
                // Testing ducplicate procedure.
                for(int i = 0; i < 1000; ++i)
                {
                    Estructura es, ret;
                    es.short1 = i;
                    es.short2 = i*2;
                    es.long1 = i;
                    es.long2 = i*2;
                    es.llong1 = i;
                    es.llong2 = i*2;
                    es.double1 = i;
                    es.double2 = i*2;
                    es.string1 = "Esto es una prueba para el test de performance rpcdds vs thrift vs rpcdds";
                    es.string2 = "Esto es una prueba para el test de performance rpcdds vs thrift vs rpcdds" \
                                  "Esto es una prueba para el test de performance rpcdds vs thrift vs rpcdds";

                    boost::chrono::system_clock::time_point call_start = boost::chrono::system_clock::now();
                    client.duplicate(ret, es);
                    duplicate_call_seconds[i] = boost::chrono::system_clock::now() - call_start;
                }

                duplicate_procedure_seconds = boost::chrono::system_clock::now() - procedure_start;

                program_seconds = boost::chrono::system_clock::now() - program_start;

                // Print the suma call times.
                //for(int i = 0; i < 1000; ++i)
                //    std::cout << i << " > suma in " << suma_call_seconds[i].count() << " seconds." << std::endl;
                // Print the all suma procedure time.
                std::cout << "Executed 1000 suma procedures in " << suma_procedure_seconds.count() << " seconds." << std::endl;

                // Print the duplicate call times.
                //for(int i = 0; i < 1000; ++i)
                //    std::cout << i << " > duplicate in " << duplicate_call_seconds[i].count() << " seconds." << std::endl;
                // Print the all duplicate procedure time.
                std::cout << "Executed 1000 duplicate procedures in " << duplicate_procedure_seconds.count() << " seconds." << std::endl;

                // Print total execution time.
                std::cout << "Program execution in " << program_seconds.count() << " seconds." << std::endl;

                transport->close();
            } catch (TException &tx) {
                printf("ERROR: %s\n", tx.what());
                std::cout << "Error: " << tx.what() << std::endl;
            }
        }
        else
        {
            std::cout << "Parameter is not a valid IPv4 address." << std::endl;
        }
    }
    else
    {
        std::cout << "The server IP address is expected." << std::endl;
    }

    return 0;
}


