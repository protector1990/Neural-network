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
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:451

#ifndef _TAO_IDL_EVENT_FORWARDERS_BR23IJ_H_
#define _TAO_IDL_EVENT_FORWARDERS_BR23IJ_H_

#include /**/ "ace/pre.h"

#include "Event_ForwarderC.h"
#include "CosNotificationS.h"
#include "CosNotifyChannelAdminS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Any_SArg_Traits.h"
#include "tao/PortableServer/TypeCode_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

#include /**/ "orbsvcs/Notify/notify_skel_export.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_EVENT_FORWARDER_STRUCTUREDPROXYPUSHSUPPLIER__SARG_TRAITS_)
#define _EVENT_FORWARDER_STRUCTUREDPROXYPUSHSUPPLIER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Event_Forwarder::StructuredProxyPushSupplier>
    : public
        Object_SArg_Traits_T<
            ::Event_Forwarder::StructuredProxyPushSupplier_ptr,
            ::Event_Forwarder::StructuredProxyPushSupplier_var,
            ::Event_Forwarder::StructuredProxyPushSupplier_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_EVENT_FORWARDER_PROXYPUSHSUPPLIER__SARG_TRAITS_)
#define _EVENT_FORWARDER_PROXYPUSHSUPPLIER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Event_Forwarder::ProxyPushSupplier>
    : public
        Object_SArg_Traits_T<
            ::Event_Forwarder::ProxyPushSupplier_ptr,
            ::Event_Forwarder::ProxyPushSupplier_var,
            ::Event_Forwarder::ProxyPushSupplier_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:35

namespace POA_Event_Forwarder
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

  class StructuredProxyPushSupplier;
  typedef StructuredProxyPushSupplier *StructuredProxyPushSupplier_ptr;

  class TAO_Notify_Skel_Export StructuredProxyPushSupplier
    : public virtual POA_CosNotifyChannelAdmin::StructuredProxyPushSupplier
  {
  protected:
    StructuredProxyPushSupplier (void);
  
  public:
    /// Useful for template programming.
    typedef ::Event_Forwarder::StructuredProxyPushSupplier _stub_type;
    typedef ::Event_Forwarder::StructuredProxyPushSupplier_ptr _stub_ptr_type;
    typedef ::Event_Forwarder::StructuredProxyPushSupplier_var _stub_var_type;

    StructuredProxyPushSupplier (const StructuredProxyPushSupplier& rhs);
    virtual ~StructuredProxyPushSupplier (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Event_Forwarder::StructuredProxyPushSupplier *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void forward_structured (
      const ::CosNotification::StructuredEvent & event) = 0;

    static void forward_structured_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void forward_structured_no_filtering (
      const ::CosNotification::StructuredEvent & event) = 0;

    static void forward_structured_no_filtering_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void forward_any (
      const ::CORBA::Any & event) = 0;

    static void forward_any_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void forward_any_no_filtering (
      const ::CORBA::Any & event) = 0;

    static void forward_any_no_filtering_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

  class ProxyPushSupplier;
  typedef ProxyPushSupplier *ProxyPushSupplier_ptr;

  class TAO_Notify_Skel_Export ProxyPushSupplier
    : public virtual POA_CosNotifyChannelAdmin::ProxyPushSupplier
  {
  protected:
    ProxyPushSupplier (void);
  
  public:
    /// Useful for template programming.
    typedef ::Event_Forwarder::ProxyPushSupplier _stub_type;
    typedef ::Event_Forwarder::ProxyPushSupplier_ptr _stub_ptr_type;
    typedef ::Event_Forwarder::ProxyPushSupplier_var _stub_var_type;

    ProxyPushSupplier (const ProxyPushSupplier& rhs);
    virtual ~ProxyPushSupplier (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Event_Forwarder::ProxyPushSupplier *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void forward_structured (
      const ::CosNotification::StructuredEvent & event) = 0;

    static void forward_structured_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void forward_structured_no_filtering (
      const ::CosNotification::StructuredEvent & event) = 0;

    static void forward_structured_no_filtering_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void forward_any (
      const ::CORBA::Any & event) = 0;

    static void forward_any_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void forward_any_no_filtering (
      const ::CORBA::Any & event) = 0;

    static void forward_any_no_filtering_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:66

} // module Event_Forwarder

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */
