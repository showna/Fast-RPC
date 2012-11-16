#ifndef _EnumYStringTest_ASYNC_SUPPORT_H_
#define _EnumYStringTest_ASYNC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/AsyncTask.h"


/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getEnum from the server in an asynchronous call.
 */
class EnumYStringTest_getEnumTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        EnumYStringTest_getEnumTask(EnumYStringTest_getEnumCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~EnumYStringTest_getEnumTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        EnumYStringTest_getEnumCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           EnumYStringTest_getEnumCallbackHandler &m_obj;
           
           EnumYStringTest_getEnumReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getString from the server in an asynchronous call.
 */
class EnumYStringTest_getStringTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        EnumYStringTest_getStringTask(EnumYStringTest_getStringCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~EnumYStringTest_getStringTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        EnumYStringTest_getStringCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           EnumYStringTest_getStringCallbackHandler &m_obj;
           
           EnumYStringTest_getStringReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getStringBounded from the server in an asynchronous call.
 */
class EnumYStringTest_getStringBoundedTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        EnumYStringTest_getStringBoundedTask(EnumYStringTest_getStringBoundedCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~EnumYStringTest_getStringBoundedTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        EnumYStringTest_getStringBoundedCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           EnumYStringTest_getStringBoundedCallbackHandler &m_obj;
           
           EnumYStringTest_getStringBoundedReply m_reply;
};

#endif // _EnumYStringTest_ASYNC_SUPPORT_H_