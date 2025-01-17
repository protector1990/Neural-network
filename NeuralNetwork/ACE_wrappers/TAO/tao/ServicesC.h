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

#ifndef _TAO_PIDL_SERVICESC_5VNWW3_H_
#define _TAO_PIDL_SERVICESC_5VNWW3_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/TAO_Export.h"
#include "tao/Basic_Types.h"
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
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/OctetSeqC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

namespace CORBA
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:370

  typedef ::CORBA::UShort ServiceType;
  typedef ::CORBA::UShort_out ServiceType_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:370

  typedef ::CORBA::ULong ServiceOption;
  typedef ::CORBA::ULong_out ServiceOption_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:370

  typedef ::CORBA::ULong ServiceDetailType;
  typedef ::CORBA::ULong_out ServiceDetailType_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:463

  typedef OctetSeq ServiceDetailData;
  typedef OctetSeq_var ServiceDetailData_var;
  typedef OctetSeq_out ServiceDetailData_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:99

#if !defined (_CORBA_SERVICEOPTIONSEQ_CH_)
#define _CORBA_SERVICEOPTIONSEQ_CH_

  class ServiceOptionSeq;
  typedef ::TAO_FixedSeq_Var_T<ServiceOptionSeq> ServiceOptionSeq_var;
  typedef ::TAO_Seq_Out_T<ServiceOptionSeq> ServiceOptionSeq_out;
  

  class TAO_Export ServiceOptionSeq
    : public
        ::TAO::unbounded_value_sequence< ServiceOption>
  {
  public:
    ServiceOptionSeq (void);
    ServiceOptionSeq ( ::CORBA::ULong max);
    ServiceOptionSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::ULong* buffer,
      ::CORBA::Boolean release = false);
    ServiceOptionSeq (const ServiceOptionSeq &);
    virtual ~ServiceOptionSeq (void);
    

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef ServiceOptionSeq_var _var_type;
    typedef ServiceOptionSeq_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const CORBA::UShort Security = 1U;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct ServiceDetail;

  typedef
    ::TAO_Var_Var_T<
        ServiceDetail
      >
    ServiceDetail_var;

  typedef
    ::TAO_Out_T<
        ServiceDetail
      >
    ServiceDetail_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_Export ServiceDetail
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef ServiceDetail_var _var_type;
    typedef ServiceDetail_out _out_type;

    static void _tao_any_destructor (void *);
    
    CORBA::ServiceDetailType service_detail_type;
    CORBA::ServiceDetailData service_detail;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:99

#if !defined (_CORBA_SERVICEDETAILSEQ_CH_)
#define _CORBA_SERVICEDETAILSEQ_CH_

  class ServiceDetailSeq;
  typedef ::TAO_VarSeq_Var_T<ServiceDetailSeq> ServiceDetailSeq_var;
  typedef ::TAO_Seq_Out_T<ServiceDetailSeq> ServiceDetailSeq_out;
  

  class TAO_Export ServiceDetailSeq
    : public
        ::TAO::unbounded_value_sequence< ServiceDetail>
  {
  public:
    ServiceDetailSeq (void);
    ServiceDetailSeq ( ::CORBA::ULong max);
    ServiceDetailSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ServiceDetail* buffer,
      ::CORBA::Boolean release = false);
    ServiceDetailSeq (const ServiceDetailSeq &);
    virtual ~ServiceDetailSeq (void);
    

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef ServiceDetailSeq_var _var_type;
    typedef ServiceDetailSeq_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct ServiceInformation;

  typedef
    ::TAO_Var_Var_T<
        ServiceInformation
      >
    ServiceInformation_var;

  typedef
    ::TAO_Out_T<
        ServiceInformation
      >
    ServiceInformation_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_Export ServiceInformation
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef ServiceInformation_var _var_type;
    typedef ServiceInformation_out _out_type;

    static void _tao_any_destructor (void *);
    
    CORBA::ServiceOptionSeq service_options;
    CORBA::ServiceDetailSeq service_details;
  };

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module CORBA

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::CORBA::ServiceOptionSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::CORBA::ServiceOptionSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::CORBA::ServiceDetail>
    : public
        Var_Size_Arg_Traits_T<
            ::CORBA::ServiceDetail,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::CORBA::ServiceDetailSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::CORBA::ServiceDetailSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::CORBA::ServiceInformation>
    : public
        Var_Size_Arg_Traits_T<
            ::CORBA::ServiceInformation,
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
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_CORBA_ServiceOptionSeq_H_
#define _TAO_CDR_OP_CORBA_ServiceOptionSeq_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::ServiceOptionSeq &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::ServiceOptionSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_CORBA_ServiceOptionSeq_H_ */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::ServiceDetail &);
TAO_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::ServiceDetail &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_CORBA_ServiceDetailSeq_H_
#define _TAO_CDR_OP_CORBA_ServiceDetailSeq_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::ServiceDetailSeq &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::ServiceDetailSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_CORBA_ServiceDetailSeq_H_ */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::ServiceInformation &);
TAO_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::ServiceInformation &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686


TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

