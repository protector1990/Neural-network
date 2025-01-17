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

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:366


#include "TypeCodeFactoryC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for CORBA::TypeCodeFactory.

CORBA::TypeCodeFactory_ptr
TAO::Objref_Traits<CORBA::TypeCodeFactory>::duplicate (
    CORBA::TypeCodeFactory_ptr p)
{
  return CORBA::TypeCodeFactory::_duplicate (p);
}

void
TAO::Objref_Traits<CORBA::TypeCodeFactory>::release (
    CORBA::TypeCodeFactory_ptr p)
{
  ::CORBA::release (p);
}

CORBA::TypeCodeFactory_ptr
TAO::Objref_Traits<CORBA::TypeCodeFactory>::nil (void)
{
  return CORBA::TypeCodeFactory::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<CORBA::TypeCodeFactory>::marshal (
    const CORBA::TypeCodeFactory_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




CORBA::TypeCodeFactory::TypeCodeFactory (void)
{}

CORBA::TypeCodeFactory::~TypeCodeFactory (void)
{
}

void
CORBA::TypeCodeFactory::_tao_any_destructor (void *_tao_void_pointer)
{
  TypeCodeFactory *_tao_tmp_pointer =
    static_cast<TypeCodeFactory *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

CORBA::TypeCodeFactory_ptr
CORBA::TypeCodeFactory::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TypeCodeFactory::_duplicate (
      dynamic_cast<TypeCodeFactory_ptr> (_tao_objref));
}

CORBA::TypeCodeFactory_ptr
CORBA::TypeCodeFactory::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TypeCodeFactory::_duplicate (
      dynamic_cast<TypeCodeFactory_ptr> (_tao_objref));
}

CORBA::TypeCodeFactory_ptr
CORBA::TypeCodeFactory::_nil (void)
{
  return 0;
}

CORBA::TypeCodeFactory_ptr
CORBA::TypeCodeFactory::_duplicate (TypeCodeFactory_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
CORBA::TypeCodeFactory::_tao_release (TypeCodeFactory_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
CORBA::TypeCodeFactory::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/TypeCodeFactory:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* CORBA::TypeCodeFactory::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/TypeCodeFactory:1.0";
}

::CORBA::Boolean
CORBA::TypeCodeFactory::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_TypeCodeFactory (
    ::CORBA::tk_local_interface,
    "IDL:omg.org/CORBA/TypeCodeFactory:1.0",
    "TypeCodeFactory");
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_TypeCodeFactory =
    &_tao_tc_CORBA_TypeCodeFactory;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_cs.cpp:38

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<CORBA::TypeCodeFactory>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<CORBA::TypeCodeFactory>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<CORBA::TypeCodeFactory>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CORBA
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      TypeCodeFactory_ptr _tao_elem)
  {
    TypeCodeFactory_ptr _tao_objptr =
      TypeCodeFactory::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      TypeCodeFactory_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<TypeCodeFactory>::insert (
        _tao_any,
        TypeCodeFactory::_tao_any_destructor,
        _tc_TypeCodeFactory,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      TypeCodeFactory_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<TypeCodeFactory>::extract (
          _tao_any,
          TypeCodeFactory::_tao_any_destructor,
          _tc_TypeCodeFactory,
          _tao_elem);
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CORBA::TypeCodeFactory_ptr _tao_elem)
{
  CORBA::TypeCodeFactory_ptr _tao_objptr =
    CORBA::TypeCodeFactory::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CORBA::TypeCodeFactory_ptr *_tao_elem)
{
  TAO::Any_Impl_T<CORBA::TypeCodeFactory>::insert (
      _tao_any,
      CORBA::TypeCodeFactory::_tao_any_destructor,
      CORBA::_tc_TypeCodeFactory,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    CORBA::TypeCodeFactory_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<CORBA::TypeCodeFactory>::extract (
        _tao_any,
        CORBA::TypeCodeFactory::_tao_any_destructor,
        CORBA::_tc_TypeCodeFactory,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif


TAO_END_VERSIONED_NAMESPACE_DECL


