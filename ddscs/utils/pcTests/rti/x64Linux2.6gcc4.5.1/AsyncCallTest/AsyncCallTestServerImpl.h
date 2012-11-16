#ifndef _AsyncCallTestSERVER_IMPL_H_
#define _AsyncCallTestSERVER_IMPL_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "AsyncCallTestRequestReplyUtils.h"

/**
 * \brief This class is the skeleton of the servant and its remote procedures has to be implemented.
 *        When the AsyncCallTestServer object is created, it creates one instance of this class.
 */
class AsyncCallTestServerImpl
{
    public:

        /// \brief The default constructor.
        AsyncCallTestServerImpl(){}

        /// \brief The default destructor.
        virtual ~AsyncCallTestServerImpl(){}

         
        DDS_Long getLong(/*in*/ DDS_Long lo1, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3);
         
        DDS_Boolean getBoolean(/*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3);
         
        char* getString(/*in*/ char* s1, /*inout*/ char*& s2, /*out*/ char*& s3);
         
        Structure duplicate(/*in*/ const Structure& ev);
};

#endif // _AsyncCallTestSERVER_IMPL_H_