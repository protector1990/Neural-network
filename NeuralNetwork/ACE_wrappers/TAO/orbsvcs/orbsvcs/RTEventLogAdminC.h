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

#ifndef _TAO_IDL_RTEVENTLOGADMINC_RKCGOR_H_
#define _TAO_IDL_RTEVENTLOGADMINC_RKCGOR_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/Log/rteventlog_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
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

#include "RtecEventChannelAdminC.h"
#include "DsLogAdminC.h"

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

namespace RTEventLogAdmin
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_RTEVENTLOGADMIN_EVENTLOG__VAR_OUT_CH_)
#define _RTEVENTLOGADMIN_EVENTLOG__VAR_OUT_CH_

  class EventLog;
  typedef EventLog *EventLog_ptr;
  typedef TAO_Objref_Var_T<EventLog> EventLog_var;
  typedef TAO_Objref_Out_T<EventLog> EventLog_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_RTEventLog_Export EventLog
    : public virtual ::DsLogAdmin::Log,
      public virtual ::RtecEventChannelAdmin::EventChannel
  
  {
  public:
    friend class TAO::Narrow_Utils<EventLog>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef EventLog_ptr _ptr_type;
    typedef EventLog_var _var_type;
    typedef EventLog_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static EventLog_ptr _duplicate (EventLog_ptr obj);

    static void _tao_release (EventLog_ptr obj);

    static EventLog_ptr _narrow (::CORBA::Object_ptr obj);
    static EventLog_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static EventLog_ptr _nil (void);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    EventLog (void);

    // Concrete non-local interface only.
    EventLog (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    EventLog (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~EventLog (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    EventLog (const EventLog &);

    void operator= (const EventLog &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_RTEventLog_Export ::CORBA::TypeCode_ptr const _tc_EventLog;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_RTEVENTLOGADMIN_EVENTLOGFACTORY__VAR_OUT_CH_)
#define _RTEVENTLOGADMIN_EVENTLOGFACTORY__VAR_OUT_CH_

  class EventLogFactory;
  typedef EventLogFactory *EventLogFactory_ptr;
  typedef TAO_Objref_Var_T<EventLogFactory> EventLogFactory_var;
  typedef TAO_Objref_Out_T<EventLogFactory> EventLogFactory_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_RTEventLog_Export EventLogFactory
    : public virtual ::DsLogAdmin::LogMgr,
      public virtual ::RtecEventChannelAdmin::ConsumerAdmin
  
  {
  public:
    friend class TAO::Narrow_Utils<EventLogFactory>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef EventLogFactory_ptr _ptr_type;
    typedef EventLogFactory_var _var_type;
    typedef EventLogFactory_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static EventLogFactory_ptr _duplicate (EventLogFactory_ptr obj);

    static void _tao_release (EventLogFactory_ptr obj);

    static EventLogFactory_ptr _narrow (::CORBA::Object_ptr obj);
    static EventLogFactory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static EventLogFactory_ptr _nil (void);

    virtual ::RTEventLogAdmin::EventLog_ptr create (
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds,
      ::DsLogAdmin::LogId_out id);

    virtual ::RTEventLogAdmin::EventLog_ptr create_with_id (
      ::DsLogAdmin::LogId id,
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    EventLogFactory (void);

    // Concrete non-local interface only.
    EventLogFactory (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    EventLogFactory (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~EventLogFactory (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    EventLogFactory (const EventLogFactory &);

    void operator= (const EventLogFactory &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_RTEventLog_Export ::CORBA::TypeCode_ptr const _tc_EventLogFactory;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module RTEventLogAdmin

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_RTEVENTLOGADMIN_EVENTLOG__ARG_TRAITS_)
#define _RTEVENTLOGADMIN_EVENTLOG__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::RTEventLogAdmin::EventLog>
    : public
        Object_Arg_Traits_T<
            ::RTEventLogAdmin::EventLog_ptr,
            ::RTEventLogAdmin::EventLog_var,
            ::RTEventLogAdmin::EventLog_out,
            TAO::Objref_Traits<RTEventLogAdmin::EventLog>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_RTEVENTLOGADMIN_EVENTLOGFACTORY__ARG_TRAITS_)
#define _RTEVENTLOGADMIN_EVENTLOGFACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::RTEventLogAdmin::EventLogFactory>
    : public
        Object_Arg_Traits_T<
            ::RTEventLogAdmin::EventLogFactory_ptr,
            ::RTEventLogAdmin::EventLogFactory_var,
            ::RTEventLogAdmin::EventLogFactory_out,
            TAO::Objref_Traits<RTEventLogAdmin::EventLogFactory>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
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

#if !defined (_RTEVENTLOGADMIN_EVENTLOG__TRAITS_)
#define _RTEVENTLOGADMIN_EVENTLOG__TRAITS_

  template<>
  struct TAO_RTEventLog_Export Objref_Traits< ::RTEventLogAdmin::EventLog>
  {
    static ::RTEventLogAdmin::EventLog_ptr duplicate (
        ::RTEventLogAdmin::EventLog_ptr p);
    static void release (
        ::RTEventLogAdmin::EventLog_ptr p);
    static ::RTEventLogAdmin::EventLog_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::RTEventLogAdmin::EventLog_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_RTEVENTLOGADMIN_EVENTLOGFACTORY__TRAITS_)
#define _RTEVENTLOGADMIN_EVENTLOGFACTORY__TRAITS_

  template<>
  struct TAO_RTEventLog_Export Objref_Traits< ::RTEventLogAdmin::EventLogFactory>
  {
    static ::RTEventLogAdmin::EventLogFactory_ptr duplicate (
        ::RTEventLogAdmin::EventLogFactory_ptr p);
    static void release (
        ::RTEventLogAdmin::EventLogFactory_ptr p);
    static ::RTEventLogAdmin::EventLogFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::RTEventLogAdmin::EventLogFactory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace RTEventLogAdmin
{
  TAO_RTEventLog_Export void operator<<= ( ::CORBA::Any &, EventLog_ptr); // copying
  TAO_RTEventLog_Export void operator<<= ( ::CORBA::Any &, EventLog_ptr *); // non-copying
  TAO_RTEventLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EventLog_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_RTEventLog_Export void operator<<= (::CORBA::Any &, RTEventLogAdmin::EventLog_ptr); // copying
TAO_RTEventLog_Export void operator<<= (::CORBA::Any &, RTEventLogAdmin::EventLog_ptr *); // non-copying
TAO_RTEventLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, RTEventLogAdmin::EventLog_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace RTEventLogAdmin
{
  TAO_RTEventLog_Export void operator<<= ( ::CORBA::Any &, EventLogFactory_ptr); // copying
  TAO_RTEventLog_Export void operator<<= ( ::CORBA::Any &, EventLogFactory_ptr *); // non-copying
  TAO_RTEventLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EventLogFactory_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_RTEventLog_Export void operator<<= (::CORBA::Any &, RTEventLogAdmin::EventLogFactory_ptr); // copying
TAO_RTEventLog_Export void operator<<= (::CORBA::Any &, RTEventLogAdmin::EventLogFactory_ptr *); // non-copying
TAO_RTEventLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, RTEventLogAdmin::EventLogFactory_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_RTEventLog_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const RTEventLogAdmin::EventLog_ptr );
TAO_RTEventLog_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, RTEventLogAdmin::EventLog_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_RTEventLog_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const RTEventLogAdmin::EventLogFactory_ptr );
TAO_RTEventLog_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, RTEventLogAdmin::EventLogFactory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "RTEventLogAdminC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
