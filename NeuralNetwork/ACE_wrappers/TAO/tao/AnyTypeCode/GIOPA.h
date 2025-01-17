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
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:777

#ifndef _TAO_IDL_ANYTYPECODE_GIOPA_DHGTMY_H_
#define _TAO_IDL_ANYTYPECODE_GIOPA_DHGTMY_H_

#include /**/ "ace/pre.h"

#include /**/ "tao/AnyTypeCode/TAO_AnyTypeCode_Export.h"
#include "tao/AnyTypeCode/Any.h"

#include "tao/GIOPC.h"
#include "tao/AnyTypeCode/IOPA.h"


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:45

namespace GIOP
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_AddressingDisposition;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_Version;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_IORAddressingInfo;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_TargetAddress;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_MsgType;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_ReplyStatusType;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_LocateStatusType;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:72

} // module GIOP


// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, const ::GIOP::Version &); // copying version
  TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, ::GIOP::Version*); // noncopying version
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::GIOP::Version *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, const GIOP::Version &); // copying version
TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, GIOP::Version*); // noncopying version
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const GIOP::Version *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, const ::GIOP::IORAddressingInfo &); // copying version
  TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, ::GIOP::IORAddressingInfo*); // noncopying version
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::GIOP::IORAddressingInfo *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, const GIOP::IORAddressingInfo &); // copying version
TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, GIOP::IORAddressingInfo*); // noncopying version
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const GIOP::IORAddressingInfo *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\any_op_ch.cpp:37



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, const ::GIOP::TargetAddress &); // copying version
  TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, ::GIOP::TargetAddress*); // noncopying version
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::GIOP::TargetAddress *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, const GIOP::TargetAddress &); // copying version
TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, GIOP::TargetAddress*); // noncopying version
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const GIOP::TargetAddress *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\any_op_ch.cpp:36

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  

  TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, ::GIOP::MsgType);
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::GIOP::MsgType &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, GIOP::MsgType);
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, GIOP::MsgType &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\any_op_ch.cpp:36

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  

  TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, ::GIOP::ReplyStatusType);
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::GIOP::ReplyStatusType &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, GIOP::ReplyStatusType);
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, GIOP::ReplyStatusType &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\any_op_ch.cpp:36

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace GIOP
{
  

  TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, ::GIOP::LocateStatusType);
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::GIOP::LocateStatusType &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, GIOP::LocateStatusType);
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, GIOP::LocateStatusType &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */
