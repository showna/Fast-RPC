#ifndef _EnumYStringTestSERVER_IMPL_H_
#define _EnumYStringTestSERVER_IMPL_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "EnumYStringTestRequestReplyUtils.h"

class EnumYStringTestServerImpl
{
    public:

        /// \brief The default constructor.
        EnumYStringTestServerImpl();

        /// \brief The default destructor.
        virtual ~EnumYStringTestServerImpl();

         
        Valores getEnum(/*in*/ Valores v1, /*inout*/ Valores& v2, /*out*/ Valores& v3);
         
        char* getString(/*in*/ char* s1, /*inout*/ char*& s2, /*out*/ char*& s3);
         
        char* getStringBounded(/*in*/ char* sb1, /*inout*/ char*& sb2, /*out*/ char*& sb3);
};

#endif // _EnumYStringTestSERVER_IMPL_H_