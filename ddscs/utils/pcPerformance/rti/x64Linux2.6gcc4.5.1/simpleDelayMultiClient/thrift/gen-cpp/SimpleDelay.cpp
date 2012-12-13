/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <netinet/in.h>
#include <boost/shared_ptr.hpp>
#include <boost/chrono.hpp>
#include "boost/config/user.hpp"
#include "boost/thread.hpp"

#include "SimpleDelay.h"
#include "SimpleDelay.tcc"

#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/transport/TSocket.h>

#include <iostream>
#include <fstream>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;

static boost::thread thread1, thread2, thread3, thread4;
boost::chrono::duration<double> duplicateArray[40000];
static int run = 0;
static uint32_t data_size = 0;

void* executeThread(SimpleDelayClient &client, int arrayPos)
{
    const char* const METHOD_NAME = "executeThread";
    int count = 0;

    // Wait until start.
    while(!run)
    {
        boost::this_thread::sleep(boost::posix_time::microseconds(200));
    }

    for(; count < 10000; ++count)
    {
        Estructura es, ret;
        es.long1 = count;
        es.long2 = count*2;
        es.string1 = "Esto es una prueba para el test de performance rpcdds vs thrift vs rpcdds";
        for(int i = 0; i < data_size; ++i)
            es.prueba.push_back(i);

        boost::chrono::system_clock::time_point call_start = boost::chrono::system_clock::now();
        client.duplicate(ret, es);
        duplicateArray[arrayPos++] = boost::chrono::system_clock::now() - call_start;
    }

    return NULL;
}

int main(int argc, char** argv)
{
    boost::chrono::duration<double> program_seconds;

    if(argc == 3)
    {
        uint16_t ip[4];

        // Check that the parameter is a IP address.
        if(sscanf(argv[1], "%hu.%hu.%hu.%hu", &ip[0], &ip[1], &ip[2], &ip[3]) == 4)
        {
            if(sscanf(argv[2], "%u", &data_size) == 1)
            {
                boost::shared_ptr<TSocket> socket1(new TSocket(argv[1], 9090));
                boost::shared_ptr<TBufferedTransport> transport1(new TBufferedTransport(socket1));
                boost::shared_ptr<TBinaryProtocol> protocol1(new TBinaryProtocol(transport1));
                SimpleDelayClient client1(protocol1);
                boost::shared_ptr<TSocket> socket2(new TSocket(argv[1], 9090));
                boost::shared_ptr<TBufferedTransport> transport2(new TBufferedTransport(socket2));
                boost::shared_ptr<TBinaryProtocol> protocol2(new TBinaryProtocol(transport2));
                SimpleDelayClient client2(protocol2);
                boost::shared_ptr<TSocket> socket3(new TSocket(argv[1], 9090));
                boost::shared_ptr<TBufferedTransport> transport3(new TBufferedTransport(socket3));
                boost::shared_ptr<TBinaryProtocol> protocol3(new TBinaryProtocol(transport3));
                SimpleDelayClient client3(protocol3);
                boost::shared_ptr<TSocket> socket4(new TSocket(argv[1], 9090));
                boost::shared_ptr<TBufferedTransport> transport4(new TBufferedTransport(socket4));
                boost::shared_ptr<TBinaryProtocol> protocol4(new TBinaryProtocol(transport4));
                SimpleDelayClient client4(protocol4);

                try
                {
                    transport1->open();
                    transport2->open();
                    transport3->open();
                    transport4->open();

                    thread1 = boost::thread(executeThread, client1, 0);
                    thread2 = boost::thread(executeThread, client2, 10000);
                    thread3 = boost::thread(executeThread, client3, 20000);
                    thread4 = boost::thread(executeThread, client4, 30000);

                    run = 1;

                    boost::chrono::system_clock::time_point program_start = boost::chrono::system_clock::now();

                    thread1.join();
                    thread2.join();
                    thread3.join();
                    thread4.join();
                    run = 0;

                    program_seconds = boost::chrono::system_clock::now() - program_start;

                    // Print total execution time.
                    std::cout << "Program execution in " << program_seconds.count() << " seconds." << std::endl;

                    // Calcular latencia media y el que más tarda.
                    boost::chrono::duration<double> max_dur = duplicateArray[0];
                    int max_pos = 0;
                    boost::chrono::duration<double> min_dur = duplicateArray[0];
                    int min_pos = 0;
                    boost::chrono::duration<double> suma_dur = duplicateArray[0];

                    for(int count = 1; count < 40000; ++count)
                    {
                        if(duplicateArray[count] > max_dur)
                        {
                            max_dur = duplicateArray[count];
                            max_pos = count;
                        }

                        if(duplicateArray[count] < min_dur)
                        {
                            min_dur = duplicateArray[count];
                            min_pos = count;
                        }

                        suma_dur = suma_dur + duplicateArray[count];
                    }

                    std::sort(duplicateArray, duplicateArray + 40000);

                    std::cout << "The faster call was " << min_pos << " with " << min_dur << std::endl;
                    std::cout << "The slowest call was " << max_pos << " with " << max_dur << std::endl;
                    std::cout << "The latency average was " << suma_dur / 40000 << std::endl;
                    std::cout << "The 20000th value was " << duplicateArray[20000] << std::endl;

                    // Guardar datos en ficheros.
                    std::ofstream file;
                    file.open("clientes.txt", std::ios::app);
                    file << min_dur << " " << max_dur << " " << suma_dur/40000 << " " << duplicateArray[20000] << std::endl;
                    file.close();

                    transport1->close();
                    transport2->close();
                    transport3->close();
                    transport4->close();
                } catch (TException &tx) {
                    printf("ERROR: %s\n", tx.what());
                    std::cout << "Error: " << tx.what() << std::endl;
                }
            }
            else
            {
                std::cout << "Second parameter is not a valid data size." << std::endl;
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


