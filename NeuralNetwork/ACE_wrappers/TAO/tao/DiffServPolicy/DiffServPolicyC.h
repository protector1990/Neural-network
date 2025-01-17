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

#ifndef _TAO_PIDL_DIFFSERVPOLICYC_95KMV0_H_
#define _TAO_PIDL_DIFFSERVPOLICYC_95KMV0_H_

#include /**/ "ace/pre.h"

#ifndef TAO_DIFFSERVPOLICY_SAFE_INCLUDE
#error You should not include DiffServPolicyC.h, use tao/DiffServPolicy/DiffServPolicy.h
#endif /* TAO_DIFFSERVPOLICY_SAFE_INCLUDE */

#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/DiffServPolicy/DiffServPolicy_Export.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
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

namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typedef\typedef_ch.cpp:370

  typedef ::CORBA::Long DiffservCodepoint;
  typedef ::CORBA::Long_out DiffservCodepoint_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\enum_ch.cpp:44

  enum NetworkPriorityModel
  {
    CLIENT_PROPAGATED_NETWORK_PRIORITY,
    SERVER_DECLARED_NETWORK_PRIORITY,
    NO_NETWORK_PRIORITY
  };

  typedef NetworkPriorityModel &NetworkPriorityModel_out;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const CORBA::ULong SERVER_NETWORK_PRIORITY_TYPE = 1413545986U;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const CORBA::ULong CLIENT_NETWORK_PRIORITY_TYPE = 1413545987U;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const CORBA::ULong NETWORK_PRIORITY_TYPE = 1413545988U;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_TAO_NETWORKPRIORITYPOLICY__VAR_OUT_CH_)
#define _TAO_NETWORKPRIORITYPOLICY__VAR_OUT_CH_

  class NetworkPriorityPolicy;
  typedef NetworkPriorityPolicy *NetworkPriorityPolicy_ptr;
  typedef TAO_Objref_Var_T<NetworkPriorityPolicy> NetworkPriorityPolicy_var;
  typedef TAO_Objref_Out_T<NetworkPriorityPolicy> NetworkPriorityPolicy_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_DiffServPolicy_Export NetworkPriorityPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef NetworkPriorityPolicy_ptr _ptr_type;
    typedef NetworkPriorityPolicy_var _var_type;
    typedef NetworkPriorityPolicy_out _out_type;

    // The static operations.
    static NetworkPriorityPolicy_ptr _duplicate (NetworkPriorityPolicy_ptr obj);

    static void _tao_release (NetworkPriorityPolicy_ptr obj);

    static NetworkPriorityPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static NetworkPriorityPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static NetworkPriorityPolicy_ptr _nil (void);

    virtual ::TAO::NetworkPriorityModel network_priority_model (
      void) = 0;

    virtual void network_priority_model (
      ::TAO::NetworkPriorityModel network_priority_model) = 0;

    virtual ::TAO::DiffservCodepoint request_diffserv_codepoint (
      void) = 0;

    virtual void request_diffserv_codepoint (
      ::TAO::DiffservCodepoint request_diffserv_codepoint) = 0;

    virtual ::TAO::DiffservCodepoint reply_diffserv_codepoint (
      void) = 0;

    virtual void reply_diffserv_codepoint (
      ::TAO::DiffservCodepoint reply_diffserv_codepoint) = 0;

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
    NetworkPriorityPolicy (void);

    

    virtual ~NetworkPriorityPolicy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    NetworkPriorityPolicy (const NetworkPriorityPolicy &);

    void operator= (const NetworkPriorityPolicy &);
  };

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
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:902

  template<>
  class Arg_Traits< ::TAO::NetworkPriorityModel>
    : public
        Basic_Arg_Traits_T<
            ::TAO::NetworkPriorityModel,
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

#if !defined (_TAO_NETWORKPRIORITYPOLICY__TRAITS_)
#define _TAO_NETWORKPRIORITYPOLICY__TRAITS_

  template<>
  struct TAO_DiffServPolicy_Export Objref_Traits< ::TAO::NetworkPriorityPolicy>
  {
    static ::TAO::NetworkPriorityPolicy_ptr duplicate (
        ::TAO::NetworkPriorityPolicy_ptr p);
    static void release (
        ::TAO::NetworkPriorityPolicy_ptr p);
    static ::TAO::NetworkPriorityPolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::TAO::NetworkPriorityPolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\cdr_op_ch.cpp:34



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_DiffServPolicy_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, TAO::NetworkPriorityModel _tao_enumerator);
TAO_DiffServPolicy_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, TAO::NetworkPriorityModel &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686


TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

