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

#ifndef _TAO_PIDL_REQUESTINFOC_AOLMP9_H_
#define _TAO_PIDL_REQUESTINFOC_AOLMP9_H_

#include /**/ "ace/pre.h"

#ifndef TAO_PI_SAFE_INCLUDE
#error You should not include RequestInfoC.h, use tao/PI/PI.h
#endif /* TAO_PI_SAFE_INCLUDE */

#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/PI/pi_export.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/PI_ForwardC.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/Messaging_SyncScopeC.h"
#include "tao/PI/InvalidSlotC.h"
#include "tao/IOPC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

namespace PortableInterceptor
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_PORTABLEINTERCEPTOR_REQUESTINFO__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_REQUESTINFO__VAR_OUT_CH_

  class RequestInfo;
  typedef RequestInfo *RequestInfo_ptr;
  typedef TAO_Objref_Var_T<RequestInfo> RequestInfo_var;
  typedef TAO_Objref_Out_T<RequestInfo> RequestInfo_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_PI_Export RequestInfo
    : public virtual ::CORBA::Object
  {
  public:

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef RequestInfo_ptr _ptr_type;
    typedef RequestInfo_var _var_type;
    typedef RequestInfo_out _out_type;

    // The static operations.
    static RequestInfo_ptr _duplicate (RequestInfo_ptr obj);

    static void _tao_release (RequestInfo_ptr obj);

    static RequestInfo_ptr _narrow (::CORBA::Object_ptr obj);
    static RequestInfo_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static RequestInfo_ptr _nil (void);

    virtual ::CORBA::ULong request_id (
      void) = 0;

    virtual char * operation (
      void) = 0;

    virtual ::Dynamic::ParameterList * arguments (
      void) = 0;

    virtual ::Dynamic::ExceptionList * exceptions (
      void) = 0;

    virtual ::Dynamic::ContextList * contexts (
      void) = 0;

    virtual ::Dynamic::RequestContext * operation_context (
      void) = 0;

    virtual ::CORBA::Any * result (
      void) = 0;

    virtual ::CORBA::Boolean response_expected (
      void) = 0;

    virtual ::Messaging::SyncScope sync_scope (
      void) = 0;

    virtual ::PortableInterceptor::ReplyStatus reply_status (
      void) = 0;

    virtual ::CORBA::Object_ptr forward_reference (
      void) = 0;

    virtual ::CORBA::Any * get_slot (
      ::PortableInterceptor::SlotId id) = 0;

    virtual ::IOP::ServiceContext * get_request_service_context (
      ::IOP::ServiceId id) = 0;

    virtual ::IOP::ServiceContext * get_reply_service_context (
      ::IOP::ServiceId id) = 0;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    RequestInfo (void);

    

    virtual ~RequestInfo (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    RequestInfo (const RequestInfo &);

    void operator= (const RequestInfo &);
  };

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module PortableInterceptor

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

#if !defined (_PORTABLEINTERCEPTOR_REQUESTINFO__TRAITS_)
#define _PORTABLEINTERCEPTOR_REQUESTINFO__TRAITS_

  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::RequestInfo>
  {
    static ::PortableInterceptor::RequestInfo_ptr duplicate (
        ::PortableInterceptor::RequestInfo_ptr p);
    static void release (
        ::PortableInterceptor::RequestInfo_ptr p);
    static ::PortableInterceptor::RequestInfo_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableInterceptor::RequestInfo_ptr p,
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

