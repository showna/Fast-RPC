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

#include "ControlData.h"
#include "ControlDataSupport.h"
#include "ndds/ndds_cpp.h"

#include <boost/thread.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;

static int running = 0;
static int detected = 0;
static int max_clients = 0;

class ControlDataListener : public DDSDataReaderListener {
    public:

        ControlDataListener(boost::condition_variable &cond) : m_cond(cond) {}

        virtual void on_requested_deadline_missed(
                DDSDataReader* /*reader*/,
                const DDS_RequestedDeadlineMissedStatus& /*status*/) {}

        virtual void on_requested_incompatible_qos(
                DDSDataReader* /*reader*/,
                const DDS_RequestedIncompatibleQosStatus& /*status*/) {}

        virtual void on_sample_rejected(
                DDSDataReader* /*reader*/,
                const DDS_SampleRejectedStatus& /*status*/) {}

        virtual void on_liveliness_changed(
                DDSDataReader* /*reader*/,
                const DDS_LivelinessChangedStatus& /*status*/) {}

        virtual void on_sample_lost(
                DDSDataReader* /*reader*/,
                const DDS_SampleLostStatus& /*status*/) {}

        virtual void on_subscription_matched(
                DDSDataReader* /*reader*/,
                const DDS_SubscriptionMatchedStatus& /*status*/);

        virtual void on_data_available(DDSDataReader* reader);

    private:

        boost::condition_variable &m_cond;
};

void ControlDataListener::on_data_available(DDSDataReader* reader)
{
    ControlDataDataReader *ControlData_reader = NULL;
    ControlDataSeq data_seq;
    DDS_SampleInfoSeq info_seq;
    DDS_ReturnCode_t retcode;
    int i;

    ControlData_reader = ControlDataDataReader::narrow(reader);
    if (ControlData_reader == NULL) {
        printf("DataReader narrow error\n");
        return;
    }

    retcode = ControlData_reader->take(
            data_seq, info_seq, DDS_LENGTH_UNLIMITED,
            DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

    if (retcode == DDS_RETCODE_NO_DATA) {
        return;
    } else if (retcode != DDS_RETCODE_OK) {
        printf("take error %d\n", retcode);
        return;
    }

    for (i = 0; i < data_seq.length(); ++i) {
        if (info_seq[i].valid_data) {
            if(data_seq[i].action == START)
            {
                if(running == 0)
                {
                    ++running;
                    m_cond.notify_one();
                }
            }
        }
    }

    retcode = ControlData_reader->return_loan(data_seq, info_seq);
    if (retcode != DDS_RETCODE_OK) {
        printf("return loan error %d\n", retcode);
    }
}

void ControlDataListener::on_subscription_matched(
        DDSDataReader* reader,
        const DDS_SubscriptionMatchedStatus& status)
{
    if(!detected && status.total_count == max_clients + 1)
    {
        ++detected;
        m_cond.notify_one();
    }

}

static DDSDomainParticipant *participant = NULL;
static DDSPublisher *publisher = NULL;
static DDSSubscriber *subscriber = NULL;
static DDSTopic *topic = NULL;
static DDSDataWriter *writer = NULL;
static ControlDataListener *reader_listener = NULL; 
static DDSDataReader *reader = NULL;
static ControlDataDataWriter * ControlData_writer = NULL;

int shutdownDDSEntities()
{
    DDS_ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            printf("delete_contained_entities error %d\n", retcode);
            status = -1;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
            printf("delete_participant error %d\n", retcode);
            status = -1;
        }
    }

    return status;
}

int createDDSEntities(boost::condition_variable &cond)
{
    const char *type_name = NULL;
    DDS_ReturnCode_t retcode;
    DDS_DomainParticipantQos pQos;

    DDSTheParticipantFactory->get_default_participant_qos(pQos);
    pQos.transport_builtin.mask == DDS_TRANSPORTBUILTIN_SHMEM;

    /* To customize participant QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    participant = DDSTheParticipantFactory->create_participant(
            100, pQos, 
            NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        printf("create_participant error\n");
        shutdownDDSEntities();
        return -1;
    }

    /* To customize publisher QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    publisher = participant->create_publisher(
            DDS_PUBLISHER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        printf("create_publisher error\n");
        shutdownDDSEntities();
        return -1;
    }

    /* To customize the subscriber QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    subscriber = participant->create_subscriber(
            DDS_SUBSCRIBER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (subscriber == NULL) {
        printf("create_subscriber error\n");
        shutdownDDSEntities();
        return -1;
    }

    /* Register type before creating topic */
    type_name = ControlDataTypeSupport::get_type_name();
    retcode = ControlDataTypeSupport::register_type(
            participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        shutdownDDSEntities();
        return -1;
    }

    /* To customize topic QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    topic = participant->create_topic(
            "Example ControlData",
            type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (topic == NULL) {
        printf("create_topic error\n");
        shutdownDDSEntities();
        return -1;
    }

    DDS_DataWriterQos wQos;
    publisher->get_default_datawriter_qos(wQos);
    wQos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
    wQos.history.kind = DDS_KEEP_ALL_HISTORY_QOS;
    /* To customize data writer QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    writer = publisher->create_datawriter(
            topic, wQos, NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (writer == NULL) {
        printf("create_datawriter error\n");
        shutdownDDSEntities();
        return -1;
    }
    ControlData_writer = ControlDataDataWriter::narrow(writer);
    if (ControlData_writer == NULL) {
        printf("DataWriter narrow error\n");
        shutdownDDSEntities();
        return -1;
    }

    /* Create a data reader listener */
    reader_listener = new ControlDataListener(cond);

    DDS_DataReaderQos rQos;
    subscriber->get_default_datareader_qos(rQos);
    rQos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
    rQos.history.kind = DDS_KEEP_ALL_HISTORY_QOS;
    /* To customize the data reader QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    reader = subscriber->create_datareader(
            topic, rQos, reader_listener,
            DDS_STATUS_MASK_ALL);
    if (reader == NULL) {
        printf("create_datareader error\n");
        shutdownDDSEntities();
        delete reader_listener;
        return -1;
    }

    return 0;
}

int main(int argc, char** argv)
{
    boost::chrono::duration<double> duplicate_call_seconds[10000];
    boost::chrono::duration<double> program_seconds;
    boost::mutex mutex;
    boost::condition_variable cond;

    if(argc == 5)
    {
        uint16_t ip[4];
        uint32_t data_size;
        uint32_t appId;

        // Check that the parameter is a IP address.
        if(sscanf(argv[1], "%hu.%hu.%hu.%hu", &ip[0], &ip[1], &ip[2], &ip[3]) == 4)
        {
            if(sscanf(argv[2], "%u", &data_size) == 1)
            {
                if(sscanf(argv[3], "%u", &max_clients) == 1)
                {
                    if(sscanf(argv[4], "%u", &appId) == 1)
                    {
                        boost::shared_ptr<TSocket> socket(new TSocket(argv[1], 9090));
                        boost::shared_ptr<TBufferedTransport> transport(new TBufferedTransport(socket));
                        boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(transport));
                        SimpleDelayClient client(protocol);

                        try
                        {
                            transport->open();

                            // Create DDS entities.
                            if(createDDSEntities(cond) == 0)
                            {
                                // Esperar al manager y el resto de clientes.
                                boost::unique_lock<boost::mutex> lock(mutex);
                                cond.wait(lock);

                                // Send to manager that i'm ready.
                                ControlData *instance = ControlDataTypeSupport::create_data();
                                instance->appId = appId;
                                instance->action = READY;

                                if(ControlData_writer->write(*instance, DDS_HANDLE_NIL) == DDS_RETCODE_OK)
                                {
                                    // Wait to receive the START action.
                                    cond.wait(lock);

                                    //Start test.
                                    boost::chrono::system_clock::time_point program_start = boost::chrono::system_clock::now();

                                    // Testing ducplicate procedure.
                                    for(int i = 0; i < 10000; ++i)
                                    {
                                        Estructura es, ret;
                                        es.long1 = appId;
                                        es.long2 = i;
                                        es.string1 = "Esto es una prueba para el test de performance rpcdds vs thrift vs rpcdds";
                                        for(int j = 0; j < data_size; ++j)
                                            es.prueba.push_back((appId *1000) + j);

                                        boost::chrono::system_clock::time_point call_start = boost::chrono::system_clock::now();
                                        client.duplicate(ret, es);
                                        duplicate_call_seconds[i] = boost::chrono::system_clock::now() - call_start;
                                    }

                                    program_seconds = boost::chrono::system_clock::now() - program_start;

                                    // Print total execution time.
                                    std::cout << "Program execution in " << program_seconds.count() << " seconds." << std::endl;

                                    // Calcular latencia media y el que más tarda.
                                    boost::chrono::duration<double> max_dur = duplicate_call_seconds[0];
                                    int max_pos = 0;
                                    boost::chrono::duration<double> min_dur = duplicate_call_seconds[0];
                                    int min_pos = 0;
                                    boost::chrono::duration<double> suma_dur = duplicate_call_seconds[0];
                                    boost::chrono::duration<double> media;
                                    double desviacion_media = 0;

                                    for(int count = 1; count < 10000; ++count)
                                    {
                                        if(duplicate_call_seconds[count] > max_dur)
                                        {
                                            max_dur = duplicate_call_seconds[count];
                                            max_pos = count;
                                        }

                                        if(duplicate_call_seconds[count] < min_dur)
                                        {
                                            min_dur = duplicate_call_seconds[count];
                                            min_pos = count;
                                        }

                                        suma_dur = suma_dur + duplicate_call_seconds[count];
                                    }

                                    // Calculo de la media.
                                    media = suma_dur/ 10000;

                                    // Calculo de la desviación estándar.
                                    for(int count = 0; count < 10000; ++count)
                                    {
                                        desviacion_media += std::abs(duplicate_call_seconds[count].count() - media.count());
                                    }

                                    desviacion_media = desviacion_media/10000;

                                    std::sort(duplicate_call_seconds, duplicate_call_seconds + 10000);

                                    std::cout << "La llamada más rápida fue " << min_pos << " with " << min_dur << std::endl;
                                    std::cout << "La llamada más lenta fue " << max_pos << " with " << max_dur << std::endl;
                                    std::cout << "La media es " << media << std::endl;
                                    std::cout << "La mediana es " << duplicate_call_seconds[4999] << std::endl;
                                    std::cout << "La desviación media es " << desviacion_media << std::endl;

                                    // Guardar datos en ficheros.
                                    std::ofstream file;
                                    std::stringstream filename;
                                    filename << "client_" << appId << ".log";
                                    file.open(filename.str(), std::ios::app);
                                    file << min_dur << " " << max_dur << " " << media << " " << duplicate_call_seconds[4999] << desviacion_media << std::endl;
                                    file.close();
                                }
                                else
                                {
                                    std::cout << "write error" << std::endl;
                                }

                                // Eliminar entidades DDS.
                                shutdownDDSEntities();
                            }
                            else
                            {
                                std::cout << "Cannot create DDS entities" << std::endl;
                            }

                            transport->close();
                        } catch (TException &tx) {
                            printf("ERROR: %s\n", tx.what());
                            std::cout << "Error: " << tx.what() << std::endl;
                        }
                    }
                    else
                    {
                        std::cout << "Fourth parameter is not a valid identifier." << std::endl;
                    }
                }
                else
                {
                    std::cout << "Thrid parameter is not a valid max client number." << std::endl;
                }
            }
            else
            {
                std::cout << "Second parameter is not a valid data size." << std::endl;
            }
        }
        else
        {
            std::cout << "First parameter is not a valid IPv4 address." << std::endl;
        }
    }
    else
    {
        std::cout << "Usage: SimpleDelayClient <Server IP address> <Data size> <Max client number>" << std::endl;
    }

    return 0;
}


