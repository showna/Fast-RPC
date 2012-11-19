#ifndef _ServerException_ASYNC_SUPPORT_H_
#define _ServerException_ASYNC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/AsyncTask.h"


/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure sendException from the server in an asynchronous call.
 */
class ServerException_sendExceptionTask : public eProsima::RPCDDS::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that RPCDDS will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        ServerException_sendExceptionTask(ServerException_sendExceptionCallbackHandler &obj,
           eProsima::RPCDDS::Client *client);

        /// \brief The default destructor.
        virtual ~ServerException_sendExceptionTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::RPCDDS::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        ServerException_sendExceptionCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           ServerException_sendExceptionCallbackHandler &m_obj;
           
           ServerException_sendExceptionReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure sendExceptionTwo from the server in an asynchronous call.
 */
class ServerException_sendExceptionTwoTask : public eProsima::RPCDDS::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that RPCDDS will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        ServerException_sendExceptionTwoTask(ServerException_sendExceptionTwoCallbackHandler &obj,
           eProsima::RPCDDS::Client *client);

        /// \brief The default destructor.
        virtual ~ServerException_sendExceptionTwoTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::RPCDDS::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        ServerException_sendExceptionTwoCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           ServerException_sendExceptionTwoCallbackHandler &m_obj;
           
           ServerException_sendExceptionTwoReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure sendExceptionThree from the server in an asynchronous call.
 */
class ServerException_sendExceptionThreeTask : public eProsima::RPCDDS::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that RPCDDS will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        ServerException_sendExceptionThreeTask(ServerException_sendExceptionThreeCallbackHandler &obj,
           eProsima::RPCDDS::Client *client);

        /// \brief The default destructor.
        virtual ~ServerException_sendExceptionThreeTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::RPCDDS::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        ServerException_sendExceptionThreeCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           ServerException_sendExceptionThreeCallbackHandler &m_obj;
           
           ServerException_sendExceptionThreeReply m_reply;
};

#endif // _ServerException_ASYNC_SUPPORT_H_