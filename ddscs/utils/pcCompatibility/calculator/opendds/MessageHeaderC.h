// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler v1.6a_p13 ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:135

#ifndef _TAO_IDL_IDL_MESSAGEHEADERC_H_
#define _TAO_IDL_IDL_MESSAGEHEADERC_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/VarOut_T.h"
#include /**/ "tao/Versioned_Namespace.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct Identification;

typedef
  TAO_Fixed_Var_T<
      Identification
    >
  Identification_var;

typedef
  Identification &
  Identification_out;

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  Identification
{
  typedef Identification_var _var_type;
  typedef Identification_out _out_type;
  
  
  ::CORBA::ULong value_1;
  ::CORBA::ULong value_2;
  ::CORBA::ULong value_3;
  ::CORBA::ULong value_4;
};

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Identification;

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct RequestHeader;

typedef
  TAO_Var_Var_T<
      RequestHeader
    >
  RequestHeader_var;

typedef
  TAO_Out_T<
      RequestHeader
    >
  RequestHeader_out;

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  RequestHeader
{
  typedef RequestHeader_var _var_type;
  typedef RequestHeader_out _out_type;
  
  
  Identification clientId;
  TAO::String_Manager remoteServiceName;
  ::CORBA::ULong requestSequenceNumber;
};

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_RequestHeader;

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct ReplyHeader;

typedef
  TAO_Var_Var_T<
      ReplyHeader
    >
  ReplyHeader_var;

typedef
  TAO_Out_T<
      ReplyHeader
    >
  ReplyHeader_out;

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  ReplyHeader
{
  typedef ReplyHeader_var _var_type;
  typedef ReplyHeader_out _out_type;
  
  
  Identification clientId;
  ::CORBA::ULong requestSequenceNumber;
  ::CORBA::Long rpcddsRetCode;
  TAO::String_Manager rpcddsRetMsg;
};

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_ReplyHeader;

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:64

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Identification &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Identification &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const RequestHeader &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, RequestHeader &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ReplyHeader &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, ReplyHeader &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_codegen.cpp:1228
#if defined (__ACE_INLINE__)
#include "MessageHeaderC.inl"
#endif /* defined INLINE */

#endif /* ifndef */


