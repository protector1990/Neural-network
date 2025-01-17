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

#ifndef _TAO_IDL_FT_FAULTDETECTORFACTORYC_RS1ONS_H_
#define _TAO_IDL_FT_FAULTDETECTORFACTORYC_RS1ONS_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/FaultTolerance/fault_tol_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
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

#include "orbsvcs/FT_CORBAC.h"
#include "orbsvcs/PortableGroupC.h"
#include "orbsvcs/FT_ReplicaC.h"

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

namespace FT
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FT_FAULT_MONITORING_INTERVAL = "MonitoringInterval";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FT_NOTIFIER = "Notifier";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FT_MONITORABLE = "Monitorable";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FT_EVENT_TYPE_DOMAIN = "FT_CORBA";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FT_EVENT_TYPE_NAME = "ObjectCrashFault";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FT_DOMAIN_ID = "FTDomainId";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FT_LOCATION = "Location";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FT_TYPE_ID = "TypeId";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FT_GROUP_ID = "GroupId";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_constant\constant_ch.cpp:35

  const char *const FAULT_DETECTOR_ROLE_NAME = "FT_FaultDetector";

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_FT_FAULTDETECTORFACTORY__VAR_OUT_CH_)
#define _FT_FAULTDETECTORFACTORY__VAR_OUT_CH_

  class FaultDetectorFactory;
  typedef FaultDetectorFactory *FaultDetectorFactory_ptr;
  typedef TAO_Objref_Var_T<FaultDetectorFactory> FaultDetectorFactory_var;
  typedef TAO_Objref_Out_T<FaultDetectorFactory> FaultDetectorFactory_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_FT_Export FaultDetectorFactory
    : public virtual ::PortableGroup::GenericFactory,
      public virtual ::FT::PullMonitorable
  
  {
  public:
    friend class TAO::Narrow_Utils<FaultDetectorFactory>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef FaultDetectorFactory_ptr _ptr_type;
    typedef FaultDetectorFactory_var _var_type;
    typedef FaultDetectorFactory_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static FaultDetectorFactory_ptr _duplicate (FaultDetectorFactory_ptr obj);

    static void _tao_release (FaultDetectorFactory_ptr obj);

    static FaultDetectorFactory_ptr _narrow (::CORBA::Object_ptr obj);
    static FaultDetectorFactory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static FaultDetectorFactory_ptr _nil (void);

    virtual void change_properties (
      const ::PortableGroup::Properties & property_set);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    FaultDetectorFactory (void);

    // Concrete non-local interface only.
    FaultDetectorFactory (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    FaultDetectorFactory (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~FaultDetectorFactory (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    FaultDetectorFactory (const FaultDetectorFactory &);

    void operator= (const FaultDetectorFactory &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_FT_Export ::CORBA::TypeCode_ptr const _tc_FaultDetectorFactory;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module FT

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_FT_FAULTDETECTORFACTORY__ARG_TRAITS_)
#define _FT_FAULTDETECTORFACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::FT::FaultDetectorFactory>
    : public
        Object_Arg_Traits_T<
            ::FT::FaultDetectorFactory_ptr,
            ::FT::FaultDetectorFactory_var,
            ::FT::FaultDetectorFactory_out,
            TAO::Objref_Traits<FT::FaultDetectorFactory>,
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

#if !defined (_FT_FAULTDETECTORFACTORY__TRAITS_)
#define _FT_FAULTDETECTORFACTORY__TRAITS_

  template<>
  struct TAO_FT_Export Objref_Traits< ::FT::FaultDetectorFactory>
  {
    static ::FT::FaultDetectorFactory_ptr duplicate (
        ::FT::FaultDetectorFactory_ptr p);
    static void release (
        ::FT::FaultDetectorFactory_ptr p);
    static ::FT::FaultDetectorFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::FT::FaultDetectorFactory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT
{
  TAO_FT_Export void operator<<= ( ::CORBA::Any &, FaultDetectorFactory_ptr); // copying
  TAO_FT_Export void operator<<= ( ::CORBA::Any &, FaultDetectorFactory_ptr *); // non-copying
  TAO_FT_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FaultDetectorFactory_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_Export void operator<<= (::CORBA::Any &, FT::FaultDetectorFactory_ptr); // copying
TAO_FT_Export void operator<<= (::CORBA::Any &, FT::FaultDetectorFactory_ptr *); // non-copying
TAO_FT_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT::FaultDetectorFactory_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const FT::FaultDetectorFactory_ptr );
TAO_FT_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, FT::FaultDetectorFactory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "FT_FaultDetectorFactoryC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

