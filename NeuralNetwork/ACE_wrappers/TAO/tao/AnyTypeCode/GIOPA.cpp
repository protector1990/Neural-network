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

#include "GIOPA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Enum_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/AnyTypeCode/TypeCode_Case_T.h"
#include "tao/AnyTypeCode/Union_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "tao/AnyTypeCode/Any_Basic_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\alias_typecode.cpp:49

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_GIOP_AddressingDisposition (
    ::CORBA::tk_alias,
    "IDL:omg.org/GIOP/AddressingDisposition:1.0",
    "AddressingDisposition",
    &CORBA::_tc_short);
  

namespace GIOP
{
  ::CORBA::TypeCode_ptr const _tc_AddressingDisposition =
    &_tao_tc_GIOP_AddressingDisposition;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_GIOP_Version[] =
      {
        { "major", &CORBA::_tc_octet },
        { "minor", &CORBA::_tc_octet }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_GIOP_Version (
  ::CORBA::tk_struct,
  "IDL:omg.org/GIOP/Version:1.0",
  "Version",
  _tao_fields_GIOP_Version,
  2);


namespace GIOP
{
  ::CORBA::TypeCode_ptr const _tc_Version =
    &_tao_tc_GIOP_Version;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_GIOP_IORAddressingInfo[] =
      {
        { "selected_profile_index", &CORBA::_tc_ulong },
        { "ior", &IOP::_tc_IOR }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_GIOP_IORAddressingInfo (
  ::CORBA::tk_struct,
  "IDL:omg.org/GIOP/IORAddressingInfo:1.0",
  "IORAddressingInfo",
  _tao_fields_GIOP_IORAddressingInfo,
  2);


namespace GIOP
{
  ::CORBA::TypeCode_ptr const _tc_IORAddressingInfo =
    &_tao_tc_GIOP_IORAddressingInfo;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\union_typecode.cpp:65



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_defn.cpp:461

static TAO::TypeCode::Case_T<CORBA::Short, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_GIOP_TargetAddress__0 (0, "object_key", &CORBA::_tc_OctetSeq);
static TAO::TypeCode::Case_T<CORBA::Short, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_GIOP_TargetAddress__1 (1, "profile", &IOP::_tc_TaggedProfile);
static TAO::TypeCode::Case_T<CORBA::Short, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_GIOP_TargetAddress__2 (2, "ior", &GIOP::_tc_IORAddressingInfo);

static TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_cases_GIOP_TargetAddress[] =
  {
    &_tao_cases_GIOP_TargetAddress__0,
    &_tao_cases_GIOP_TargetAddress__1,
    &_tao_cases_GIOP_TargetAddress__2
  };

static TAO::TypeCode::Union<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_GIOP_TargetAddress (
    "IDL:omg.org/GIOP/TargetAddress:1.0",
    "TargetAddress",
    &CORBA::_tc_short,
    _tao_cases_GIOP_TargetAddress,
    sizeof (_tao_cases_GIOP_TargetAddress)/sizeof (_tao_cases_GIOP_TargetAddress[0]),
    -1);
  

namespace GIOP
{
  ::CORBA::TypeCode_ptr const _tc_TargetAddress =
    &_tao_tc_GIOP_TargetAddress;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\enum_typecode.cpp:29
static char const * const _tao_enumerators_GIOP_MsgType[] =
  {
    "Request",
    "Reply",
    "CancelRequest",
    "LocateRequest",
    "LocateReply",
    "CloseConnection",
    "MessageError",
    "Fragment"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_GIOP_MsgType (
    "IDL:omg.org/GIOP/MsgType:1.0",
    "MsgType",
    _tao_enumerators_GIOP_MsgType,
    8);
  

namespace GIOP
{
  ::CORBA::TypeCode_ptr const _tc_MsgType =
    &_tao_tc_GIOP_MsgType;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\enum_typecode.cpp:29
static char const * const _tao_enumerators_GIOP_ReplyStatusType[] =
  {
    "NO_EXCEPTION",
    "USER_EXCEPTION",
    "SYSTEM_EXCEPTION",
    "LOCATION_FORWARD",
    "LOCATION_FORWARD_PERM",
    "NEEDS_ADDRESSING_MODE"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_GIOP_ReplyStatusType (
    "IDL:omg.org/GIOP/ReplyStatusType:1.0",
    "ReplyStatusType",
    _tao_enumerators_GIOP_ReplyStatusType,
    6);
  

namespace GIOP
{
  ::CORBA::TypeCode_ptr const _tc_ReplyStatusType =
    &_tao_tc_GIOP_ReplyStatusType;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\enum_typecode.cpp:29
static char const * const _tao_enumerators_GIOP_LocateStatusType[] =
  {
    "UNKNOWN_OBJECT",
    "OBJECT_HERE",
    "OBJECT_FORWARD",
    "OBJECT_FORWARD_PERM",
    "LOC_SYSTEM_EXCEPTION",
    "LOC_NEEDS_ADDRESSING_MODE"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_GIOP_LocateStatusType (
    "IDL:omg.org/GIOP/LocateStatusType:1.0",
    "LocateStatusType",
    _tao_enumerators_GIOP_LocateStatusType,
    6);
  

namespace GIOP
{
  ::CORBA::TypeCode_ptr const _tc_LocateStatusType =
    &_tao_tc_GIOP_LocateStatusType;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::GIOP::Version &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::GIOP::Version>::insert_copy (
        _tao_any,
        ::GIOP::Version::_tao_any_destructor,
        ::GIOP::_tc_Version,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    GIOP::Version *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::GIOP::Version>::insert (
      _tao_any,
      ::GIOP::Version::_tao_any_destructor,
      ::GIOP::_tc_Version,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::GIOP::Version *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::GIOP::Version>::extract (
        _tao_any,
        ::GIOP::Version::_tao_any_destructor,
        ::GIOP::_tc_Version,
        _tao_elem);
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const GIOP::Version &_tao_elem)
{
  TAO::Any_Dual_Impl_T<GIOP::Version>::insert_copy (
    _tao_any,
    GIOP::Version::_tao_any_destructor,
    GIOP::_tc_Version,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  GIOP::Version *_tao_elem)
{
  TAO::Any_Dual_Impl_T<GIOP::Version>::insert (
    _tao_any,
    GIOP::Version::_tao_any_destructor,
    GIOP::_tc_Version,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const GIOP::Version *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<GIOP::Version>::extract (
      _tao_any,
      GIOP::Version::_tao_any_destructor,
      GIOP::_tc_Version,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::GIOP::IORAddressingInfo &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::GIOP::IORAddressingInfo>::insert_copy (
        _tao_any,
        ::GIOP::IORAddressingInfo::_tao_any_destructor,
        ::GIOP::_tc_IORAddressingInfo,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    GIOP::IORAddressingInfo *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::GIOP::IORAddressingInfo>::insert (
      _tao_any,
      ::GIOP::IORAddressingInfo::_tao_any_destructor,
      ::GIOP::_tc_IORAddressingInfo,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::GIOP::IORAddressingInfo *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::GIOP::IORAddressingInfo>::extract (
        _tao_any,
        ::GIOP::IORAddressingInfo::_tao_any_destructor,
        ::GIOP::_tc_IORAddressingInfo,
        _tao_elem);
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const GIOP::IORAddressingInfo &_tao_elem)
{
  TAO::Any_Dual_Impl_T<GIOP::IORAddressingInfo>::insert_copy (
    _tao_any,
    GIOP::IORAddressingInfo::_tao_any_destructor,
    GIOP::_tc_IORAddressingInfo,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  GIOP::IORAddressingInfo *_tao_elem)
{
  TAO::Any_Dual_Impl_T<GIOP::IORAddressingInfo>::insert (
    _tao_any,
    GIOP::IORAddressingInfo::_tao_any_destructor,
    GIOP::_tc_IORAddressingInfo,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const GIOP::IORAddressingInfo *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<GIOP::IORAddressingInfo>::extract (
      _tao_any,
      GIOP::IORAddressingInfo::_tao_any_destructor,
      GIOP::_tc_IORAddressingInfo,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\any_op_cs.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::GIOP::TargetAddress &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::GIOP::TargetAddress>::insert_copy (
        _tao_any,
        ::GIOP::TargetAddress::_tao_any_destructor,
        ::GIOP::_tc_TargetAddress,
        _tao_elem
      );
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    ::GIOP::TargetAddress *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::GIOP::TargetAddress>::insert (
      _tao_any,
      ::GIOP::TargetAddress::_tao_any_destructor,
      ::GIOP::_tc_TargetAddress,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::GIOP::TargetAddress *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::GIOP::TargetAddress>::extract (
        _tao_any,
        ::GIOP::TargetAddress::_tao_any_destructor,
        ::GIOP::_tc_TargetAddress,
        _tao_elem);
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const GIOP::TargetAddress &_tao_elem)
{
  TAO::Any_Dual_Impl_T<GIOP::TargetAddress>::insert_copy (
      _tao_any,
      GIOP::TargetAddress::_tao_any_destructor,
      GIOP::_tc_TargetAddress,
      _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    GIOP::TargetAddress *_tao_elem)
{
  TAO::Any_Dual_Impl_T<GIOP::TargetAddress>::insert (
      _tao_any,
      GIOP::TargetAddress::_tao_any_destructor,
      GIOP::_tc_TargetAddress,
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const GIOP::TargetAddress *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<GIOP::TargetAddress>::extract (
        _tao_any,
        GIOP::TargetAddress::_tao_any_destructor,
        GIOP::_tc_TargetAddress,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\any_op_cs.cpp:35


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::GIOP::MsgType _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::GIOP::MsgType>::insert (
        _tao_any,
        ::GIOP::_tc_MsgType,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::GIOP::MsgType &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::GIOP::MsgType>::extract (
          _tao_any,
          ::GIOP::_tc_MsgType,
          _tao_elem 
        );
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    GIOP::MsgType _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<GIOP::MsgType>::insert (
      _tao_any,
      GIOP::_tc_MsgType,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    GIOP::MsgType &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<GIOP::MsgType>::extract (
        _tao_any,
        GIOP::_tc_MsgType,
        _tao_elem 
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\any_op_cs.cpp:35


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::GIOP::ReplyStatusType _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::GIOP::ReplyStatusType>::insert (
        _tao_any,
        ::GIOP::_tc_ReplyStatusType,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::GIOP::ReplyStatusType &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::GIOP::ReplyStatusType>::extract (
          _tao_any,
          ::GIOP::_tc_ReplyStatusType,
          _tao_elem 
        );
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    GIOP::ReplyStatusType _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<GIOP::ReplyStatusType>::insert (
      _tao_any,
      GIOP::_tc_ReplyStatusType,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    GIOP::ReplyStatusType &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<GIOP::ReplyStatusType>::extract (
        _tao_any,
        GIOP::_tc_ReplyStatusType,
        _tao_elem 
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\any_op_cs.cpp:35


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::GIOP::LocateStatusType _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::GIOP::LocateStatusType>::insert (
        _tao_any,
        ::GIOP::_tc_LocateStatusType,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::GIOP::LocateStatusType &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::GIOP::LocateStatusType>::extract (
          _tao_any,
          ::GIOP::_tc_LocateStatusType,
          _tao_elem 
        );
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    GIOP::LocateStatusType _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<GIOP::LocateStatusType>::insert (
      _tao_any,
      GIOP::_tc_LocateStatusType,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    GIOP::LocateStatusType &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<GIOP::LocateStatusType>::extract (
        _tao_any,
        GIOP::_tc_LocateStatusType,
        _tao_elem 
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


