/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file SequenceTestAsyncSupport.h
 * This header file contains functionality to use asynchronous calls for interface SequenceTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _SequenceTest_ASYNC_SUPPORT_H_
#define _SequenceTest_ASYNC_SUPPORT_H_

#include "client/AsyncTask.h"


/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getSLong from the server in an asynchronous call.
 */
class SequenceTest_getSLongTask : public eProsima::RPCDDS::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that RPCDDS will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        SequenceTest_getSLongTask(SequenceTest_getSLongCallbackHandler &obj,
           eProsima::RPCDDS::Client *client);

        /// \brief The default destructor.
        virtual ~SequenceTest_getSLongTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::RPCDDS::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        SequenceTest_getSLongCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           SequenceTest_getSLongCallbackHandler &m_obj;
           
           SequenceTest_getSLongReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getString from the server in an asynchronous call.
 */
class SequenceTest_getStringTask : public eProsima::RPCDDS::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that RPCDDS will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        SequenceTest_getStringTask(SequenceTest_getStringCallbackHandler &obj,
           eProsima::RPCDDS::Client *client);

        /// \brief The default destructor.
        virtual ~SequenceTest_getStringTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::RPCDDS::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        SequenceTest_getStringCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           SequenceTest_getStringCallbackHandler &m_obj;
           
           SequenceTest_getStringReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getStringBounded from the server in an asynchronous call.
 */
class SequenceTest_getStringBoundedTask : public eProsima::RPCDDS::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that RPCDDS will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        SequenceTest_getStringBoundedTask(SequenceTest_getStringBoundedCallbackHandler &obj,
           eProsima::RPCDDS::Client *client);

        /// \brief The default destructor.
        virtual ~SequenceTest_getStringBoundedTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::RPCDDS::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        SequenceTest_getStringBoundedCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           SequenceTest_getStringBoundedCallbackHandler &m_obj;
           
           SequenceTest_getStringBoundedReply m_reply;
};

#endif // _SequenceTest_ASYNC_SUPPORT_H_