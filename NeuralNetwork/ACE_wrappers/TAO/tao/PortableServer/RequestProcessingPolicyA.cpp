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

#include "RequestProcessingPolicyA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Enum_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Basic_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\enum_typecode.cpp:29
static char const * const _tao_enumerators_PortableServer_RequestProcessingPolicyValue[] =
  {
    "USE_ACTIVE_OBJECT_MAP_ONLY",
    "USE_DEFAULT_SERVANT",
    "USE_SERVANT_MANAGER"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_PortableServer_RequestProcessingPolicyValue (
    "IDL:omg.org/PortableServer/RequestProcessingPolicyValue:2.3",
    "RequestProcessingPolicyValue",
    _tao_enumerators_PortableServer_RequestProcessingPolicyValue,
    3);
  

namespace PortableServer
{
  ::CORBA::TypeCode_ptr const _tc_RequestProcessingPolicyValue =
    &_tao_tc_PortableServer_RequestProcessingPolicyValue;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_PortableServer_RequestProcessingPolicy (
    ::CORBA::tk_local_interface,
    "IDL:omg.org/PortableServer/RequestProcessingPolicy:2.3",
    "RequestProcessingPolicy");
  

namespace PortableServer
{
  ::CORBA::TypeCode_ptr const _tc_RequestProcessingPolicy =
    &_tao_tc_PortableServer_RequestProcessingPolicy;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\any_op_cs.cpp:35


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace PortableServer
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::PortableServer::RequestProcessingPolicyValue _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::PortableServer::RequestProcessingPolicyValue>::insert (
        _tao_any,
        ::PortableServer::_tc_RequestProcessingPolicyValue,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::PortableServer::RequestProcessingPolicyValue &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::PortableServer::RequestProcessingPolicyValue>::extract (
          _tao_any,
          ::PortableServer::_tc_RequestProcessingPolicyValue,
          _tao_elem 
        );
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    PortableServer::RequestProcessingPolicyValue _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<PortableServer::RequestProcessingPolicyValue>::insert (
      _tao_any,
      PortableServer::_tc_RequestProcessingPolicyValue,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    PortableServer::RequestProcessingPolicyValue &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<PortableServer::RequestProcessingPolicyValue>::extract (
        _tao_any,
        PortableServer::_tc_RequestProcessingPolicyValue,
        _tao_elem 
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


