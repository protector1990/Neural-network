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

#ifndef _TAO_IDL_COSTRADINGDYNAMICC_K5WARP_H_
#define _TAO_IDL_COSTRADINGDYNAMICC_K5WARP_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/Trader/trading_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/String_Manager_T.h"
#include "tao/AnyTypeCode/BooleanSeqA.h"
#include "tao/AnyTypeCode/CharSeqA.h"
#include "tao/AnyTypeCode/DoubleSeqA.h"
#include "tao/AnyTypeCode/FloatSeqA.h"
#include "tao/AnyTypeCode/LongDoubleSeqA.h"
#include "tao/AnyTypeCode/LongSeqA.h"
#include "tao/AnyTypeCode/OctetSeqA.h"
#include "tao/AnyTypeCode/ShortSeqA.h"
#include "tao/AnyTypeCode/StringSeqA.h"
#include "tao/AnyTypeCode/ULongSeqA.h"
#include "tao/AnyTypeCode/UShortSeqA.h"
#include "tao/AnyTypeCode/WCharSeqA.h"
#include "tao/AnyTypeCode/WStringSeqA.h"
#include "tao/AnyTypeCode/LongLongSeqA.h"
#include "tao/AnyTypeCode/ULongLongSeqA.h"
#include "tao/AnyTypeCode/PolicyA.h"
#include "tao/AnyTypeCode/Policy_ManagerA.h"
#include "tao/AnyTypeCode/Policy_CurrentA.h"
#include "tao/AnyTypeCode/ServicesA.h"
#include "tao/AnyTypeCode/ParameterModeA.h"
#include "tao/AnyTypeCode/orb_typesA.h"
#include "tao/AnyTypeCode/Typecode_typesA.h"
#include "tao/AnyTypeCode/WrongTransactionA.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include "tao/AnyTypeCode/Any_Arg_Traits.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/BooleanSeqC.h"
#include "tao/CharSeqC.h"
#include "tao/DoubleSeqC.h"
#include "tao/FloatSeqC.h"
#include "tao/LongDoubleSeqC.h"
#include "tao/LongSeqC.h"
#include "tao/OctetSeqC.h"
#include "tao/ShortSeqC.h"
#include "tao/StringSeqC.h"
#include "tao/ULongSeqC.h"
#include "tao/UShortSeqC.h"
#include "tao/WCharSeqC.h"
#include "tao/WStringSeqC.h"
#include "tao/LongLongSeqC.h"
#include "tao/ULongLongSeqC.h"
#include "tao/PolicyC.h"
#include "tao/Policy_ManagerC.h"
#include "tao/Policy_CurrentC.h"
#include "tao/ServicesC.h"
#include "tao/ParameterModeC.h"
#include "tao/orb_typesC.h"
#include "tao/Typecode_typesC.h"
#include "tao/WrongTransactionC.h"
#include "CosTradingC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_root\root_ch.cpp:157

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

namespace CosTradingDynamic
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\exception_ch.cpp:41

  class TAO_Trading_Export DPEvalFailure : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager name;
    ::CORBA::TypeCode_var returned_type;
    ::CORBA::Any extra_info;

    DPEvalFailure (void);
    DPEvalFailure (const DPEvalFailure &);
    ~DPEvalFailure (void);

    DPEvalFailure &operator= (const DPEvalFailure &);

    static void _tao_any_destructor (void *);

    static DPEvalFailure *_downcast ( ::CORBA::Exception *);
    static const DPEvalFailure *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\exception_ctor.cpp:51

    DPEvalFailure (
        const char * _tao_name,
        const ::CORBA::TypeCode_ptr  _tao_returned_type,
        const ::CORBA::Any & _tao_extra_info);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Trading_Export ::CORBA::TypeCode_ptr const _tc_DPEvalFailure;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_COSTRADINGDYNAMIC_DYNAMICPROPEVAL__VAR_OUT_CH_)
#define _COSTRADINGDYNAMIC_DYNAMICPROPEVAL__VAR_OUT_CH_

  class DynamicPropEval;
  typedef DynamicPropEval *DynamicPropEval_ptr;
  typedef TAO_Objref_Var_T<DynamicPropEval> DynamicPropEval_var;
  typedef TAO_Objref_Out_T<DynamicPropEval> DynamicPropEval_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_Trading_Export DynamicPropEval
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<DynamicPropEval>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef DynamicPropEval_ptr _ptr_type;
    typedef DynamicPropEval_var _var_type;
    typedef DynamicPropEval_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static DynamicPropEval_ptr _duplicate (DynamicPropEval_ptr obj);

    static void _tao_release (DynamicPropEval_ptr obj);

    static DynamicPropEval_ptr _narrow (::CORBA::Object_ptr obj);
    static DynamicPropEval_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DynamicPropEval_ptr _nil (void);

    virtual ::CORBA::Any * evalDP (
      const char * name,
      ::CORBA::TypeCode_ptr returned_type,
      const ::CORBA::Any & extra_info);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    DynamicPropEval (void);

    // Concrete non-local interface only.
    DynamicPropEval (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    DynamicPropEval (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~DynamicPropEval (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DynamicPropEval (const DynamicPropEval &);

    void operator= (const DynamicPropEval &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Trading_Export ::CORBA::TypeCode_ptr const _tc_DynamicPropEval;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:258

  struct DynamicProp;

  typedef
    ::TAO_Var_Var_T<
        DynamicProp
      >
    DynamicProp_var;

  typedef
    ::TAO_Out_T<
        DynamicProp
      >
    DynamicProp_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:48

  struct TAO_Trading_Export DynamicProp
  {

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    
    typedef DynamicProp_var _var_type;
    typedef DynamicProp_out _out_type;

    static void _tao_any_destructor (void *);
    
    CosTradingDynamic::DynamicPropEval_var eval_if;
    ::CORBA::TypeCode_var returned_type;
    ::CORBA::Any extra_info;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Trading_Export ::CORBA::TypeCode_ptr const _tc_DynamicProp;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module CosTradingDynamic

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_COSTRADINGDYNAMIC_DYNAMICPROPEVAL__ARG_TRAITS_)
#define _COSTRADINGDYNAMIC_DYNAMICPROPEVAL__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::CosTradingDynamic::DynamicPropEval>
    : public
        Object_Arg_Traits_T<
            ::CosTradingDynamic::DynamicPropEval_ptr,
            ::CosTradingDynamic::DynamicPropEval_var,
            ::CosTradingDynamic::DynamicPropEval_out,
            TAO::Objref_Traits<CosTradingDynamic::DynamicPropEval>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::CosTradingDynamic::DynamicProp>
    : public
        Var_Size_Arg_Traits_T<
            ::CosTradingDynamic::DynamicProp,
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

#if !defined (_COSTRADINGDYNAMIC_DYNAMICPROPEVAL__TRAITS_)
#define _COSTRADINGDYNAMIC_DYNAMICPROPEVAL__TRAITS_

  template<>
  struct TAO_Trading_Export Objref_Traits< ::CosTradingDynamic::DynamicPropEval>
  {
    static ::CosTradingDynamic::DynamicPropEval_ptr duplicate (
        ::CosTradingDynamic::DynamicPropEval_ptr p);
    static void release (
        ::CosTradingDynamic::DynamicPropEval_ptr p);
    static ::CosTradingDynamic::DynamicPropEval_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CosTradingDynamic::DynamicPropEval_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\any_op_ch.cpp:38

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosTradingDynamic
{
  

  TAO_Trading_Export void operator<<= (::CORBA::Any &, const ::CosTradingDynamic::DPEvalFailure &); // copying version
  TAO_Trading_Export void operator<<= (::CORBA::Any &, ::CosTradingDynamic::DPEvalFailure*); // noncopying version
  TAO_Trading_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::CosTradingDynamic::DPEvalFailure *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Trading_Export void operator<<= (::CORBA::Any &, const CosTradingDynamic::DPEvalFailure &); // copying version
TAO_Trading_Export void operator<<= (::CORBA::Any &, CosTradingDynamic::DPEvalFailure*); // noncopying version
TAO_Trading_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const CosTradingDynamic::DPEvalFailure *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosTradingDynamic
{
  TAO_Trading_Export void operator<<= ( ::CORBA::Any &, DynamicPropEval_ptr); // copying
  TAO_Trading_Export void operator<<= ( ::CORBA::Any &, DynamicPropEval_ptr *); // non-copying
  TAO_Trading_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DynamicPropEval_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Trading_Export void operator<<= (::CORBA::Any &, CosTradingDynamic::DynamicPropEval_ptr); // copying
TAO_Trading_Export void operator<<= (::CORBA::Any &, CosTradingDynamic::DynamicPropEval_ptr *); // non-copying
TAO_Trading_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CosTradingDynamic::DynamicPropEval_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosTradingDynamic
{
  TAO_Trading_Export void operator<<= (::CORBA::Any &, const ::CosTradingDynamic::DynamicProp &); // copying version
  TAO_Trading_Export void operator<<= (::CORBA::Any &, ::CosTradingDynamic::DynamicProp*); // noncopying version
  TAO_Trading_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::CosTradingDynamic::DynamicProp *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Trading_Export void operator<<= (::CORBA::Any &, const CosTradingDynamic::DynamicProp &); // copying version
TAO_Trading_Export void operator<<= (::CORBA::Any &, CosTradingDynamic::DynamicProp*); // noncopying version
TAO_Trading_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const CosTradingDynamic::DynamicProp *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\cdr_op_ch.cpp:37

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Trading_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CosTradingDynamic::DPEvalFailure &);
TAO_Trading_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CosTradingDynamic::DPEvalFailure &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Trading_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CosTradingDynamic::DynamicPropEval_ptr );
TAO_Trading_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CosTradingDynamic::DynamicPropEval_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Trading_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CosTradingDynamic::DynamicProp &);
TAO_Trading_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CosTradingDynamic::DynamicProp &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "CosTradingDynamicC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
