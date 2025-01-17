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

#ifndef _TAO_PIDL_BIDIRPOLICYC_VEJ4SW_H_
#define _TAO_PIDL_BIDIRPOLICYC_VEJ4SW_H_

#include /**/ "ace/pre.h"

#ifndef TAO_BIDIRGIOP_SAFE_INCLUDE
#error You should not include BiDirPolicyC.h, use tao/BiDir_GIOP/BiDirGIOP.h
#endif /* TAO_BIDIRGIOP_SAFE_INCLUDE */

#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/BiDir_GIOP/bidirgiop_export.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/PolicyC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

namespace BiDirPolicy
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:370

  typedef ::CORBA::UShort BidirectionalPolicyValue;
  typedef ::CORBA::UShort_out BidirectionalPolicyValue_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const CORBA::UShort NORMAL = 0U;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const CORBA::UShort BOTH = 1U;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const CORBA::ULong BIDIRECTIONAL_POLICY_TYPE = 37U;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_BIDIRPOLICY_BIDIRECTIONALPOLICY__VAR_OUT_CH_)
#define _BIDIRPOLICY_BIDIRECTIONALPOLICY__VAR_OUT_CH_

  class BidirectionalPolicy;
  typedef BidirectionalPolicy *BidirectionalPolicy_ptr;
  typedef TAO_Objref_Var_T<BidirectionalPolicy> BidirectionalPolicy_var;
  typedef TAO_Objref_Out_T<BidirectionalPolicy> BidirectionalPolicy_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_BIDIRGIOP_Export BidirectionalPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef BidirectionalPolicy_ptr _ptr_type;
    typedef BidirectionalPolicy_var _var_type;
    typedef BidirectionalPolicy_out _out_type;

    // The static operations.
    static BidirectionalPolicy_ptr _duplicate (BidirectionalPolicy_ptr obj);

    static void _tao_release (BidirectionalPolicy_ptr obj);

    static BidirectionalPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static BidirectionalPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static BidirectionalPolicy_ptr _nil (void);

    virtual ::BiDirPolicy::BidirectionalPolicyValue value (
      void) = 0;

    virtual ::CORBA::Policy_ptr copy (
      void) = 0;

    virtual void destroy (
      void) = 0;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    BidirectionalPolicy (void);

    

    virtual ~BidirectionalPolicy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    BidirectionalPolicy (const BidirectionalPolicy &);

    void operator= (const BidirectionalPolicy &);
  };

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module BiDirPolicy

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
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

#if !defined (_BIDIRPOLICY_BIDIRECTIONALPOLICY__TRAITS_)
#define _BIDIRPOLICY_BIDIRECTIONALPOLICY__TRAITS_

  template<>
  struct TAO_BIDIRGIOP_Export Objref_Traits< ::BiDirPolicy::BidirectionalPolicy>
  {
    static ::BiDirPolicy::BidirectionalPolicy_ptr duplicate (
        ::BiDirPolicy::BidirectionalPolicy_ptr p);
    static void release (
        ::BiDirPolicy::BidirectionalPolicy_ptr p);
    static ::BiDirPolicy::BidirectionalPolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::BiDirPolicy::BidirectionalPolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686


TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

