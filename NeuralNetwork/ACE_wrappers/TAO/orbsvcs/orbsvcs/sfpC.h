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
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:149

#ifndef _TAO_IDL_SFPC_ESKUKB_H_
#define _TAO_IDL_SFPC_ESKUKB_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/AV/AV_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/AnyTypeCode/ULongSeqA.h"
#include "tao/AnyTypeCode/OctetSeqA.h"
#include "tao/VarOut_T.h"
#include "tao/Array_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Fixed_Array_Argument_T.h"
#include "tao/Var_Array_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/ULongSeqC.h"
#include "tao/OctetSeqC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

namespace flowProtocol
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:463

  typedef CORBA::ULongSeq my_seq_ulong;
  typedef CORBA::ULongSeq_var my_seq_ulong_var;
  typedef CORBA::ULongSeq_out my_seq_ulong_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_my_seq_ulong;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_ch.cpp:52

  typedef ::CORBA::Char cmagic_nr[4];
  typedef ::CORBA::Char cmagic_nr_slice;
  struct cmagic_nr_tag {};
  

  typedef
    TAO_FixedArray_Var_T<
        cmagic_nr,
        cmagic_nr_slice,
        cmagic_nr_tag
      >
    cmagic_nr_var;

  typedef
    cmagic_nr
    cmagic_nr_out;

  typedef
    TAO_Array_Forany_T<
        cmagic_nr,
        cmagic_nr_slice,
        cmagic_nr_tag
      >
    cmagic_nr_forany;

  extern TAO_AV_Export cmagic_nr_slice *
  cmagic_nr_alloc (void);

  extern TAO_AV_Export void
  cmagic_nr_free (
      cmagic_nr_slice *_tao_slice);
  
  extern TAO_AV_Export cmagic_nr_slice *
  cmagic_nr_dup (
      const cmagic_nr_slice *_tao_slice);
  
  extern TAO_AV_Export void
  cmagic_nr_copy (
      cmagic_nr_slice *_tao_to,
      const cmagic_nr_slice *_tao_from);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_cmagic_nr;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\enum_ch.cpp:44

  enum MsgType
  {
    Start_Msg,
    EndofStream_Msg,
    SimpleFrame_Msg,
    SequencedFrame_Msg,
    Frame_Msg,
    SpecialFrame_Msg,
    StartReply_Msg,
    Credit_Msg,
    Fragment_Msg
  };

  typedef MsgType &MsgType_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_MsgType;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct frameHeader;

  typedef
    ::TAO_Fixed_Var_T<
        frameHeader
      >
    frameHeader_var;

  typedef
    frameHeader &
    frameHeader_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_AV_Export frameHeader
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef frameHeader_var _var_type;
    typedef frameHeader_out _out_type;

    static void _tao_any_destructor (void *);
    
    flowProtocol::cmagic_nr magic_number;
    ::CORBA::Octet flags;
    ::CORBA::Octet message_type;
    ::CORBA::ULong message_size;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_frameHeader;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct fragment;

  typedef
    ::TAO_Fixed_Var_T<
        fragment
      >
    fragment_var;

  typedef
    fragment &
    fragment_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_AV_Export fragment
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef fragment_var _var_type;
    typedef fragment_out _out_type;

    static void _tao_any_destructor (void *);
    
    flowProtocol::cmagic_nr magic_number;
    ::CORBA::Octet flags;
    ::CORBA::ULong frag_number;
    ::CORBA::ULong sequence_num;
    ::CORBA::ULong frag_sz;
    ::CORBA::ULong source_id;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_fragment;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct Start;

  typedef
    ::TAO_Fixed_Var_T<
        Start
      >
    Start_var;

  typedef
    Start &
    Start_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_AV_Export Start
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef Start_var _var_type;
    typedef Start_out _out_type;

    static void _tao_any_destructor (void *);
    
    flowProtocol::cmagic_nr magic_number;
    ::CORBA::Octet major_version;
    ::CORBA::Octet minor_version;
    ::CORBA::Octet flags;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_Start;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct StartReply;

  typedef
    ::TAO_Fixed_Var_T<
        StartReply
      >
    StartReply_var;

  typedef
    StartReply &
    StartReply_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_AV_Export StartReply
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef StartReply_var _var_type;
    typedef StartReply_out _out_type;

    static void _tao_any_destructor (void *);
    
    flowProtocol::cmagic_nr magic_number;
    ::CORBA::Octet flags;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_StartReply;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct sequencedFrame;

  typedef
    ::TAO_Fixed_Var_T<
        sequencedFrame
      >
    sequencedFrame_var;

  typedef
    sequencedFrame &
    sequencedFrame_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_AV_Export sequencedFrame
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef sequencedFrame_var _var_type;
    typedef sequencedFrame_out _out_type;

    static void _tao_any_destructor (void *);
    
    ::CORBA::ULong sequence_num;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_sequencedFrame;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct frame;

  typedef
    ::TAO_Var_Var_T<
        frame
      >
    frame_var;

  typedef
    ::TAO_Out_T<
        frame
      >
    frame_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_AV_Export frame
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef frame_var _var_type;
    typedef frame_out _out_type;

    static void _tao_any_destructor (void *);
    
    ::CORBA::ULong timestamp;
    ::CORBA::ULong synchSource;
    flowProtocol::my_seq_ulong source_ids;
    ::CORBA::ULong sequence_num;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_frame;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:370

  typedef ::CORBA::ULong frameID;
  typedef ::CORBA::ULong_out frameID_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_frameID;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct specialFrame;

  typedef
    ::TAO_Var_Var_T<
        specialFrame
      >
    specialFrame_var;

  typedef
    ::TAO_Out_T<
        specialFrame
      >
    specialFrame_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_AV_Export specialFrame
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef specialFrame_var _var_type;
    typedef specialFrame_out _out_type;

    static void _tao_any_destructor (void *);
    
    flowProtocol::frameID context_id;
    CORBA::OctetSeq context_data;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_specialFrame;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct credit;

  typedef
    ::TAO_Fixed_Var_T<
        credit
      >
    credit_var;

  typedef
    credit &
    credit_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_AV_Export credit
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef credit_var _var_type;
    typedef credit_out _out_type;

    static void _tao_any_destructor (void *);
    
    flowProtocol::cmagic_nr magic_number;
    ::CORBA::ULong cred_num;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_AV_Export ::CORBA::TypeCode_ptr const _tc_credit;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module flowProtocol

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  template<>
  class Arg_Traits< ::flowProtocol::cmagic_nr_tag>
    : public
        Fixed_Array_Arg_Traits_T<
            ::flowProtocol::cmagic_nr_var,
            ::flowProtocol::cmagic_nr_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:902

  template<>
  class Arg_Traits< ::flowProtocol::MsgType>
    : public
        Basic_Arg_Traits_T<
            ::flowProtocol::MsgType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::flowProtocol::frameHeader>
    : public
        Fixed_Size_Arg_Traits_T<
            ::flowProtocol::frameHeader,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::flowProtocol::fragment>
    : public
        Fixed_Size_Arg_Traits_T<
            ::flowProtocol::fragment,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::flowProtocol::Start>
    : public
        Fixed_Size_Arg_Traits_T<
            ::flowProtocol::Start,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::flowProtocol::StartReply>
    : public
        Fixed_Size_Arg_Traits_T<
            ::flowProtocol::StartReply,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::flowProtocol::sequencedFrame>
    : public
        Fixed_Size_Arg_Traits_T<
            ::flowProtocol::sequencedFrame,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::flowProtocol::frame>
    : public
        Var_Size_Arg_Traits_T<
            ::flowProtocol::frame,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::flowProtocol::specialFrame>
    : public
        Var_Size_Arg_Traits_T<
            ::flowProtocol::specialFrame,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::flowProtocol::credit>
    : public
        Fixed_Size_Arg_Traits_T<
            ::flowProtocol::credit,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_traits.cpp:60


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
  template<>
  struct TAO_AV_Export Array_Traits<
      flowProtocol::cmagic_nr_forany
    >
  {
    static void free (
        flowProtocol::cmagic_nr_slice * _tao_slice);
    static flowProtocol::cmagic_nr_slice * dup (
        const flowProtocol::cmagic_nr_slice * _tao_slice);
    static void copy (
        flowProtocol::cmagic_nr_slice * _tao_to,
        const flowProtocol::cmagic_nr_slice * _tao_from);
    static flowProtocol::cmagic_nr_slice * alloc (void);
    static void zero (
        flowProtocol::cmagic_nr_slice * _tao_slice);
  };
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_array\any_op_ch.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export void operator<<= (::CORBA::Any &, const flowProtocol::cmagic_nr_forany &);
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, flowProtocol::cmagic_nr_forany &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\any_op_ch.cpp:36

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace flowProtocol
{
  

  TAO_AV_Export void operator<<= (::CORBA::Any &, ::flowProtocol::MsgType);
  TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::flowProtocol::MsgType &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_AV_Export void operator<<= (::CORBA::Any &, flowProtocol::MsgType);
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, flowProtocol::MsgType &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace flowProtocol
{
  TAO_AV_Export void operator<<= (::CORBA::Any &, const ::flowProtocol::frameHeader &); // copying version
  TAO_AV_Export void operator<<= (::CORBA::Any &, ::flowProtocol::frameHeader*); // noncopying version
  TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::flowProtocol::frameHeader *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export void operator<<= (::CORBA::Any &, const flowProtocol::frameHeader &); // copying version
TAO_AV_Export void operator<<= (::CORBA::Any &, flowProtocol::frameHeader*); // noncopying version
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const flowProtocol::frameHeader *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace flowProtocol
{
  TAO_AV_Export void operator<<= (::CORBA::Any &, const ::flowProtocol::fragment &); // copying version
  TAO_AV_Export void operator<<= (::CORBA::Any &, ::flowProtocol::fragment*); // noncopying version
  TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::flowProtocol::fragment *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export void operator<<= (::CORBA::Any &, const flowProtocol::fragment &); // copying version
TAO_AV_Export void operator<<= (::CORBA::Any &, flowProtocol::fragment*); // noncopying version
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const flowProtocol::fragment *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace flowProtocol
{
  TAO_AV_Export void operator<<= (::CORBA::Any &, const ::flowProtocol::Start &); // copying version
  TAO_AV_Export void operator<<= (::CORBA::Any &, ::flowProtocol::Start*); // noncopying version
  TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::flowProtocol::Start *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export void operator<<= (::CORBA::Any &, const flowProtocol::Start &); // copying version
TAO_AV_Export void operator<<= (::CORBA::Any &, flowProtocol::Start*); // noncopying version
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const flowProtocol::Start *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace flowProtocol
{
  TAO_AV_Export void operator<<= (::CORBA::Any &, const ::flowProtocol::StartReply &); // copying version
  TAO_AV_Export void operator<<= (::CORBA::Any &, ::flowProtocol::StartReply*); // noncopying version
  TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::flowProtocol::StartReply *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export void operator<<= (::CORBA::Any &, const flowProtocol::StartReply &); // copying version
TAO_AV_Export void operator<<= (::CORBA::Any &, flowProtocol::StartReply*); // noncopying version
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const flowProtocol::StartReply *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace flowProtocol
{
  TAO_AV_Export void operator<<= (::CORBA::Any &, const ::flowProtocol::sequencedFrame &); // copying version
  TAO_AV_Export void operator<<= (::CORBA::Any &, ::flowProtocol::sequencedFrame*); // noncopying version
  TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::flowProtocol::sequencedFrame *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export void operator<<= (::CORBA::Any &, const flowProtocol::sequencedFrame &); // copying version
TAO_AV_Export void operator<<= (::CORBA::Any &, flowProtocol::sequencedFrame*); // noncopying version
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const flowProtocol::sequencedFrame *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace flowProtocol
{
  TAO_AV_Export void operator<<= (::CORBA::Any &, const ::flowProtocol::frame &); // copying version
  TAO_AV_Export void operator<<= (::CORBA::Any &, ::flowProtocol::frame*); // noncopying version
  TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::flowProtocol::frame *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export void operator<<= (::CORBA::Any &, const flowProtocol::frame &); // copying version
TAO_AV_Export void operator<<= (::CORBA::Any &, flowProtocol::frame*); // noncopying version
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const flowProtocol::frame *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace flowProtocol
{
  TAO_AV_Export void operator<<= (::CORBA::Any &, const ::flowProtocol::specialFrame &); // copying version
  TAO_AV_Export void operator<<= (::CORBA::Any &, ::flowProtocol::specialFrame*); // noncopying version
  TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::flowProtocol::specialFrame *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export void operator<<= (::CORBA::Any &, const flowProtocol::specialFrame &); // copying version
TAO_AV_Export void operator<<= (::CORBA::Any &, flowProtocol::specialFrame*); // noncopying version
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const flowProtocol::specialFrame *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace flowProtocol
{
  TAO_AV_Export void operator<<= (::CORBA::Any &, const ::flowProtocol::credit &); // copying version
  TAO_AV_Export void operator<<= (::CORBA::Any &, ::flowProtocol::credit*); // noncopying version
  TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::flowProtocol::credit *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export void operator<<= (::CORBA::Any &, const flowProtocol::credit &); // copying version
TAO_AV_Export void operator<<= (::CORBA::Any &, flowProtocol::credit*); // noncopying version
TAO_AV_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const flowProtocol::credit *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_ch.cpp:99



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const flowProtocol::cmagic_nr_forany &_tao_array);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, flowProtocol::cmagic_nr_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\cdr_op_ch.cpp:34



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, flowProtocol::MsgType _tao_enumerator);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, flowProtocol::MsgType &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const flowProtocol::frameHeader &);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, flowProtocol::frameHeader &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const flowProtocol::fragment &);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, flowProtocol::fragment &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const flowProtocol::Start &);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, flowProtocol::Start &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const flowProtocol::StartReply &);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, flowProtocol::StartReply &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const flowProtocol::sequencedFrame &);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, flowProtocol::sequencedFrame &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const flowProtocol::frame &);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, flowProtocol::frame &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const flowProtocol::specialFrame &);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, flowProtocol::specialFrame &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AV_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const flowProtocol::credit &);
TAO_AV_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, flowProtocol::credit &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "sfpC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

