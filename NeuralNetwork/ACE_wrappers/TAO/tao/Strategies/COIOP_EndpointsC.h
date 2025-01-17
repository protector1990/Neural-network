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

#ifndef _TAO_PIDL_COIOP_ENDPOINTSC_N4RSKW_H_
#define _TAO_PIDL_COIOP_ENDPOINTSC_N4RSKW_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/Strategies/strategies_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct COIOP_Endpoint_Info;

  typedef
    ::TAO_Var_Var_T<
        COIOP_Endpoint_Info
      >
    COIOP_Endpoint_Info_var;

  typedef
    ::TAO_Out_T<
        COIOP_Endpoint_Info
      >
    COIOP_Endpoint_Info_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_Strategies_Export COIOP_Endpoint_Info
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef COIOP_Endpoint_Info_var _var_type;
    typedef COIOP_Endpoint_Info_out _out_type;
    
    ::TAO::String_Manager uuid;
    ::CORBA::Short priority;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Strategies_Export ::CORBA::TypeCode_ptr const _tc_COIOP_Endpoint_Info;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:99

#if !defined (_TAO_COIOPENDPOINTSEQUENCE_CH_)
#define _TAO_COIOPENDPOINTSEQUENCE_CH_

  class COIOPEndpointSequence;
  typedef ::TAO_VarSeq_Var_T<COIOPEndpointSequence> COIOPEndpointSequence_var;
  typedef ::TAO_Seq_Out_T<COIOPEndpointSequence> COIOPEndpointSequence_out;
  

  class TAO_Strategies_Export COIOPEndpointSequence
    : public
        ::TAO::unbounded_value_sequence< COIOP_Endpoint_Info>
  {
  public:
    COIOPEndpointSequence (void);
    COIOPEndpointSequence ( ::CORBA::ULong max);
    COIOPEndpointSequence (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      COIOP_Endpoint_Info* buffer,
      ::CORBA::Boolean release = false);
    COIOPEndpointSequence (const COIOPEndpointSequence &);
    virtual ~COIOPEndpointSequence (void);
    

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef COIOPEndpointSequence_var _var_type;
    typedef COIOPEndpointSequence_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Strategies_Export ::CORBA::TypeCode_ptr const _tc_COIOPEndpointSequence;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module TAO

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::TAO::COIOP_Endpoint_Info>
    : public
        Var_Size_Arg_Traits_T<
            ::TAO::COIOP_Endpoint_Info,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::TAO::COIOPEndpointSequence>
    : public
        Var_Size_Arg_Traits_T<
            ::TAO::COIOPEndpointSequence,
            TAO::Any_Insert_Policy_Noop
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
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Strategies_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const TAO::COIOP_Endpoint_Info &);
TAO_Strategies_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, TAO::COIOP_Endpoint_Info &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_TAO_COIOPEndpointSequence_H_
#define _TAO_CDR_OP_TAO_COIOPEndpointSequence_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Strategies_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO::COIOPEndpointSequence &_tao_sequence);
TAO_Strategies_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO::COIOPEndpointSequence &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_TAO_COIOPEndpointSequence_H_ */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686


TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

