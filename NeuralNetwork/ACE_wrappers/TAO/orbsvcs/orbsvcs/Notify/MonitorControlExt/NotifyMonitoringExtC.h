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

#ifndef _TAO_IDL_NOTIFY_MONITORCONTROLEXT_NOTIFYMONITORINGEXTC_5CIP59_H_
#define _TAO_IDL_NOTIFY_MONITORCONTROLEXT_NOTIFYMONITORINGEXTC_5CIP59_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/Notify/MonitorControlExt/notify_mc_ext_export.h"
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
#include "tao/String_Manager_T.h"
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
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "orbsvcs/NotifyExtC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_root\root_ch.cpp:157
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

namespace NotifyMonitoringExt
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const ActiveEventChannelCount = "ActiveEventChannelCount";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const InactiveEventChannelCount = "InactiveEventChannelCount";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const ActiveEventChannelNames = "ActiveEventChannelNames";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const InactiveEventChannelNames = "InactiveEventChannelNames";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelCreationTime = "CreationTime";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelConsumerCount = "ConsumerCount";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelSupplierCount = "SupplierCount";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelConsumerNames = "ConsumerNames";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelSupplierNames = "SupplierNames";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelTimedoutConsumerNames = "TimedoutConsumerNames";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelConsumerAdminCount = "ConsumerAdminCount";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelSupplierAdminCount = "SupplierAdminCount";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelConsumerAdminNames = "ConsumerAdminNames";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelSupplierAdminNames = "SupplierAdminNames";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelQueueSize = "QueueSize";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelQueueElementCount = "QueueElementCount";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelOldestEvent = "OldestEvent";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelSlowestConsumers = "SlowestConsumers";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelFactoryNames = "FactoryNames";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const EventChannelQueueOverflows = "QueueOverflows";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\exception_ch.cpp:41

  class TAO_Notify_MC_Ext_Export NameAlreadyUsed : public ::CORBA::UserException
  {
  public:

    NameAlreadyUsed (void);
    NameAlreadyUsed (const NameAlreadyUsed &);
    ~NameAlreadyUsed (void);

    NameAlreadyUsed &operator= (const NameAlreadyUsed &);

    static void _tao_any_destructor (void *);

    static NameAlreadyUsed *_downcast ( ::CORBA::Exception *);
    static const NameAlreadyUsed *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Notify_MC_Ext_Export ::CORBA::TypeCode_ptr const _tc_NameAlreadyUsed;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\exception_ch.cpp:41

  class TAO_Notify_MC_Ext_Export NameMapError : public ::CORBA::UserException
  {
  public:

    NameMapError (void);
    NameMapError (const NameMapError &);
    ~NameMapError (void);

    NameMapError &operator= (const NameMapError &);

    static void _tao_any_destructor (void *);

    static NameMapError *_downcast ( ::CORBA::Exception *);
    static const NameMapError *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Notify_MC_Ext_Export ::CORBA::TypeCode_ptr const _tc_NameMapError;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_NOTIFYMONITORINGEXT_SUPPLIERADMIN__VAR_OUT_CH_)
#define _NOTIFYMONITORINGEXT_SUPPLIERADMIN__VAR_OUT_CH_

  class SupplierAdmin;
  typedef SupplierAdmin *SupplierAdmin_ptr;
  typedef TAO_Objref_Var_T<SupplierAdmin> SupplierAdmin_var;
  typedef TAO_Objref_Out_T<SupplierAdmin> SupplierAdmin_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_Notify_MC_Ext_Export SupplierAdmin
    : public virtual ::NotifyExt::SupplierAdmin
  
  {
  public:
    friend class TAO::Narrow_Utils<SupplierAdmin>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef SupplierAdmin_ptr _ptr_type;
    typedef SupplierAdmin_var _var_type;
    typedef SupplierAdmin_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static SupplierAdmin_ptr _duplicate (SupplierAdmin_ptr obj);

    static void _tao_release (SupplierAdmin_ptr obj);

    static SupplierAdmin_ptr _narrow (::CORBA::Object_ptr obj);
    static SupplierAdmin_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static SupplierAdmin_ptr _nil (void);

    virtual ::CosNotifyChannelAdmin::ProxyConsumer_ptr obtain_named_notification_push_consumer (
      ::CosNotifyChannelAdmin::ClientType ctype,
      ::CosNotifyChannelAdmin::ProxyID_out proxy_id,
      const char * name);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    SupplierAdmin (void);

    // Concrete non-local interface only.
    SupplierAdmin (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    SupplierAdmin (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~SupplierAdmin (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    SupplierAdmin (const SupplierAdmin &);

    void operator= (const SupplierAdmin &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Notify_MC_Ext_Export ::CORBA::TypeCode_ptr const _tc_SupplierAdmin;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_NOTIFYMONITORINGEXT_CONSUMERADMIN__VAR_OUT_CH_)
#define _NOTIFYMONITORINGEXT_CONSUMERADMIN__VAR_OUT_CH_

  class ConsumerAdmin;
  typedef ConsumerAdmin *ConsumerAdmin_ptr;
  typedef TAO_Objref_Var_T<ConsumerAdmin> ConsumerAdmin_var;
  typedef TAO_Objref_Out_T<ConsumerAdmin> ConsumerAdmin_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_Notify_MC_Ext_Export ConsumerAdmin
    : public virtual ::NotifyExt::ConsumerAdmin
  
  {
  public:
    friend class TAO::Narrow_Utils<ConsumerAdmin>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef ConsumerAdmin_ptr _ptr_type;
    typedef ConsumerAdmin_var _var_type;
    typedef ConsumerAdmin_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ConsumerAdmin_ptr _duplicate (ConsumerAdmin_ptr obj);

    static void _tao_release (ConsumerAdmin_ptr obj);

    static ConsumerAdmin_ptr _narrow (::CORBA::Object_ptr obj);
    static ConsumerAdmin_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ConsumerAdmin_ptr _nil (void);

    virtual ::CosNotifyChannelAdmin::ProxySupplier_ptr obtain_named_notification_push_supplier (
      ::CosNotifyChannelAdmin::ClientType ctype,
      ::CosNotifyChannelAdmin::ProxyID_out proxy_id,
      const char * name);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    ConsumerAdmin (void);

    // Concrete non-local interface only.
    ConsumerAdmin (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    ConsumerAdmin (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~ConsumerAdmin (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ConsumerAdmin (const ConsumerAdmin &);

    void operator= (const ConsumerAdmin &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Notify_MC_Ext_Export ::CORBA::TypeCode_ptr const _tc_ConsumerAdmin;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_NOTIFYMONITORINGEXT_EVENTCHANNEL__VAR_OUT_CH_)
#define _NOTIFYMONITORINGEXT_EVENTCHANNEL__VAR_OUT_CH_

  class EventChannel;
  typedef EventChannel *EventChannel_ptr;
  typedef TAO_Objref_Var_T<EventChannel> EventChannel_var;
  typedef TAO_Objref_Out_T<EventChannel> EventChannel_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_Notify_MC_Ext_Export EventChannel
    : public virtual ::CosNotifyChannelAdmin::EventChannel
  
  {
  public:
    friend class TAO::Narrow_Utils<EventChannel>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef EventChannel_ptr _ptr_type;
    typedef EventChannel_var _var_type;
    typedef EventChannel_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static EventChannel_ptr _duplicate (EventChannel_ptr obj);

    static void _tao_release (EventChannel_ptr obj);

    static EventChannel_ptr _narrow (::CORBA::Object_ptr obj);
    static EventChannel_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static EventChannel_ptr _nil (void);

    virtual ::CosNotifyChannelAdmin::ConsumerAdmin_ptr named_new_for_consumers (
      ::CosNotifyChannelAdmin::InterFilterGroupOperator op,
      ::CosNotifyChannelAdmin::AdminID_out id,
      const char * name);

    virtual ::CosNotifyChannelAdmin::SupplierAdmin_ptr named_new_for_suppliers (
      ::CosNotifyChannelAdmin::InterFilterGroupOperator op,
      ::CosNotifyChannelAdmin::AdminID_out id,
      const char * name);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    EventChannel (void);

    // Concrete non-local interface only.
    EventChannel (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    EventChannel (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~EventChannel (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    EventChannel (const EventChannel &);

    void operator= (const EventChannel &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Notify_MC_Ext_Export ::CORBA::TypeCode_ptr const _tc_EventChannel;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_NOTIFYMONITORINGEXT_EVENTCHANNELFACTORY__VAR_OUT_CH_)
#define _NOTIFYMONITORINGEXT_EVENTCHANNELFACTORY__VAR_OUT_CH_

  class EventChannelFactory;
  typedef EventChannelFactory *EventChannelFactory_ptr;
  typedef TAO_Objref_Var_T<EventChannelFactory> EventChannelFactory_var;
  typedef TAO_Objref_Out_T<EventChannelFactory> EventChannelFactory_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_Notify_MC_Ext_Export EventChannelFactory
    : public virtual ::NotifyExt::EventChannelFactory
  
  {
  public:
    friend class TAO::Narrow_Utils<EventChannelFactory>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef EventChannelFactory_ptr _ptr_type;
    typedef EventChannelFactory_var _var_type;
    typedef EventChannelFactory_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static EventChannelFactory_ptr _duplicate (EventChannelFactory_ptr obj);

    static void _tao_release (EventChannelFactory_ptr obj);

    static EventChannelFactory_ptr _narrow (::CORBA::Object_ptr obj);
    static EventChannelFactory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static EventChannelFactory_ptr _nil (void);

    virtual ::CosNotifyChannelAdmin::EventChannel_ptr create_named_channel (
      const ::CosNotification::QoSProperties & initial_qos,
      const ::CosNotification::AdminProperties & initial_admin,
      ::CosNotifyChannelAdmin::ChannelID_out id,
      const char * name);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    EventChannelFactory (void);

    // Concrete non-local interface only.
    EventChannelFactory (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    EventChannelFactory (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~EventChannelFactory (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    EventChannelFactory (const EventChannelFactory &);

    void operator= (const EventChannelFactory &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Notify_MC_Ext_Export ::CORBA::TypeCode_ptr const _tc_EventChannelFactory;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module NotifyMonitoringExt

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_NOTIFYMONITORINGEXT_SUPPLIERADMIN__ARG_TRAITS_)
#define _NOTIFYMONITORINGEXT_SUPPLIERADMIN__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::NotifyMonitoringExt::SupplierAdmin>
    : public
        Object_Arg_Traits_T<
            ::NotifyMonitoringExt::SupplierAdmin_ptr,
            ::NotifyMonitoringExt::SupplierAdmin_var,
            ::NotifyMonitoringExt::SupplierAdmin_out,
            TAO::Objref_Traits<NotifyMonitoringExt::SupplierAdmin>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_NOTIFYMONITORINGEXT_CONSUMERADMIN__ARG_TRAITS_)
#define _NOTIFYMONITORINGEXT_CONSUMERADMIN__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::NotifyMonitoringExt::ConsumerAdmin>
    : public
        Object_Arg_Traits_T<
            ::NotifyMonitoringExt::ConsumerAdmin_ptr,
            ::NotifyMonitoringExt::ConsumerAdmin_var,
            ::NotifyMonitoringExt::ConsumerAdmin_out,
            TAO::Objref_Traits<NotifyMonitoringExt::ConsumerAdmin>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_NOTIFYMONITORINGEXT_EVENTCHANNEL__ARG_TRAITS_)
#define _NOTIFYMONITORINGEXT_EVENTCHANNEL__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::NotifyMonitoringExt::EventChannel>
    : public
        Object_Arg_Traits_T<
            ::NotifyMonitoringExt::EventChannel_ptr,
            ::NotifyMonitoringExt::EventChannel_var,
            ::NotifyMonitoringExt::EventChannel_out,
            TAO::Objref_Traits<NotifyMonitoringExt::EventChannel>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_NOTIFYMONITORINGEXT_EVENTCHANNELFACTORY__ARG_TRAITS_)
#define _NOTIFYMONITORINGEXT_EVENTCHANNELFACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::NotifyMonitoringExt::EventChannelFactory>
    : public
        Object_Arg_Traits_T<
            ::NotifyMonitoringExt::EventChannelFactory_ptr,
            ::NotifyMonitoringExt::EventChannelFactory_var,
            ::NotifyMonitoringExt::EventChannelFactory_out,
            TAO::Objref_Traits<NotifyMonitoringExt::EventChannelFactory>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_NOTIFYMONITORINGEXT_SUPPLIERADMIN__TRAITS_)
#define _NOTIFYMONITORINGEXT_SUPPLIERADMIN__TRAITS_

  template<>
  struct TAO_Notify_MC_Ext_Export Objref_Traits< ::NotifyMonitoringExt::SupplierAdmin>
  {
    static ::NotifyMonitoringExt::SupplierAdmin_ptr duplicate (
        ::NotifyMonitoringExt::SupplierAdmin_ptr p);
    static void release (
        ::NotifyMonitoringExt::SupplierAdmin_ptr p);
    static ::NotifyMonitoringExt::SupplierAdmin_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::NotifyMonitoringExt::SupplierAdmin_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_NOTIFYMONITORINGEXT_CONSUMERADMIN__TRAITS_)
#define _NOTIFYMONITORINGEXT_CONSUMERADMIN__TRAITS_

  template<>
  struct TAO_Notify_MC_Ext_Export Objref_Traits< ::NotifyMonitoringExt::ConsumerAdmin>
  {
    static ::NotifyMonitoringExt::ConsumerAdmin_ptr duplicate (
        ::NotifyMonitoringExt::ConsumerAdmin_ptr p);
    static void release (
        ::NotifyMonitoringExt::ConsumerAdmin_ptr p);
    static ::NotifyMonitoringExt::ConsumerAdmin_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::NotifyMonitoringExt::ConsumerAdmin_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_NOTIFYMONITORINGEXT_EVENTCHANNEL__TRAITS_)
#define _NOTIFYMONITORINGEXT_EVENTCHANNEL__TRAITS_

  template<>
  struct TAO_Notify_MC_Ext_Export Objref_Traits< ::NotifyMonitoringExt::EventChannel>
  {
    static ::NotifyMonitoringExt::EventChannel_ptr duplicate (
        ::NotifyMonitoringExt::EventChannel_ptr p);
    static void release (
        ::NotifyMonitoringExt::EventChannel_ptr p);
    static ::NotifyMonitoringExt::EventChannel_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::NotifyMonitoringExt::EventChannel_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_NOTIFYMONITORINGEXT_EVENTCHANNELFACTORY__TRAITS_)
#define _NOTIFYMONITORINGEXT_EVENTCHANNELFACTORY__TRAITS_

  template<>
  struct TAO_Notify_MC_Ext_Export Objref_Traits< ::NotifyMonitoringExt::EventChannelFactory>
  {
    static ::NotifyMonitoringExt::EventChannelFactory_ptr duplicate (
        ::NotifyMonitoringExt::EventChannelFactory_ptr p);
    static void release (
        ::NotifyMonitoringExt::EventChannelFactory_ptr p);
    static ::NotifyMonitoringExt::EventChannelFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::NotifyMonitoringExt::EventChannelFactory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\any_op_ch.cpp:38

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace NotifyMonitoringExt
{
  

  TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, const ::NotifyMonitoringExt::NameAlreadyUsed &); // copying version
  TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, ::NotifyMonitoringExt::NameAlreadyUsed*); // noncopying version
  TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::NotifyMonitoringExt::NameAlreadyUsed *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, const NotifyMonitoringExt::NameAlreadyUsed &); // copying version
TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::NameAlreadyUsed*); // noncopying version
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const NotifyMonitoringExt::NameAlreadyUsed *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\any_op_ch.cpp:38

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace NotifyMonitoringExt
{
  

  TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, const ::NotifyMonitoringExt::NameMapError &); // copying version
  TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, ::NotifyMonitoringExt::NameMapError*); // noncopying version
  TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::NotifyMonitoringExt::NameMapError *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, const NotifyMonitoringExt::NameMapError &); // copying version
TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::NameMapError*); // noncopying version
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const NotifyMonitoringExt::NameMapError *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace NotifyMonitoringExt
{
  TAO_Notify_MC_Ext_Export void operator<<= ( ::CORBA::Any &, SupplierAdmin_ptr); // copying
  TAO_Notify_MC_Ext_Export void operator<<= ( ::CORBA::Any &, SupplierAdmin_ptr *); // non-copying
  TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, SupplierAdmin_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::SupplierAdmin_ptr); // copying
TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::SupplierAdmin_ptr *); // non-copying
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, NotifyMonitoringExt::SupplierAdmin_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace NotifyMonitoringExt
{
  TAO_Notify_MC_Ext_Export void operator<<= ( ::CORBA::Any &, ConsumerAdmin_ptr); // copying
  TAO_Notify_MC_Ext_Export void operator<<= ( ::CORBA::Any &, ConsumerAdmin_ptr *); // non-copying
  TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ConsumerAdmin_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::ConsumerAdmin_ptr); // copying
TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::ConsumerAdmin_ptr *); // non-copying
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, NotifyMonitoringExt::ConsumerAdmin_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace NotifyMonitoringExt
{
  TAO_Notify_MC_Ext_Export void operator<<= ( ::CORBA::Any &, EventChannel_ptr); // copying
  TAO_Notify_MC_Ext_Export void operator<<= ( ::CORBA::Any &, EventChannel_ptr *); // non-copying
  TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EventChannel_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::EventChannel_ptr); // copying
TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::EventChannel_ptr *); // non-copying
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, NotifyMonitoringExt::EventChannel_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace NotifyMonitoringExt
{
  TAO_Notify_MC_Ext_Export void operator<<= ( ::CORBA::Any &, EventChannelFactory_ptr); // copying
  TAO_Notify_MC_Ext_Export void operator<<= ( ::CORBA::Any &, EventChannelFactory_ptr *); // non-copying
  TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EventChannelFactory_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::EventChannelFactory_ptr); // copying
TAO_Notify_MC_Ext_Export void operator<<= (::CORBA::Any &, NotifyMonitoringExt::EventChannelFactory_ptr *); // non-copying
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, NotifyMonitoringExt::EventChannelFactory_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const NotifyMonitoringExt::NameAlreadyUsed &);
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, NotifyMonitoringExt::NameAlreadyUsed &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const NotifyMonitoringExt::NameMapError &);
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, NotifyMonitoringExt::NameMapError &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const NotifyMonitoringExt::SupplierAdmin_ptr );
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, NotifyMonitoringExt::SupplierAdmin_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const NotifyMonitoringExt::ConsumerAdmin_ptr );
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, NotifyMonitoringExt::ConsumerAdmin_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const NotifyMonitoringExt::EventChannel_ptr );
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, NotifyMonitoringExt::EventChannel_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const NotifyMonitoringExt::EventChannelFactory_ptr );
TAO_Notify_MC_Ext_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, NotifyMonitoringExt::EventChannelFactory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686
#if defined (__ACE_INLINE__)
#include "NotifyMonitoringExtC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

