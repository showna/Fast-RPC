#ifndef _StructTest_ASYNC_SUPPORT_H_
#define _StructTest_ASYNC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/AsyncTask.h"


class StructTest_duplicateTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        StructTest_duplicateTask(StructTest_duplicate &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~StructTest_duplicateTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        StructTest_duplicate& getObject();
        
        private:
        
           StructTest_duplicate &m_obj;
};

class StructTest_sumaTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        StructTest_sumaTask(StructTest_suma &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~StructTest_sumaTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        StructTest_suma& getObject();
        
        private:
        
           StructTest_suma &m_obj;
};

#endif // _StructTest_ASYNC_SUPPORT_H_