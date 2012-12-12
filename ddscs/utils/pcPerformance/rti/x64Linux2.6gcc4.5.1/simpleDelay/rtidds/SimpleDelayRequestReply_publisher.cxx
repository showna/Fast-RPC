/* SimpleDelayRequestReply_publisher.cxx

   A publication of data of type SimpleDelay_duplicateReply

   This file is derived from code automatically generated by the rtiddsgen 
command:

rtiddsgen -language C++ -example <arch> SimpleDelayRequestReply.idl

Example publication of type SimpleDelay_duplicateReply automatically generated by 
'rtiddsgen'. To test them follow these steps:

(1) Compile this file and the example subscription.

(2) Start the subscription with the command
objs/<arch>/SimpleDelayRequestReply_subscriber <domain_id> <sample_count>

(3) Start the publication with the command
objs/<arch>/SimpleDelayRequestReply_publisher <domain_id> <sample_count>

(4) [Optional] Specify the list of discovery initial peers and 
multicast receive addresses via an environment variable or a file 
(in the current working directory) called NDDS_DISCOVERY_PEERS. 

You can run any number of publishers and subscribers programs, and can 
add and remove them dynamically from the domain.


Example:

To run the example application on domain <domain_id>:

On Unix: 

objs/<arch>/SimpleDelayRequestReply_publisher <domain_id> o
objs/<arch>/SimpleDelayRequestReply_subscriber <domain_id> 

On Windows:

objs\<arch>\SimpleDelayRequestReply_publisher <domain_id>  
objs\<arch>\SimpleDelayRequestReply_subscriber <domain_id>    


modification history
------------ -------       
*/

#include <stdio.h>
#include <stdlib.h>
#ifdef RTI_VX653
#include <vThreadsData.h>
#endif
#include "SimpleDelayRequestReply.h"
#include "SimpleDelayRequestReplySupport.h"
#include "ndds/ndds_cpp.h"

#include <boost/chrono.hpp>
#include <boost/thread.hpp>

class SimpleDelay_sumaReplyListener : public DDSDataReaderListener {
    public:
        SimpleDelay_sumaReplyListener(boost::condition_variable &cond) :
            m_cond(cond)
    {
    }

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
                const DDS_SubscriptionMatchedStatus& /*status*/) {}

        virtual void on_data_available(DDSDataReader* reader);

    private:
        boost::condition_variable &m_cond;
};

void SimpleDelay_sumaReplyListener::on_data_available(DDSDataReader* reader)
{
    SimpleDelay_sumaReplyDataReader *SimpleDelay_sumaReply_reader = NULL;
    SimpleDelay_sumaReplySeq data_seq;
    DDS_SampleInfoSeq info_seq;
    DDS_ReturnCode_t retcode;
    int i;

    SimpleDelay_sumaReply_reader = SimpleDelay_sumaReplyDataReader::narrow(reader);
    if (SimpleDelay_sumaReply_reader == NULL) {
        printf("DataReader narrow error\n");
        return;
    }

    retcode = SimpleDelay_sumaReply_reader->take(
            data_seq, info_seq, DDS_LENGTH_UNLIMITED,
            DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

    if (retcode == DDS_RETCODE_NO_DATA) {
        printf("NODATA\n");
        return;
    } else if (retcode != DDS_RETCODE_OK) {
        printf("take error %d\n", retcode);
        return;
    }

    if(data_seq.length() > 1)
        printf("SUMA UPSS: Hemos recibido mas de un dato\n");

    m_cond.notify_one();

    retcode = SimpleDelay_sumaReply_reader->return_loan(data_seq, info_seq);
    if (retcode != DDS_RETCODE_OK) {
        printf("return loan error %d\n", retcode);
    }
}

class SimpleDelay_duplicateReplyListener : public DDSDataReaderListener {
    public:
        SimpleDelay_duplicateReplyListener(boost::condition_variable &cond) :
            m_cond(cond)
    {
    }

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
                const DDS_SubscriptionMatchedStatus& /*status*/) {}

        virtual void on_data_available(DDSDataReader* reader);

    private:

        boost::condition_variable &m_cond;
};

void SimpleDelay_duplicateReplyListener::on_data_available(DDSDataReader* reader)
{
    SimpleDelay_duplicateReplyDataReader *SimpleDelay_duplicateReply_reader = NULL;
    SimpleDelay_duplicateReplySeq data_seq;
    DDS_SampleInfoSeq info_seq;
    DDS_ReturnCode_t retcode;
    int i;

    SimpleDelay_duplicateReply_reader = SimpleDelay_duplicateReplyDataReader::narrow(reader);
    if (SimpleDelay_duplicateReply_reader == NULL) {
        printf("DataReader narrow error\n");
        return;
    }

    retcode = SimpleDelay_duplicateReply_reader->take(
            data_seq, info_seq, DDS_LENGTH_UNLIMITED,
            DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

    if (retcode == DDS_RETCODE_NO_DATA) {
        printf("NODATA\n");
        return;
    } else if (retcode != DDS_RETCODE_OK) {
        printf("take error %d\n", retcode);
        return;
    }

    if(data_seq.length() > 1)
        printf("DUPLI UPSS: Hemos recibido mas de un dato\n");

    m_cond.notify_one();

    retcode = SimpleDelay_duplicateReply_reader->return_loan(data_seq, info_seq);
    if (retcode != DDS_RETCODE_OK) {
        printf("return loan error %d\n", retcode);
    }
}

/* Delete all entities */
static int publisher_shutdown(
        DDSDomainParticipant *participant)
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

    /* RTI Connext provides finalize_instance() method on
       domain participant factory for people who want to release memory used
       by the participant factory. Uncomment the following block of code for
       clean destruction of the singleton. */
    /*
       retcode = DDSDomainParticipantFactory::finalize_instance();
       if (retcode != DDS_RETCODE_OK) {
       printf("finalize_instance error %d\n", retcode);
       status = -1;
       }
       */

    return status;
}

extern "C" int publisher_main(int domainId, int sample_count)
{
    DDSDomainParticipant *participant = NULL;
    DDSPublisher *publisher = NULL;
    DDSSubscriber *subscriber = NULL;
    DDSTopic *sumaRequestTopic = NULL;
    DDSTopic *duplicateRequestTopic = NULL;
    DDSTopic *sumaReplyTopic = NULL;
    DDSTopic *duplicateReplyTopic = NULL;
    DDSDataWriter *sumaRequestWriter = NULL;
    DDSDataWriter *duplicateRequestWriter = NULL;
    SimpleDelay_sumaRequestDataWriter * SimpleDelay_sumaRequest_writer = NULL;
    SimpleDelay_duplicateRequestDataWriter * SimpleDelay_duplicateRequest_writer = NULL;
    SimpleDelay_sumaRequest sumaInstance;
    SimpleDelay_duplicateRequest duplicateInstance;
    DDSDataReader *sumaReplyReader = NULL;
    DDSDataReader *duplicateReplyReader = NULL;
    SimpleDelay_sumaReplyDataReader *SimpleDelay_sumaReply_reader = NULL;
    SimpleDelay_duplicateReplyDataReader *SimpleDelay_duplicateReply_reader = NULL;
    DDS_ReturnCode_t retcode;
    DDS_InstanceHandle_t instance_handle = DDS_HANDLE_NIL;
    const char *type_name = NULL;
    unsigned int seqNum = 0;
    boost::mutex mutex;
    boost::condition_variable cond;
    SimpleDelay_sumaReplyListener *suma_reader_listener = NULL; 
    SimpleDelay_duplicateReplyListener *duplicate_reader_listener = NULL; 

    boost::chrono::duration<double> suma_call_seconds[10000];
    boost::chrono::duration<double> duplicate_call_seconds[10000];
    boost::chrono::duration<double> suma_procedure_seconds;
    boost::chrono::duration<double> duplicate_procedure_seconds;
    boost::chrono::duration<double> program_seconds;


    /* To customize participant QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    participant = DDSTheParticipantFactory->create_participant(
            domainId, DDS_PARTICIPANT_QOS_DEFAULT, 
            NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        printf("create_participant error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize publisher QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    publisher = participant->create_publisher(
            DDS_PUBLISHER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        printf("create_publisher error\n");
        publisher_shutdown(participant);
        return -1;
    }

    subscriber = participant->create_subscriber(
            DDS_SUBSCRIBER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if(subscriber == NULL)
    {
        printf("create_subscriber error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* Register type before creating topic */
    type_name = SimpleDelay_sumaRequestTypeSupport::get_type_name();
    retcode = SimpleDelay_sumaRequestTypeSupport::register_type(
            participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        publisher_shutdown(participant);
        return -1;
    }

    sumaRequestTopic = participant->create_topic(
            "SimpleDelay_sumaRequest",
            type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (sumaRequestTopic == NULL) {
        printf("create_topic error\n");
        publisher_shutdown(participant);
        return -1;
    }

    type_name = SimpleDelay_duplicateRequestTypeSupport::get_type_name();
    retcode = SimpleDelay_duplicateRequestTypeSupport::register_type(
            participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize topic QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    duplicateRequestTopic = participant->create_topic(
            "SimpleDelay_duplicateRequest",
            type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (duplicateRequestTopic == NULL) {
        printf("create_topic error\n");
        publisher_shutdown(participant);
        return -1;
    }

    type_name = SimpleDelay_sumaReplyTypeSupport::get_type_name();
    retcode = SimpleDelay_sumaReplyTypeSupport::register_type(
            participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        publisher_shutdown(participant);
        return -1;
    }

    sumaReplyTopic = participant->create_topic(
            "SimpleDelay_sumaReply",
            type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (sumaReplyTopic == NULL) {
        printf("create_topic error\n");
        publisher_shutdown(participant);
        return -1;
    }

    type_name = SimpleDelay_duplicateReplyTypeSupport::get_type_name();
    retcode = SimpleDelay_duplicateReplyTypeSupport::register_type(
            participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        publisher_shutdown(participant);
        return -1;
    }


    duplicateReplyTopic = participant->create_topic(
            "SimpleDelay_duplicateReply",
            type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (duplicateReplyTopic == NULL) {
        printf("create_topic error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize data writer QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    sumaRequestWriter = publisher->create_datawriter(
            sumaRequestTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (sumaRequestWriter == NULL) {
        printf("create_datawriter error\n");
        publisher_shutdown(participant);
        return -1;
    }
    SimpleDelay_sumaRequest_writer = SimpleDelay_sumaRequestDataWriter::narrow(sumaRequestWriter);
    if (SimpleDelay_sumaRequest_writer == NULL) {
        printf("DataWriter narrow error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize data writer QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    duplicateRequestWriter = publisher->create_datawriter(
            duplicateRequestTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (duplicateRequestWriter == NULL) {
        printf("create_datawriter error\n");
        publisher_shutdown(participant);
        return -1;
    }
    SimpleDelay_duplicateRequest_writer = SimpleDelay_duplicateRequestDataWriter::narrow(duplicateRequestWriter);
    if (SimpleDelay_duplicateRequest_writer == NULL) {
        printf("DataWriter narrow error\n");
        publisher_shutdown(participant);
        return -1;
    }

    suma_reader_listener = new SimpleDelay_sumaReplyListener(cond);

    sumaReplyReader = subscriber->create_datareader(
            sumaReplyTopic, DDS_DATAREADER_QOS_DEFAULT, suma_reader_listener,
            DDS_DATA_AVAILABLE_STATUS);
    if (sumaReplyReader == NULL) {
        printf("create_datareader error\n");
        publisher_shutdown(participant);
        return -1;
    }

    SimpleDelay_sumaReply_reader = SimpleDelay_sumaReplyDataReader::narrow(sumaReplyReader);

    duplicate_reader_listener = new SimpleDelay_duplicateReplyListener(cond);

    duplicateReplyReader = subscriber->create_datareader(
            duplicateReplyTopic, DDS_DATAREADER_QOS_DEFAULT, duplicate_reader_listener,
            DDS_DATA_AVAILABLE_STATUS);
    if (duplicateReplyReader == NULL) {
        printf("create_datareader error\n");
        publisher_shutdown(participant);
        return -1;
    }

    SimpleDelay_duplicateReply_reader = SimpleDelay_duplicateReplyDataReader::narrow(duplicateReplyReader);

    sleep(10);

    boost::chrono::system_clock::time_point program_start = boost::chrono::system_clock::now();


    SimpleDelay_sumaRequest_initialize(&sumaInstance);
    SimpleDelay_duplicateRequest_initialize(&duplicateInstance);


    boost::chrono::system_clock::time_point procedure_start = boost::chrono::system_clock::now();


    /*for(int i = 0; i < 10000; ++i)
      {
      DDS_ReturnCode_t retCode;
      DDSConditionSeq conds;
      DDS_Duration_t timeout = {30, 0};
      sumaInstance.header.clientId.value_1 = 1;
      sumaInstance.header.clientId.value_2 = 2;
      sumaInstance.header.clientId.value_3 = 3;
      sumaInstance.header.clientId.value_4 = 4;
      sumaInstance.header.requestSequenceNumber = seqNum++;
      sumaInstance.value1 = 10;
      sumaInstance.value2 = i;
      boost::chrono::system_clock::time_point call_start = boost::chrono::system_clock::now();
      SimpleDelay_sumaRequest_writer->write(sumaInstance, DDS_HANDLE_NIL);

      boost::unique_lock<boost::mutex> lock(mutex);
      cond.wait(lock);

      suma_call_seconds[i] = boost::chrono::system_clock::now() - call_start;
      }*/

    suma_procedure_seconds = boost::chrono::system_clock::now() - procedure_start;

    procedure_start = boost::chrono::system_clock::now();

    for(int i = 0; i < 10000; ++i)
    {
        duplicateInstance.header.clientId.value_1 = 1;
        duplicateInstance.header.clientId.value_2 = 2;
        duplicateInstance.header.clientId.value_3 = 3;
        duplicateInstance.header.clientId.value_4 = 4;
        duplicateInstance.header.requestSequenceNumber = seqNum++;
        duplicateInstance.es.seq.ensure_length(500, 500);
        for(int j = 0; j < 500; ++j)
            duplicateInstance.es.seq[j] = j;

        boost::chrono::system_clock::time_point call_start = boost::chrono::system_clock::now();
        SimpleDelay_duplicateRequest_writer->write(duplicateInstance, DDS_HANDLE_NIL);

        boost::unique_lock<boost::mutex> lock(mutex);
        cond.wait(lock);

        duplicate_call_seconds[i] = boost::chrono::system_clock::now() - call_start;
    }

    duplicate_procedure_seconds = boost::chrono::system_clock::now() - procedure_start;

    /* Delete data sample */
    SimpleDelay_sumaRequest_finalize(&sumaInstance);
    SimpleDelay_duplicateRequest_finalize(&duplicateInstance);


    program_seconds = boost::chrono::system_clock::now() - program_start;

    // Print the suma call times.
    //for(int i = 0; i < 10000; ++i)
    //    std::cout << i << " > suma in " << suma_call_seconds[i].count() << " seconds." << std::endl;
    // Print the all suma procedure time.
    std::cout << "Executed 10000 suma procedures in " << suma_procedure_seconds.count() << " seconds." << std::endl;

    // Print the duplicate call times.
    //for(int i = 0; i < 10000; ++i)
    //std::cout << i << " > duplicate in " << duplicate_call_seconds[i].count() << " seconds." << std::endl;
    // Print the all duplicate procedure time.
    std::cout << "Executed 10000 duplicate procedures in " << duplicate_procedure_seconds.count() << " seconds." << std::endl;

    // Print total execution time.
    std::cout << "Program execution in " << program_seconds.count() << " seconds." << std::endl;

    // Calcular latencia media y el que más tarda.
    boost::chrono::duration<double> max_dur = duplicate_call_seconds[0];
    int max_pos = 0;
    boost::chrono::duration<double> suma_dur = duplicate_call_seconds[0];

    for(int count = 1; count < 10000; ++count)
    {
        if(duplicate_call_seconds[count] > max_dur)
        {
            max_dur = duplicate_call_seconds[count];
            max_pos = count;
        }

        suma_dur = suma_dur + duplicate_call_seconds[count];
    }

    std::cout << "The slowest call was " << max_pos << " with " << max_dur << std::endl;
    std::cout << "The latency average was " << suma_dur / 10000 << std::endl;

    /* Delete all entities */
    return publisher_shutdown(participant);
}

#if defined(RTI_WINCE)
int wmain(int argc, wchar_t** argv)
{
    int domainId = 0;
    int sample_count = 0; /* infinite loop */ 

    if (argc >= 2) {
        domainId = _wtoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = _wtoi(argv[2]);
    }

    /* Uncomment this to turn on additional logging
       NDDSConfigLogger::get_instance()->
       set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
       NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
       */

    return publisher_main(domainId, sample_count);
}

#elif !(defined(RTI_VXWORKS) && !defined(__RTP__)) && !defined(RTI_PSOS)
int main(int argc, char *argv[])
{
    int domainId = 0;
    int sample_count = 0; /* infinite loop */

    if (argc >= 2) {
        domainId = atoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = atoi(argv[2]);
    }

    /* Uncomment this to turn on additional logging
       NDDSConfigLogger::get_instance()->
       set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
       NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
       */

    return publisher_main(domainId, sample_count);
}
#endif

#ifdef RTI_VX653
const unsigned char* __ctype = *(__ctypePtrGet());

extern "C" void usrAppInit ()
{
#ifdef  USER_APPL_INIT
    USER_APPL_INIT;         /* for backwards compatibility */
#endif

    /* add application specific code here */
    taskSpawn("pub", RTI_OSAPI_THREAD_PRIORITY_NORMAL, 0x8, 0x150000, (FUNCPTR)publisher_main, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

}
#endif

