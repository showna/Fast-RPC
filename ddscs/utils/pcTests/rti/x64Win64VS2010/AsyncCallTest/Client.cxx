/** 
 * Generated by DDSRPC                                                   *
 * Example client. Method params should be initialized before execution  *
 */

#include "AsyncCallTestProxy.h"
#include "AsyncCallTestRequestReplyPlugin.h"
#include "exceptions/Exceptions.h"

class GetLongHandler : public AsyncCallTest_getLongCallbackHandler
{
    public:

        GetLongHandler() : m_state(0){}

        void getLong(/*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret)
        {
            if(lo3 != 2 ||
                    getLong_ret != 1 ||
                    lo2 != 3)
            {
                printf("TEST FAILED<getLong>: Wrong values\n");
                m_state = 2;
                return;
            }

            m_state = 1;
        }

        void on_exception(const eProsima::DDSRPC::Exception &ex)
        {
            printf("TEST FAILED<on_exception>: %s\n", ex.what());
            m_state = 2;
        }

        int getState() const
        {
            return m_state;
        }

    private:

        int m_state;
};

class GetBooleanHandler : public AsyncCallTest_getBooleanCallbackHandler
{
    public:
        GetBooleanHandler() : m_state(0){}

        void getBoolean(/*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret)
        {
            if(bo3 != RTI_FALSE ||
                    getBoolean_ret != RTI_TRUE ||
                    bo2 != RTI_TRUE)
            {
                printf("TEST FAILED<getBoolean>: Wrong values\n");
                m_state = 2;
                return;
            }

            m_state = 1;
        }

        void on_exception(const eProsima::DDSRPC::Exception &ex)
        {
            printf("TEST FAILED<on_exception>: %s\n", ex.what());
            m_state = 2;
        }

        int getState() const
        {
            return m_state;
        }

    private:

        int m_state;
};

class GetStringHandler : public AsyncCallTest_getStringCallbackHandler
{
    public:

        GetStringHandler() : m_state(0){}

        void getString(/*inout*/ char* s2, /*out*/ char* s3, /*out*/ char* getString_ret)
        {
            if(strcmp(s3, "PRUEBA2") != 0 ||
                    strcmp(getString_ret, "PRUEBA") != 0 ||
                    strcmp(s2, "PRUEBAPRUEBA2") != 0)
            {
                printf("TEST FAILED<getString>: Wrong values\n");
                m_state = 2;
                return;
            }       

            m_state = 1;
        }
   
        void on_exception(const eProsima::DDSRPC::Exception &ex)
        {
            printf("TEST FAILED<on_exception>: %s\n", ex.what());
            m_state = 2;
        }

        int getState() const
        {
            return m_state;
        }

    private:

        int m_state;
};

class DuplicateHandler : public AsyncCallTest_duplicateCallbackHandler
{
    public:
        DuplicateHandler() : m_state(0){}

        void duplicate(/*out*/ const Structure& duplicate_ret)
        {
            if(duplicate_ret.dato != 10 ||
                    strcmp(duplicate_ret.message, "HOLA") != 0)
            {
                printf("TEST FAILED<duplicate>: Wrong values\n");
                m_state = 2;
                return;
            }

            m_state = 1;
        }
   
        void on_exception(const eProsima::DDSRPC::Exception &ex)
        {
            printf("TEST FAILED<on_exception>: %s\n", ex.what());
            m_state = 2;
        }

        int getState() const
        {
            return m_state;
        }

    private:

        int m_state;
};

int main(int argc, char **argv)
{
    AsyncCallTestProxy *proxy = new AsyncCallTestProxy("AsyncCallTestService");

    DDS_Long  lo1 = 1;       
    DDS_Long  lo2 = 2;       
    GetLongHandler getLong_handler;

    try
    {
        proxy->getLong_async(getLong_handler, lo1, lo2);

        while(getLong_handler.getState() == 0)
        {
            Sleep(1000);
        }

        if(getLong_handler.getState() == 2)
            _exit(-1);
    }
    catch(eProsima::DDSRPC::Exception &ex)
    {
        printf("TEST FAILED<getLong_async>: %s\n", ex.what());
        _exit(-1);
    }

    DDS_Boolean  bo1 = RTI_TRUE;       
    DDS_Boolean  bo2 = RTI_FALSE;       
    GetBooleanHandler getBoolean_handler;

    try
    {
        proxy->getBoolean_async(getBoolean_handler, bo1, bo2);

        while(getBoolean_handler.getState() == 0)
        {
            Sleep(1000);
        }

        if(getBoolean_handler.getState() == 2)
            _exit(-1);
    }
    catch(eProsima::DDSRPC::Exception &ex)
    {
        printf("TEST FAILED<getBoolean_async>: %s\n", ex.what());
        _exit(-1);
    }

    char*  s1  = DDS::String_dup("PRUEBA");       
    char*  s2  = DDS::String_dup("PRUEBA2");       
    GetStringHandler getString_handler;

    try
    {
        proxy->getString_async(getString_handler, s1, s2);

        while(getString_handler.getState() == 0)
        {
            Sleep(1000);
        }

        if(getString_handler.getState() == 2)
            _exit(-1);
    }
    catch(eProsima::DDSRPC::Exception &ex)
    {
        printf("TEST FAILED<getString_async>: %s\n", ex.what());
        _exit(-1);
    }

    if(s1 != NULL) DDS::String_free(s1);    
    if(s2 != NULL) DDS::String_free(s2);    

    Structure ev;
    DuplicateHandler duplicate_handler;

	Structure_initialize(&ev);    
        
    ev.dato = 10;
    ev.message = DDS_String_dup("HOLA");

    try
    {
        proxy->duplicate_async(duplicate_handler, ev);

        while(duplicate_handler.getState() == 0)
        {
            Sleep(1000);
        }

        if(duplicate_handler.getState() == 2)
            _exit(-1);
    }
    catch(eProsima::DDSRPC::Exception &ex)
    {
        printf("TEST FAILED<duplicate_async>: %s\n", ex.what());
        _exit(-1);
    }

    Structure_finalize(&ev);    

    printf("TEST SUCCESFULLY\n");

    delete(proxy);

    _exit(0);
    return 0;
}
