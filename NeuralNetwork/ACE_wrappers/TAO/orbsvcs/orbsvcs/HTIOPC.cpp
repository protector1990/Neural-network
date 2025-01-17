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


#include "HTIOPC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "HTIOPC.inl"
#endif /* !defined INLINE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_HTIOP_ListenPoint[] =
      {
        { "host", &CORBA::_tc_string },
        { "port", &CORBA::_tc_ushort },
        { "htid", &CORBA::_tc_string }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_HTIOP_ListenPoint (
  ::CORBA::tk_struct,
  "IDL:omg.org/HTIOP/ListenPoint:1.0",
  "ListenPoint",
  _tao_fields_HTIOP_ListenPoint,
  3);


namespace HTIOP
{
  ::CORBA::TypeCode_ptr const _tc_ListenPoint =
    &_tao_tc_HTIOP_ListenPoint;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_cs.cpp:56

void
HTIOP::ListenPoint::_tao_any_destructor (
    void *_tao_void_pointer)
{
  ListenPoint *_tao_tmp_pointer =
    static_cast<ListenPoint *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:105

#if !defined (_HTIOP_LISTENPOINTLIST_CS_)
#define _HTIOP_LISTENPOINTLIST_CS_

HTIOP::ListenPointList::ListenPointList (void)
{}

HTIOP::ListenPointList::ListenPointList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< ListenPoint> (max)
{}

HTIOP::ListenPointList::ListenPointList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    HTIOP::ListenPoint * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_value_sequence< ListenPoint>
    (max, length, buffer, release)
{}

HTIOP::ListenPointList::ListenPointList (
    const ListenPointList &seq)
  : ::TAO::unbounded_value_sequence< ListenPoint> (seq)
{}

HTIOP::ListenPointList::~ListenPointList (void)
{}

void HTIOP::ListenPointList::_tao_any_destructor (
    void * _tao_void_pointer)
{
  ListenPointList * _tao_tmp_pointer =
    static_cast<ListenPointList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\alias_typecode.cpp:49



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_defn.cpp:461


#ifndef _TAO_TYPECODE_HTIOP_ListenPointList_GUARD
#define _TAO_TYPECODE_HTIOP_ListenPointList_GUARD


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
        HTIOP_ListenPointList_0 (
          ::CORBA::tk_sequence,
          &HTIOP::_tc_ListenPoint,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_HTIOP_ListenPointList_0 =
        &HTIOP_ListenPointList_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_HTIOP_ListenPointList_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_HTIOP_ListenPointList (
    ::CORBA::tk_alias,
    "IDL:omg.org/HTIOP/ListenPointList:1.0",
    "ListenPointList",
    &TAO::TypeCode::tc_HTIOP_ListenPointList_0);
  

namespace HTIOP
{
  ::CORBA::TypeCode_ptr const _tc_ListenPointList =
    &_tao_tc_HTIOP_ListenPointList;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:86



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_defn.cpp:461

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_HTIOP_BiDirHTIOPServiceContext[] =
      {
        { "listen_points", &HTIOP::_tc_ListenPointList }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_HTIOP_BiDirHTIOPServiceContext (
  ::CORBA::tk_struct,
  "IDL:omg.org/HTIOP/BiDirHTIOPServiceContext:1.0",
  "BiDirHTIOPServiceContext",
  _tao_fields_HTIOP_BiDirHTIOPServiceContext,
  1);


namespace HTIOP
{
  ::CORBA::TypeCode_ptr const _tc_BiDirHTIOPServiceContext =
    &_tao_tc_HTIOP_BiDirHTIOPServiceContext;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_cs.cpp:56

void
HTIOP::BiDirHTIOPServiceContext::_tao_any_destructor (
    void *_tao_void_pointer)
{
  BiDirHTIOPServiceContext *_tao_tmp_pointer =
    static_cast<BiDirHTIOPServiceContext *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace HTIOP
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::HTIOP::ListenPoint &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::HTIOP::ListenPoint>::insert_copy (
        _tao_any,
        ::HTIOP::ListenPoint::_tao_any_destructor,
        ::HTIOP::_tc_ListenPoint,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    HTIOP::ListenPoint *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::HTIOP::ListenPoint>::insert (
      _tao_any,
      ::HTIOP::ListenPoint::_tao_any_destructor,
      ::HTIOP::_tc_ListenPoint,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::HTIOP::ListenPoint *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::HTIOP::ListenPoint>::extract (
        _tao_any,
        ::HTIOP::ListenPoint::_tao_any_destructor,
        ::HTIOP::_tc_ListenPoint,
        _tao_elem);
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const HTIOP::ListenPoint &_tao_elem)
{
  TAO::Any_Dual_Impl_T<HTIOP::ListenPoint>::insert_copy (
    _tao_any,
    HTIOP::ListenPoint::_tao_any_destructor,
    HTIOP::_tc_ListenPoint,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  HTIOP::ListenPoint *_tao_elem)
{
  TAO::Any_Dual_Impl_T<HTIOP::ListenPoint>::insert (
    _tao_any,
    HTIOP::ListenPoint::_tao_any_destructor,
    HTIOP::_tc_ListenPoint,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const HTIOP::ListenPoint *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<HTIOP::ListenPoint>::extract (
      _tao_any,
      HTIOP::ListenPoint::_tao_any_destructor,
      HTIOP::_tc_ListenPoint,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\any_op_cs.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace HTIOP
{
  
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::HTIOP::ListenPointList &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::HTIOP::ListenPointList>::insert_copy (
        _tao_any,
        ::HTIOP::ListenPointList::_tao_any_destructor,
        ::HTIOP::_tc_ListenPointList,
        _tao_elem);
  }

  /// Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::HTIOP::ListenPointList *_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::HTIOP::ListenPointList>::insert (
        _tao_any,
        ::HTIOP::ListenPointList::_tao_any_destructor,
        ::HTIOP::_tc_ListenPointList,
        _tao_elem);
  }

  /// Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::HTIOP::ListenPointList *&_tao_elem)
  {
    return
      TAO::Any_Dual_Impl_T< ::HTIOP::ListenPointList>::extract (
          _tao_any,
          ::HTIOP::ListenPointList::_tao_any_destructor,
          ::HTIOP::_tc_ListenPointList,
          _tao_elem);
  }
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


/// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const HTIOP::ListenPointList &_tao_elem)
{
  TAO::Any_Dual_Impl_T<HTIOP::ListenPointList>::insert_copy (
      _tao_any,
      HTIOP::ListenPointList::_tao_any_destructor,
      HTIOP::_tc_ListenPointList,
      _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    HTIOP::ListenPointList *_tao_elem)
{
  TAO::Any_Dual_Impl_T<HTIOP::ListenPointList>::insert (
      _tao_any,
      HTIOP::ListenPointList::_tao_any_destructor,
      HTIOP::_tc_ListenPointList,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const HTIOP::ListenPointList *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<HTIOP::ListenPointList>::extract (
        _tao_any,
        HTIOP::ListenPointList::_tao_any_destructor,
        HTIOP::_tc_ListenPointList,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace HTIOP
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::HTIOP::BiDirHTIOPServiceContext &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::HTIOP::BiDirHTIOPServiceContext>::insert_copy (
        _tao_any,
        ::HTIOP::BiDirHTIOPServiceContext::_tao_any_destructor,
        ::HTIOP::_tc_BiDirHTIOPServiceContext,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    HTIOP::BiDirHTIOPServiceContext *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::HTIOP::BiDirHTIOPServiceContext>::insert (
      _tao_any,
      ::HTIOP::BiDirHTIOPServiceContext::_tao_any_destructor,
      ::HTIOP::_tc_BiDirHTIOPServiceContext,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::HTIOP::BiDirHTIOPServiceContext *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::HTIOP::BiDirHTIOPServiceContext>::extract (
        _tao_any,
        ::HTIOP::BiDirHTIOPServiceContext::_tao_any_destructor,
        ::HTIOP::_tc_BiDirHTIOPServiceContext,
        _tao_elem);
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const HTIOP::BiDirHTIOPServiceContext &_tao_elem)
{
  TAO::Any_Dual_Impl_T<HTIOP::BiDirHTIOPServiceContext>::insert_copy (
    _tao_any,
    HTIOP::BiDirHTIOPServiceContext::_tao_any_destructor,
    HTIOP::_tc_BiDirHTIOPServiceContext,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  HTIOP::BiDirHTIOPServiceContext *_tao_elem)
{
  TAO::Any_Dual_Impl_T<HTIOP::BiDirHTIOPServiceContext>::insert (
    _tao_any,
    HTIOP::BiDirHTIOPServiceContext::_tao_any_destructor,
    HTIOP::_tc_BiDirHTIOPServiceContext,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const HTIOP::BiDirHTIOPServiceContext *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<HTIOP::BiDirHTIOPServiceContext>::extract (
      _tao_any,
      HTIOP::BiDirHTIOPServiceContext::_tao_any_destructor,
      HTIOP::_tc_BiDirHTIOPServiceContext,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:49


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const HTIOP::ListenPoint &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.host.in ()) &&
    (strm << _tao_aggregate.port) &&
    (strm << _tao_aggregate.htid.in ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    HTIOP::ListenPoint &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.host.out ()) &&
    (strm >> _tao_aggregate.port) &&
    (strm >> _tao_aggregate.htid.out ());
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_HTIOP_ListenPointList_CPP_
#define _TAO_CDR_OP_HTIOP_ListenPointList_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const HTIOP::ListenPointList &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    HTIOP::ListenPointList &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_HTIOP_ListenPointList_CPP_ */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:49


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const HTIOP::BiDirHTIOPServiceContext &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.listen_points);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    HTIOP::BiDirHTIOPServiceContext &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.listen_points);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


