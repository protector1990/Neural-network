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


#include "POAManagerFactoryC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/SystemException.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for PortableServer::POAManagerFactory.

PortableServer::POAManagerFactory_ptr
TAO::Objref_Traits<PortableServer::POAManagerFactory>::duplicate (
    PortableServer::POAManagerFactory_ptr p)
{
  return PortableServer::POAManagerFactory::_duplicate (p);
}

void
TAO::Objref_Traits<PortableServer::POAManagerFactory>::release (
    PortableServer::POAManagerFactory_ptr p)
{
  ::CORBA::release (p);
}

PortableServer::POAManagerFactory_ptr
TAO::Objref_Traits<PortableServer::POAManagerFactory>::nil (void)
{
  return PortableServer::POAManagerFactory::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableServer::POAManagerFactory>::marshal (
    const PortableServer::POAManagerFactory_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:105

#if !defined (_PORTABLESERVER_POAMANAGERFACTORY_POAMANAGERSEQ_CS_)
#define _PORTABLESERVER_POAMANAGERFACTORY_POAMANAGERSEQ_CS_

PortableServer::POAManagerFactory::POAManagerSeq::POAManagerSeq (void)
{}

PortableServer::POAManagerFactory::POAManagerSeq::POAManagerSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_object_reference_sequence<
        PortableServer::POAManager,
        PortableServer::POAManager_var
      > (max)
{}

PortableServer::POAManagerFactory::POAManagerSeq::POAManagerSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    PortableServer::POAManager_ptr * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_object_reference_sequence<
        PortableServer::POAManager,
        PortableServer::POAManager_var
      >
    (max, length, buffer, release)
{}

PortableServer::POAManagerFactory::POAManagerSeq::POAManagerSeq (
    const POAManagerSeq &seq)
  : ::TAO::unbounded_object_reference_sequence<
        PortableServer::POAManager,
        PortableServer::POAManager_var
      > (seq)
{}

PortableServer::POAManagerFactory::POAManagerSeq::~POAManagerSeq (void)
{}

void PortableServer::POAManagerFactory::POAManagerSeq::_tao_any_destructor (
    void * _tao_void_pointer)
{
  POAManagerSeq * _tao_tmp_pointer =
    static_cast<POAManagerSeq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\alias_typecode.cpp:49



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_defn.cpp:461


namespace PortableServer
{
  extern ::CORBA::TypeCode_ptr const _tc_POAManager;
}

#ifndef _TAO_TYPECODE_PortableServer_POAManagerFactory_POAManagerSeq_GUARD
#define _TAO_TYPECODE_PortableServer_POAManagerFactory_POAManagerSeq_GUARD


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        PortableServer_POAManagerFactory_POAManagerSeq_0 (
          ::CORBA::tk_sequence,
          &PortableServer::_tc_POAManager,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_PortableServer_POAManagerFactory_POAManagerSeq_0 =
        &PortableServer_POAManagerFactory_POAManagerSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_PortableServer_POAManagerFactory_POAManagerSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_PortableServer_POAManagerFactory_POAManagerSeq (
    ::CORBA::tk_alias,
    "IDL:omg.org/PortableServer/POAManagerFactory/POAManagerSeq:2.3",
    "POAManagerSeq",
    &TAO::TypeCode::tc_PortableServer_POAManagerFactory_POAManagerSeq_0);
  
::CORBA::TypeCode_ptr const PortableServer::POAManagerFactory::_tc_POAManagerSeq =
  &_tao_tc_PortableServer_POAManagerFactory_POAManagerSeq;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\exception_cs.cpp:98

PortableServer::POAManagerFactory::ManagerAlreadyExists::ManagerAlreadyExists (void)
  : ::CORBA::UserException (
        "IDL:omg.org/PortableServer/POAManagerFactory/ManagerAlreadyExists:2.3",
        "ManagerAlreadyExists")
{
}

PortableServer::POAManagerFactory::ManagerAlreadyExists::~ManagerAlreadyExists (void)
{
}

PortableServer::POAManagerFactory::ManagerAlreadyExists::ManagerAlreadyExists (const ::PortableServer::POAManagerFactory::ManagerAlreadyExists &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ())
{
}

PortableServer::POAManagerFactory::ManagerAlreadyExists&
PortableServer::POAManagerFactory::ManagerAlreadyExists::operator= (const ::PortableServer::POAManagerFactory::ManagerAlreadyExists &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

void PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_any_destructor (void *_tao_void_pointer)
{
  ManagerAlreadyExists *_tao_tmp_pointer =
    static_cast<ManagerAlreadyExists *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

PortableServer::POAManagerFactory::ManagerAlreadyExists *
PortableServer::POAManagerFactory::ManagerAlreadyExists::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<ManagerAlreadyExists *> (_tao_excp);
}

const PortableServer::POAManagerFactory::ManagerAlreadyExists *
PortableServer::POAManagerFactory::ManagerAlreadyExists::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const ManagerAlreadyExists *> (_tao_excp);
}

::CORBA::Exception *PortableServer::POAManagerFactory::ManagerAlreadyExists::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::PortableServer::POAManagerFactory::ManagerAlreadyExists, 0);
  return retval;
}

::CORBA::Exception *
PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::PortableServer::POAManagerFactory::ManagerAlreadyExists (*this),
      0);
  return result;
}

void PortableServer::POAManagerFactory::ManagerAlreadyExists::_raise (void) const
{
  throw *this;
}

void PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_encode (TAO_OutputCDR &) const
{
  throw ::CORBA::MARSHAL ();
}

void PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_decode (TAO_InputCDR &)
{
  throw ::CORBA::MARSHAL ();
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_type (void) const
{
  return ::PortableServer::POAManagerFactory::_tc_ManagerAlreadyExists;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const * const 
    _tao_fields_PortableServer_POAManagerFactory_ManagerAlreadyExists = 0;
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_PortableServer_POAManagerFactory_ManagerAlreadyExists (
  ::CORBA::tk_except,
  "IDL:omg.org/PortableServer/POAManagerFactory/ManagerAlreadyExists:2.3",
  "ManagerAlreadyExists",
  _tao_fields_PortableServer_POAManagerFactory_ManagerAlreadyExists,
  0);

::CORBA::TypeCode_ptr const PortableServer::POAManagerFactory::_tc_ManagerAlreadyExists =
  &_tao_tc_PortableServer_POAManagerFactory_ManagerAlreadyExists;

PortableServer::POAManagerFactory::POAManagerFactory (void)
{}

PortableServer::POAManagerFactory::~POAManagerFactory (void)
{
}

void
PortableServer::POAManagerFactory::_tao_any_destructor (void *_tao_void_pointer)
{
  POAManagerFactory *_tao_tmp_pointer =
    static_cast<POAManagerFactory *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

PortableServer::POAManagerFactory_ptr
PortableServer::POAManagerFactory::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return POAManagerFactory::_duplicate (
      dynamic_cast<POAManagerFactory_ptr> (_tao_objref));
}

PortableServer::POAManagerFactory_ptr
PortableServer::POAManagerFactory::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return POAManagerFactory::_duplicate (
      dynamic_cast<POAManagerFactory_ptr> (_tao_objref));
}

PortableServer::POAManagerFactory_ptr
PortableServer::POAManagerFactory::_nil (void)
{
  return 0;
}

PortableServer::POAManagerFactory_ptr
PortableServer::POAManagerFactory::_duplicate (POAManagerFactory_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
PortableServer::POAManagerFactory::_tao_release (POAManagerFactory_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableServer::POAManagerFactory::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableServer/POAManagerFactory:2.3"
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

const char* PortableServer::POAManagerFactory::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableServer/POAManagerFactory:2.3";
}

::CORBA::Boolean
PortableServer::POAManagerFactory::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_PortableServer_POAManagerFactory (
    ::CORBA::tk_local_interface,
    "IDL:omg.org/PortableServer/POAManagerFactory:2.3",
    "POAManagerFactory");
  

namespace PortableServer
{
  ::CORBA::TypeCode_ptr const _tc_POAManagerFactory =
    &_tao_tc_PortableServer_POAManagerFactory;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_cs.cpp:38

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<PortableServer::POAManagerFactory>::to_object (
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
  Any_Impl_T<PortableServer::POAManagerFactory>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<PortableServer::POAManagerFactory>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace PortableServer
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      POAManagerFactory_ptr _tao_elem)
  {
    POAManagerFactory_ptr _tao_objptr =
      POAManagerFactory::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      POAManagerFactory_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<POAManagerFactory>::insert (
        _tao_any,
        POAManagerFactory::_tao_any_destructor,
        _tc_POAManagerFactory,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      POAManagerFactory_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<POAManagerFactory>::extract (
          _tao_any,
          POAManagerFactory::_tao_any_destructor,
          _tc_POAManagerFactory,
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
    PortableServer::POAManagerFactory_ptr _tao_elem)
{
  PortableServer::POAManagerFactory_ptr _tao_objptr =
    PortableServer::POAManagerFactory::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    PortableServer::POAManagerFactory_ptr *_tao_elem)
{
  TAO::Any_Impl_T<PortableServer::POAManagerFactory>::insert (
      _tao_any,
      PortableServer::POAManagerFactory::_tao_any_destructor,
      PortableServer::_tc_POAManagerFactory,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    PortableServer::POAManagerFactory_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<PortableServer::POAManagerFactory>::extract (
        _tao_any,
        PortableServer::POAManagerFactory::_tao_any_destructor,
        PortableServer::_tc_POAManagerFactory,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\any_op_cs.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<PortableServer::POAManagerFactory::POAManagerSeq>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<PortableServer::POAManagerFactory::POAManagerSeq>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace PortableServer
{
  
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::PortableServer::POAManagerFactory::POAManagerSeq &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::PortableServer::POAManagerFactory::POAManagerSeq>::insert_copy (
        _tao_any,
        ::PortableServer::POAManagerFactory::POAManagerSeq::_tao_any_destructor,
        ::PortableServer::POAManagerFactory::_tc_POAManagerSeq,
        _tao_elem);
  }

  /// Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::PortableServer::POAManagerFactory::POAManagerSeq *_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::PortableServer::POAManagerFactory::POAManagerSeq>::insert (
        _tao_any,
        ::PortableServer::POAManagerFactory::POAManagerSeq::_tao_any_destructor,
        ::PortableServer::POAManagerFactory::_tc_POAManagerSeq,
        _tao_elem);
  }

  /// Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::PortableServer::POAManagerFactory::POAManagerSeq *&_tao_elem)
  {
    return
      TAO::Any_Dual_Impl_T< ::PortableServer::POAManagerFactory::POAManagerSeq>::extract (
          _tao_any,
          ::PortableServer::POAManagerFactory::POAManagerSeq::_tao_any_destructor,
          ::PortableServer::POAManagerFactory::_tc_POAManagerSeq,
          _tao_elem);
  }
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


/// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const PortableServer::POAManagerFactory::POAManagerSeq &_tao_elem)
{
  TAO::Any_Dual_Impl_T<PortableServer::POAManagerFactory::POAManagerSeq>::insert_copy (
      _tao_any,
      PortableServer::POAManagerFactory::POAManagerSeq::_tao_any_destructor,
      PortableServer::POAManagerFactory::_tc_POAManagerSeq,
      _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    PortableServer::POAManagerFactory::POAManagerSeq *_tao_elem)
{
  TAO::Any_Dual_Impl_T<PortableServer::POAManagerFactory::POAManagerSeq>::insert (
      _tao_any,
      PortableServer::POAManagerFactory::POAManagerSeq::_tao_any_destructor,
      PortableServer::POAManagerFactory::_tc_POAManagerSeq,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const PortableServer::POAManagerFactory::POAManagerSeq *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<PortableServer::POAManagerFactory::POAManagerSeq>::extract (
        _tao_any,
        PortableServer::POAManagerFactory::POAManagerSeq::_tao_any_destructor,
        PortableServer::POAManagerFactory::_tc_POAManagerSeq,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\any_op_cs.cpp:38

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<PortableServer::POAManagerFactory::ManagerAlreadyExists>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<PortableServer::POAManagerFactory::ManagerAlreadyExists>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace PortableServer
{
  

  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::PortableServer::POAManagerFactory::ManagerAlreadyExists &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::PortableServer::POAManagerFactory::ManagerAlreadyExists>::insert_copy (
        _tao_any,
        ::PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_any_destructor,
        ::PortableServer::POAManagerFactory::_tc_ManagerAlreadyExists,
        _tao_elem);
  }

  /// Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::PortableServer::POAManagerFactory::ManagerAlreadyExists *_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::PortableServer::POAManagerFactory::ManagerAlreadyExists>::insert (
        _tao_any,
        ::PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_any_destructor,
        ::PortableServer::POAManagerFactory::_tc_ManagerAlreadyExists,
        _tao_elem);
  }

  /// Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::PortableServer::POAManagerFactory::ManagerAlreadyExists *&_tao_elem)
  {
    return
      TAO::Any_Dual_Impl_T< ::PortableServer::POAManagerFactory::ManagerAlreadyExists>::extract (
          _tao_any,
          ::PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_any_destructor,
          ::PortableServer::POAManagerFactory::_tc_ManagerAlreadyExists,
          _tao_elem);
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const PortableServer::POAManagerFactory::ManagerAlreadyExists &_tao_elem)
{
  TAO::Any_Dual_Impl_T<PortableServer::POAManagerFactory::ManagerAlreadyExists>::insert_copy (
      _tao_any,
      PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_any_destructor,
      PortableServer::POAManagerFactory::_tc_ManagerAlreadyExists,
      _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    PortableServer::POAManagerFactory::ManagerAlreadyExists *_tao_elem)
{
  TAO::Any_Dual_Impl_T<PortableServer::POAManagerFactory::ManagerAlreadyExists>::insert (
      _tao_any,
      PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_any_destructor,
      PortableServer::POAManagerFactory::_tc_ManagerAlreadyExists,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const PortableServer::POAManagerFactory::ManagerAlreadyExists *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<PortableServer::POAManagerFactory::ManagerAlreadyExists>::extract (
        _tao_any,
        PortableServer::POAManagerFactory::ManagerAlreadyExists::_tao_any_destructor,
        PortableServer::POAManagerFactory::_tc_ManagerAlreadyExists,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif


TAO_END_VERSIONED_NAMESPACE_DECL

