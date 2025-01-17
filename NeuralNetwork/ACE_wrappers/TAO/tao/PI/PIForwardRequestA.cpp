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

#include "PIForwardRequestA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr PortableInterceptor::ForwardRequest::_tao_type (void) const
{
  return ::PortableInterceptor::_tc_ForwardRequest;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_PortableInterceptor_ForwardRequest[] =
      {
        { "forward", &CORBA::_tc_Object }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_PortableInterceptor_ForwardRequest (
  ::CORBA::tk_except,
  "IDL:omg.org/PortableInterceptor/ForwardRequest:1.0",
  "ForwardRequest",
  _tao_fields_PortableInterceptor_ForwardRequest,
  1);


namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr const _tc_ForwardRequest =
    &_tao_tc_PortableInterceptor_ForwardRequest;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\any_op_cs.cpp:38

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<PortableInterceptor::ForwardRequest>::demarshal_value (TAO_InputCDR & cdr)
  {
    ::CORBA::String_var id;

    if (!(cdr >> id.out ()))
      {
        return false;
      }
    
    try
      {
        this->value_->_tao_decode (cdr);
      }
    catch (const ::CORBA::Exception &)
      {
        return false;
      }

    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace PortableInterceptor
{
  

  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::PortableInterceptor::ForwardRequest &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::PortableInterceptor::ForwardRequest>::insert_copy (
        _tao_any,
        ::PortableInterceptor::ForwardRequest::_tao_any_destructor,
        ::PortableInterceptor::_tc_ForwardRequest,
        _tao_elem);
  }

  /// Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::PortableInterceptor::ForwardRequest *_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::PortableInterceptor::ForwardRequest>::insert (
        _tao_any,
        ::PortableInterceptor::ForwardRequest::_tao_any_destructor,
        ::PortableInterceptor::_tc_ForwardRequest,
        _tao_elem);
  }

  /// Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::PortableInterceptor::ForwardRequest *&_tao_elem)
  {
    return
      TAO::Any_Dual_Impl_T< ::PortableInterceptor::ForwardRequest>::extract (
          _tao_any,
          ::PortableInterceptor::ForwardRequest::_tao_any_destructor,
          ::PortableInterceptor::_tc_ForwardRequest,
          _tao_elem);
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const PortableInterceptor::ForwardRequest &_tao_elem)
{
  TAO::Any_Dual_Impl_T<PortableInterceptor::ForwardRequest>::insert_copy (
      _tao_any,
      PortableInterceptor::ForwardRequest::_tao_any_destructor,
      PortableInterceptor::_tc_ForwardRequest,
      _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    PortableInterceptor::ForwardRequest *_tao_elem)
{
  TAO::Any_Dual_Impl_T<PortableInterceptor::ForwardRequest>::insert (
      _tao_any,
      PortableInterceptor::ForwardRequest::_tao_any_destructor,
      PortableInterceptor::_tc_ForwardRequest,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const PortableInterceptor::ForwardRequest *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<PortableInterceptor::ForwardRequest>::extract (
        _tao_any,
        PortableInterceptor::ForwardRequest::_tao_any_destructor,
        PortableInterceptor::_tc_ForwardRequest,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


