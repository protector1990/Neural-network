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

#include "CONV_FRAMEA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\alias_typecode.cpp:49

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CONV_FRAME_CodeSetId (
    ::CORBA::tk_alias,
    "IDL:omg.org/CONV_FRAME/CodeSetId:1.0",
    "CodeSetId",
    &CORBA::_tc_ulong);
  

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr const _tc_CodeSetId =
    &_tao_tc_CONV_FRAME_CodeSetId;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\alias_typecode.cpp:49



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_defn.cpp:461


#ifndef _TAO_TYPECODE_CONV_FRAME_CodeSetIdSeq_GUARD
#define _TAO_TYPECODE_CONV_FRAME_CodeSetIdSeq_GUARD


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
        CONV_FRAME_CodeSetIdSeq_0 (
          ::CORBA::tk_sequence,
          &CONV_FRAME::_tc_CodeSetId,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_CONV_FRAME_CodeSetIdSeq_0 =
        &CONV_FRAME_CodeSetIdSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_CONV_FRAME_CodeSetIdSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CONV_FRAME_CodeSetIdSeq (
    ::CORBA::tk_alias,
    "IDL:omg.org/CONV_FRAME/CodeSetIdSeq:1.0",
    "CodeSetIdSeq",
    &TAO::TypeCode::tc_CONV_FRAME_CodeSetIdSeq_0);
  

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr const _tc_CodeSetIdSeq =
    &_tao_tc_CONV_FRAME_CodeSetIdSeq;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:86



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_defn.cpp:461

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_CONV_FRAME_CodeSetComponent[] =
      {
        { "native_code_set", &CONV_FRAME::_tc_CodeSetId },
        { "conversion_code_sets", &CONV_FRAME::_tc_CodeSetIdSeq }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_CONV_FRAME_CodeSetComponent (
  ::CORBA::tk_struct,
  "IDL:omg.org/CONV_FRAME/CodeSetComponent:1.0",
  "CodeSetComponent",
  _tao_fields_CONV_FRAME_CodeSetComponent,
  2);


namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr const _tc_CodeSetComponent =
    &_tao_tc_CONV_FRAME_CodeSetComponent;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_CONV_FRAME_CodeSetComponentInfo[] =
      {
        { "ForCharData", &CONV_FRAME::_tc_CodeSetComponent },
        { "ForWcharData", &CONV_FRAME::_tc_CodeSetComponent }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_CONV_FRAME_CodeSetComponentInfo (
  ::CORBA::tk_struct,
  "IDL:omg.org/CONV_FRAME/CodeSetComponentInfo:1.0",
  "CodeSetComponentInfo",
  _tao_fields_CONV_FRAME_CodeSetComponentInfo,
  2);


namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr const _tc_CodeSetComponentInfo =
    &_tao_tc_CONV_FRAME_CodeSetComponentInfo;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\any_op_cs.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CONV_FRAME
{
  
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::CONV_FRAME::CodeSetIdSeq &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::CONV_FRAME::CodeSetIdSeq>::insert_copy (
        _tao_any,
        ::CONV_FRAME::CodeSetIdSeq::_tao_any_destructor,
        ::CONV_FRAME::_tc_CodeSetIdSeq,
        _tao_elem);
  }

  /// Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::CONV_FRAME::CodeSetIdSeq *_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::CONV_FRAME::CodeSetIdSeq>::insert (
        _tao_any,
        ::CONV_FRAME::CodeSetIdSeq::_tao_any_destructor,
        ::CONV_FRAME::_tc_CodeSetIdSeq,
        _tao_elem);
  }

  /// Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::CONV_FRAME::CodeSetIdSeq *&_tao_elem)
  {
    return
      TAO::Any_Dual_Impl_T< ::CONV_FRAME::CodeSetIdSeq>::extract (
          _tao_any,
          ::CONV_FRAME::CodeSetIdSeq::_tao_any_destructor,
          ::CONV_FRAME::_tc_CodeSetIdSeq,
          _tao_elem);
  }
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


/// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetIdSeq &_tao_elem)
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetIdSeq>::insert_copy (
      _tao_any,
      CONV_FRAME::CodeSetIdSeq::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetIdSeq,
      _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetIdSeq *_tao_elem)
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetIdSeq>::insert (
      _tao_any,
      CONV_FRAME::CodeSetIdSeq::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetIdSeq,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetIdSeq *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetIdSeq>::extract (
        _tao_any,
        CONV_FRAME::CodeSetIdSeq::_tao_any_destructor,
        CONV_FRAME::_tc_CodeSetIdSeq,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CONV_FRAME
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::CONV_FRAME::CodeSetComponent &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::CONV_FRAME::CodeSetComponent>::insert_copy (
        _tao_any,
        ::CONV_FRAME::CodeSetComponent::_tao_any_destructor,
        ::CONV_FRAME::_tc_CodeSetComponent,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    CONV_FRAME::CodeSetComponent *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::CONV_FRAME::CodeSetComponent>::insert (
      _tao_any,
      ::CONV_FRAME::CodeSetComponent::_tao_any_destructor,
      ::CONV_FRAME::_tc_CodeSetComponent,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::CONV_FRAME::CodeSetComponent *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::CONV_FRAME::CodeSetComponent>::extract (
        _tao_any,
        ::CONV_FRAME::CodeSetComponent::_tao_any_destructor,
        ::CONV_FRAME::_tc_CodeSetComponent,
        _tao_elem);
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const CONV_FRAME::CodeSetComponent &_tao_elem)
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>::insert_copy (
    _tao_any,
    CONV_FRAME::CodeSetComponent::_tao_any_destructor,
    CONV_FRAME::_tc_CodeSetComponent,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  CONV_FRAME::CodeSetComponent *_tao_elem)
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>::insert (
    _tao_any,
    CONV_FRAME::CodeSetComponent::_tao_any_destructor,
    CONV_FRAME::_tc_CodeSetComponent,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const CONV_FRAME::CodeSetComponent *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>::extract (
      _tao_any,
      CONV_FRAME::CodeSetComponent::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponent,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CONV_FRAME
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::CONV_FRAME::CodeSetComponentInfo &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::CONV_FRAME::CodeSetComponentInfo>::insert_copy (
        _tao_any,
        ::CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
        ::CONV_FRAME::_tc_CodeSetComponentInfo,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    CONV_FRAME::CodeSetComponentInfo *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::CONV_FRAME::CodeSetComponentInfo>::insert (
      _tao_any,
      ::CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
      ::CONV_FRAME::_tc_CodeSetComponentInfo,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::CONV_FRAME::CodeSetComponentInfo *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::CONV_FRAME::CodeSetComponentInfo>::extract (
        _tao_any,
        ::CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
        ::CONV_FRAME::_tc_CodeSetComponentInfo,
        _tao_elem);
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const CONV_FRAME::CodeSetComponentInfo &_tao_elem)
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>::insert_copy (
    _tao_any,
    CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
    CONV_FRAME::_tc_CodeSetComponentInfo,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  CONV_FRAME::CodeSetComponentInfo *_tao_elem)
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>::insert (
    _tao_any,
    CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
    CONV_FRAME::_tc_CodeSetComponentInfo,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const CONV_FRAME::CodeSetComponentInfo *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>::extract (
      _tao_any,
      CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponentInfo,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


