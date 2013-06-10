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
// be\be_codegen.cpp:381


#include "CalculatorC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/Basic_Arguments.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "CalculatorC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:73

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for Calculator.

Calculator_ptr
TAO::Objref_Traits<Calculator>::duplicate (
    Calculator_ptr p)
{
  return Calculator::_duplicate (p);
}

void
TAO::Objref_Traits<Calculator>::release (
    Calculator_ptr p)
{
  ::CORBA::release (p);
}

Calculator_ptr
TAO::Objref_Traits<Calculator>::nil (void)
{
  return Calculator::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Calculator>::marshal (
    const Calculator_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker * 
(*_TAO_Calculator_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj
  ) = 0;

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:78

::CORBA::Long Calculator::addition (
    ::CORBA::Long x,
    ::CORBA::Long y)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_Calculator_Proxy_Broker_ == 0)
    {
      Calculator_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_x (x);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_y (y);
  
  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_x,
      &_tao_y
    };
  
  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "addition",
      8,
      this->the_TAO_Calculator_Proxy_Broker_
    );
  
  _tao_call.invoke (0, 0);
  
  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:78

::CORBA::Long Calculator::substraction (
    ::CORBA::Long x,
    ::CORBA::Long y)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_Calculator_Proxy_Broker_ == 0)
    {
      Calculator_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_x (x);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_y (y);
  
  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_x,
      &_tao_y
    };
  
  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "substraction",
      12,
      this->the_TAO_Calculator_Proxy_Broker_
    );
  
  _tao_call.invoke (0, 0);
  
  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:78

::CORBA::Long Calculator::multiplication (
    ::CORBA::Long x,
    ::CORBA::Long y)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_Calculator_Proxy_Broker_ == 0)
    {
      Calculator_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_x (x);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_y (y);
  
  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_x,
      &_tao_y
    };
  
  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "multiplication",
      14,
      this->the_TAO_Calculator_Proxy_Broker_
    );
  
  _tao_call.invoke (0, 0);
  
  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:78

::CORBA::Long Calculator::division (
    ::CORBA::Long x,
    ::CORBA::Long y)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_Calculator_Proxy_Broker_ == 0)
    {
      Calculator_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_x (x);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_y (y);
  
  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_x,
      &_tao_y
    };
  
  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "division",
      8,
      this->the_TAO_Calculator_Proxy_Broker_
    );
  
  _tao_call.invoke (0, 0);
  
  return _tao_retval.retn ();
}

Calculator::Calculator (void)
 : the_TAO_Calculator_Proxy_Broker_ (0)
{
  this->Calculator_setup_collocation ();
}

void
Calculator::Calculator_setup_collocation ()
{
  if (::_TAO_Calculator_Proxy_Broker_Factory_function_pointer)
    {
      this->the_TAO_Calculator_Proxy_Broker_ =
        ::_TAO_Calculator_Proxy_Broker_Factory_function_pointer (this);
    }
}

Calculator::~Calculator (void)
{}

Calculator_ptr
Calculator::_narrow (
    ::CORBA::Object_ptr _tao_objref
  )
{
  return
    TAO::Narrow_Utils<Calculator>::narrow (
        _tao_objref,
        "IDL:Calculator:1.0",
        _TAO_Calculator_Proxy_Broker_Factory_function_pointer
      );
}

Calculator_ptr
Calculator::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref
  )
{
  return
    TAO::Narrow_Utils<Calculator>::unchecked_narrow (
        _tao_objref,
        "IDL:Calculator:1.0",
        _TAO_Calculator_Proxy_Broker_Factory_function_pointer
      );
}

Calculator_ptr
Calculator::_duplicate (Calculator_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
Calculator::_tao_release (Calculator_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Calculator::_is_a (const char *value)
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:Calculator:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Calculator::_interface_repository_id (void) const
{
  return "IDL:Calculator:1.0";
}

::CORBA::Boolean
Calculator::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Calculator (
    ::CORBA::tk_objref,
    "IDL:Calculator:1.0",
    "Calculator");
  
::CORBA::TypeCode_ptr const _tc_Calculator =
  &_tao_tc_Calculator;

// TAO_IDL - Generated from
// c:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_interface/cdr_op_cs.cpp:63

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Calculator_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Calculator_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;
  
  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Calculator RHS_SCOPED_NAME;
  
  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (
        obj.in (),
        _TAO_Calculator_Proxy_Broker_Factory_function_pointer
      );
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



