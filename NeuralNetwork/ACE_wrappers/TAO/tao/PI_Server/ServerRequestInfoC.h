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

#ifndef _TAO_PIDL_SERVERREQUESTINFOC_AWBJPY_H_
#define _TAO_PIDL_SERVERREQUESTINFOC_AWBJPY_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/PI_Server/pi_server_export.h"
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
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/PI/PI_includeC.h"
#include "tao/Policy_ForwardC.h"
#include "tao/orb_typesC.h"

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

#if !defined (_PORTABLEINTERCEPTOR_SERVERREQUESTINFO__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_SERVERREQUESTINFO__VAR_OUT_CH_

  class ServerRequestInfo;
  typedef ServerRequestInfo *ServerRequestInfo_ptr;
  typedef TAO_Objref_Var_T<ServerRequestInfo> ServerRequestInfo_var;
  typedef TAO_Objref_Out_T<ServerRequestInfo> ServerRequestInfo_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_PI_Server_Export ServerRequestInfo
    : public virtual ::PortableInterceptor::RequestInfo
  
  {
  public:

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef ServerRequestInfo_ptr _ptr_type;
    typedef ServerRequestInfo_var _var_type;
    typedef ServerRequestInfo_out _out_type;

    // The static operations.
    static ServerRequestInfo_ptr _duplicate (ServerRequestInfo_ptr obj);

    static void _tao_release (ServerRequestInfo_ptr obj);

    static ServerRequestInfo_ptr _narrow (::CORBA::Object_ptr obj);
    static ServerRequestInfo_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ServerRequestInfo_ptr _nil (void);

    virtual ::CORBA::Any * sending_exception (
      void) = 0;

    virtual char * server_id (
      void) = 0;

    virtual char * orb_id (
      void) = 0;

    virtual ::PortableInterceptor::AdapterName * adapter_name (
      void) = 0;

    virtual ::PortableInterceptor::ObjectId * object_id (
      void) = 0;

    virtual ::CORBA::OctetSeq * adapter_id (
      void) = 0;

    virtual char * target_most_derived_interface (
      void) = 0;

    virtual ::CORBA::Policy_ptr get_server_policy (
      ::CORBA::PolicyType type) = 0;

    virtual void set_slot (
      ::PortableInterceptor::SlotId id,
      const ::CORBA::Any & data) = 0;

    virtual ::CORBA::Boolean target_is_a (
      const char * id) = 0;

    virtual void add_reply_service_context (
      const ::IOP::ServiceContext & service_context,
      ::CORBA::Boolean replace) = 0;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    ServerRequestInfo (void);

    

    virtual ~ServerRequestInfo (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ServerRequestInfo (const ServerRequestInfo &);

    void operator= (const ServerRequestInfo &);
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

#if !defined (_PORTABLEINTERCEPTOR_SERVERREQUESTINFO__TRAITS_)
#define _PORTABLEINTERCEPTOR_SERVERREQUESTINFO__TRAITS_

  template<>
  struct TAO_PI_Server_Export Objref_Traits< ::PortableInterceptor::ServerRequestInfo>
  {
    static ::PortableInterceptor::ServerRequestInfo_ptr duplicate (
        ::PortableInterceptor::ServerRequestInfo_ptr p);
    static void release (
        ::PortableInterceptor::ServerRequestInfo_ptr p);
    static ::PortableInterceptor::ServerRequestInfo_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableInterceptor::ServerRequestInfo_ptr p,
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
