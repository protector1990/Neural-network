// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.5.0
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

#include "TAO_ExtA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_ConnectionTimeoutPolicy (
    ::CORBA::tk_local_interface,
    "IDL:tao/TAO/ConnectionTimeoutPolicy:1.0",
    "ConnectionTimeoutPolicy");
  

namespace TAO
{
  ::CORBA::TypeCode_ptr const _tc_ConnectionTimeoutPolicy =
    &_tao_tc_TAO_ConnectionTimeoutPolicy;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\alias_typecode.cpp:49

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_TAO_BufferingConstraintMode (
    ::CORBA::tk_alias,
    "IDL:tao/TAO/BufferingConstraintMode:1.0",
    "BufferingConstraintMode",
    &CORBA::_tc_ushort);
  

namespace TAO
{
  ::CORBA::TypeCode_ptr const _tc_BufferingConstraintMode =
    &_tao_tc_TAO_BufferingConstraintMode;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_TAO_BufferingConstraint[] =
      {
        { "mode", &TAO::_tc_BufferingConstraintMode },
        { "timeout", &TimeBase::_tc_TimeT },
        { "message_count", &CORBA::_tc_ulong },
        { "message_bytes", &CORBA::_tc_ulong }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_TAO_BufferingConstraint (
  ::CORBA::tk_struct,
  "IDL:tao/TAO/BufferingConstraint:1.0",
  "BufferingConstraint",
  _tao_fields_TAO_BufferingConstraint,
  4);


namespace TAO
{
  ::CORBA::TypeCode_ptr const _tc_BufferingConstraint =
    &_tao_tc_TAO_BufferingConstraint;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_BufferingConstraintPolicy (
    ::CORBA::tk_local_interface,
    "IDL:tao/TAO/BufferingConstraintPolicy:1.0",
    "BufferingConstraintPolicy");
  

namespace TAO
{
  ::CORBA::TypeCode_ptr const _tc_BufferingConstraintPolicy =
    &_tao_tc_TAO_BufferingConstraintPolicy;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TAO
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::TAO::BufferingConstraint &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::TAO::BufferingConstraint>::insert_copy (
        _tao_any,
        ::TAO::BufferingConstraint::_tao_any_destructor,
        ::TAO::_tc_BufferingConstraint,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    TAO::BufferingConstraint *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::TAO::BufferingConstraint>::insert (
      _tao_any,
      ::TAO::BufferingConstraint::_tao_any_destructor,
      ::TAO::_tc_BufferingConstraint,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::TAO::BufferingConstraint *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::TAO::BufferingConstraint>::extract (
        _tao_any,
        ::TAO::BufferingConstraint::_tao_any_destructor,
        ::TAO::_tc_BufferingConstraint,
        _tao_elem);
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const TAO::BufferingConstraint &_tao_elem)
{
  TAO::Any_Dual_Impl_T<TAO::BufferingConstraint>::insert_copy (
    _tao_any,
    TAO::BufferingConstraint::_tao_any_destructor,
    TAO::_tc_BufferingConstraint,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  TAO::BufferingConstraint *_tao_elem)
{
  TAO::Any_Dual_Impl_T<TAO::BufferingConstraint>::insert (
    _tao_any,
    TAO::BufferingConstraint::_tao_any_destructor,
    TAO::_tc_BufferingConstraint,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const TAO::BufferingConstraint *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<TAO::BufferingConstraint>::extract (
      _tao_any,
      TAO::BufferingConstraint::_tao_any_destructor,
      TAO::_tc_BufferingConstraint,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


