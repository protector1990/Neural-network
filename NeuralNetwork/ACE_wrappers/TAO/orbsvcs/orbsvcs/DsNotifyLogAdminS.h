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

#ifndef _TAO_IDL_DSNOTIFYLOGADMINS_EHHXCN_H_
#define _TAO_IDL_DSNOTIFYLOGADMINS_EHHXCN_H_

#include /**/ "ace/pre.h"

#include "DsNotifyLogAdminC.h"
#include "DsEventLogAdminS.h"
#include "CosNotifyChannelAdminS.h"
#include "CosNotificationS.h"
#include "CosNotifyFilterS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/TypeCode_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

#include /**/ "orbsvcs/Log/notifylog_skel_export.h"

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

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOG__SARG_TRAITS_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOG__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::DsNotifyLogAdmin::NotifyLog>
    : public
        Object_SArg_Traits_T<
            ::DsNotifyLogAdmin::NotifyLog_ptr,
            ::DsNotifyLogAdmin::NotifyLog_var,
            ::DsNotifyLogAdmin::NotifyLog_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__SARG_TRAITS_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::DsNotifyLogAdmin::NotifyLogFactory>
    : public
        Object_SArg_Traits_T<
            ::DsNotifyLogAdmin::NotifyLogFactory_ptr,
            ::DsNotifyLogAdmin::NotifyLogFactory_var,
            ::DsNotifyLogAdmin::NotifyLogFactory_out,
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

namespace POA_DsNotifyLogAdmin
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

  class NotifyLog;
  typedef NotifyLog *NotifyLog_ptr;

  class TAO_NotifyLog_Skel_Export NotifyLog
    : public virtual POA_DsEventLogAdmin::EventLog,
      public virtual POA_CosNotifyChannelAdmin::EventChannel
  {
  protected:
    NotifyLog (void);
  
  public:
    /// Useful for template programming.
    typedef ::DsNotifyLogAdmin::NotifyLog _stub_type;
    typedef ::DsNotifyLogAdmin::NotifyLog_ptr _stub_ptr_type;
    typedef ::DsNotifyLogAdmin::NotifyLog_var _stub_var_type;

    NotifyLog (const NotifyLog& rhs);
    virtual ~NotifyLog (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::DsNotifyLogAdmin::NotifyLog *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosNotifyFilter::Filter_ptr get_filter (
      void) = 0;

    static void get_filter_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void set_filter (
      ::CosNotifyFilter::Filter_ptr filter) = 0;

    static void set_filter_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

  class NotifyLogFactory;
  typedef NotifyLogFactory *NotifyLogFactory_ptr;

  class TAO_NotifyLog_Skel_Export NotifyLogFactory
    : public virtual POA_DsLogAdmin::LogMgr,
      public virtual POA_CosNotifyChannelAdmin::ConsumerAdmin
  {
  protected:
    NotifyLogFactory (void);
  
  public:
    /// Useful for template programming.
    typedef ::DsNotifyLogAdmin::NotifyLogFactory _stub_type;
    typedef ::DsNotifyLogAdmin::NotifyLogFactory_ptr _stub_ptr_type;
    typedef ::DsNotifyLogAdmin::NotifyLogFactory_var _stub_var_type;

    NotifyLogFactory (const NotifyLogFactory& rhs);
    virtual ~NotifyLogFactory (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::DsNotifyLogAdmin::NotifyLogFactory *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::DsNotifyLogAdmin::NotifyLog_ptr create (
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds,
      const ::CosNotification::QoSProperties & initial_qos,
      const ::CosNotification::AdminProperties & initial_admin,
      ::DsLogAdmin::LogId_out id) = 0;

    static void create_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::DsNotifyLogAdmin::NotifyLog_ptr create_with_id (
      ::DsLogAdmin::LogId id,
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds,
      const ::CosNotification::QoSProperties & initial_qos,
      const ::CosNotification::AdminProperties & initial_admin) = 0;

    static void create_with_id_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:66

} // module DsNotifyLogAdmin

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

