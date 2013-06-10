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

#ifndef _TAO_IDL_IDL_CALCULATORC_H_
#define _TAO_IDL_IDL_CALCULATORC_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include /**/ "tao/Versioned_Namespace.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from 
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_root/root_ch.cpp:62
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  class Collocation_Proxy_Broker;
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_interface.cpp:644

#if !defined (_CALCULATOR__VAR_OUT_CH_)
#define _CALCULATOR__VAR_OUT_CH_

class Calculator;
typedef Calculator *Calculator_ptr;

typedef
  TAO_Objref_Var_T<
      Calculator
    >
  Calculator_var;

typedef
  TAO_Objref_Out_T<
      Calculator
    >
  Calculator_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_CALCULATOR_CH_)
#define _CALCULATOR_CH_

class  Calculator
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Calculator>;
  typedef Calculator_ptr _ptr_type;
  typedef Calculator_var _var_type;
  typedef Calculator_out _out_type;
  
  // The static operations.
  static Calculator_ptr _duplicate (Calculator_ptr obj);
  
  static void _tao_release (Calculator_ptr obj);
  
  static Calculator_ptr _narrow (::CORBA::Object_ptr obj);
  static Calculator_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Calculator_ptr _nil (void)
  {
    return static_cast<Calculator_ptr> (0);
  }
  
  
  
  // TAO_IDL - Generated from
  // c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:46
  
  virtual ::CORBA::Long addition (
      ::CORBA::Long x,
      ::CORBA::Long y);
  
  // TAO_IDL - Generated from
  // c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:46
  
  virtual ::CORBA::Long substraction (
      ::CORBA::Long x,
      ::CORBA::Long y);
  
  // TAO_IDL - Generated from
  // c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:46
  
  virtual ::CORBA::Long multiplication (
      ::CORBA::Long x,
      ::CORBA::Long y);
  
  // TAO_IDL - Generated from
  // c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:46
  
  virtual ::CORBA::Long division (
      ::CORBA::Long x,
      ::CORBA::Long y);
  
  // TAO_IDL - Generated from
  // c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:216
  
  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
private:
  TAO::Collocation_Proxy_Broker *the_TAO_Calculator_Proxy_Broker_;

protected:
  // Concrete interface only.
  Calculator (void);
  
  // These methods travese the inheritance tree and set the
  // parents piece of the given class in the right mode.
  virtual void Calculator_setup_collocation (void);
  
  // Concrete non-local interface only.
  Calculator (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Calculator (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);
  
  virtual ~Calculator (void);

private:
  // Private and unimplemented for concrete interfaces.
  Calculator (const Calculator &);
  
  void operator= (const Calculator &);
};

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Calculator;

// Proxy Broker Factory function pointer declarations.

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_root/root.cpp:139

extern 
TAO::Collocation_Proxy_Broker *
(*_TAO_Calculator_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj
  );

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:64

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_CALCULATOR__TRAITS_)
#define _CALCULATOR__TRAITS_
  
  template<>
  struct  Objref_Traits< ::Calculator>
  {
    static ::Calculator_ptr duplicate (
        ::Calculator_ptr p
      );
    static void release (
        ::Calculator_ptr p
      );
    static ::Calculator_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Calculator_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_interface/cdr_op_ch.cpp:55

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Calculator_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Calculator_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_codegen.cpp:1228
#if defined (__ACE_INLINE__)
#include "CalculatorC.inl"
#endif /* defined INLINE */

#endif /* ifndef */


