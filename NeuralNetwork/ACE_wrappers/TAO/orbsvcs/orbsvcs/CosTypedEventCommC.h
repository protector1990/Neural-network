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

#ifndef _TAO_IDL_COSTYPEDEVENTCOMMC_FXZPHZ_H_
#define _TAO_IDL_COSTYPEDEVENTCOMMC_FXZPHZ_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/CosEvent/event_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
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

#include "CosEventCommC.h"

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

namespace CosTypedEventComm
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_COSTYPEDEVENTCOMM_TYPEDPUSHCONSUMER__VAR_OUT_CH_)
#define _COSTYPEDEVENTCOMM_TYPEDPUSHCONSUMER__VAR_OUT_CH_

  class TypedPushConsumer;
  typedef TypedPushConsumer *TypedPushConsumer_ptr;
  typedef TAO_Objref_Var_T<TypedPushConsumer> TypedPushConsumer_var;
  typedef TAO_Objref_Out_T<TypedPushConsumer> TypedPushConsumer_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_Event_Export TypedPushConsumer
    : public virtual ::CosEventComm::PushConsumer
  
  {
  public:
    friend class TAO::Narrow_Utils<TypedPushConsumer>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef TypedPushConsumer_ptr _ptr_type;
    typedef TypedPushConsumer_var _var_type;
    typedef TypedPushConsumer_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static TypedPushConsumer_ptr _duplicate (TypedPushConsumer_ptr obj);

    static void _tao_release (TypedPushConsumer_ptr obj);

    static TypedPushConsumer_ptr _narrow (::CORBA::Object_ptr obj);
    static TypedPushConsumer_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static TypedPushConsumer_ptr _nil (void);

    virtual ::CORBA::Object_ptr get_typed_consumer (
      void);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    TypedPushConsumer (void);

    // Concrete non-local interface only.
    TypedPushConsumer (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    TypedPushConsumer (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~TypedPushConsumer (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    TypedPushConsumer (const TypedPushConsumer &);

    void operator= (const TypedPushConsumer &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Event_Export ::CORBA::TypeCode_ptr const _tc_TypedPushConsumer;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_COSTYPEDEVENTCOMM_TYPEDPULLSUPPLIER__VAR_OUT_CH_)
#define _COSTYPEDEVENTCOMM_TYPEDPULLSUPPLIER__VAR_OUT_CH_

  class TypedPullSupplier;
  typedef TypedPullSupplier *TypedPullSupplier_ptr;
  typedef TAO_Objref_Var_T<TypedPullSupplier> TypedPullSupplier_var;
  typedef TAO_Objref_Out_T<TypedPullSupplier> TypedPullSupplier_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_Event_Export TypedPullSupplier
    : public virtual ::CosEventComm::PullSupplier
  
  {
  public:
    friend class TAO::Narrow_Utils<TypedPullSupplier>;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef TypedPullSupplier_ptr _ptr_type;
    typedef TypedPullSupplier_var _var_type;
    typedef TypedPullSupplier_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static TypedPullSupplier_ptr _duplicate (TypedPullSupplier_ptr obj);

    static void _tao_release (TypedPullSupplier_ptr obj);

    static TypedPullSupplier_ptr _narrow (::CORBA::Object_ptr obj);
    static TypedPullSupplier_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static TypedPullSupplier_ptr _nil (void);

    virtual ::CORBA::Object_ptr get_typed_supplier (
      void);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    TypedPullSupplier (void);

    // Concrete non-local interface only.
    TypedPullSupplier (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    TypedPullSupplier (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~TypedPullSupplier (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    TypedPullSupplier (const TypedPullSupplier &);

    void operator= (const TypedPullSupplier &);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

  extern TAO_Event_Export ::CORBA::TypeCode_ptr const _tc_TypedPullSupplier;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module CosTypedEventComm

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_COSTYPEDEVENTCOMM_TYPEDPUSHCONSUMER__ARG_TRAITS_)
#define _COSTYPEDEVENTCOMM_TYPEDPUSHCONSUMER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::CosTypedEventComm::TypedPushConsumer>
    : public
        Object_Arg_Traits_T<
            ::CosTypedEventComm::TypedPushConsumer_ptr,
            ::CosTypedEventComm::TypedPushConsumer_var,
            ::CosTypedEventComm::TypedPushConsumer_out,
            TAO::Objref_Traits<CosTypedEventComm::TypedPushConsumer>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_COSTYPEDEVENTCOMM_TYPEDPULLSUPPLIER__ARG_TRAITS_)
#define _COSTYPEDEVENTCOMM_TYPEDPULLSUPPLIER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::CosTypedEventComm::TypedPullSupplier>
    : public
        Object_Arg_Traits_T<
            ::CosTypedEventComm::TypedPullSupplier_ptr,
            ::CosTypedEventComm::TypedPullSupplier_var,
            ::CosTypedEventComm::TypedPullSupplier_out,
            TAO::Objref_Traits<CosTypedEventComm::TypedPullSupplier>,
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

#if !defined (_COSTYPEDEVENTCOMM_TYPEDPUSHCONSUMER__TRAITS_)
#define _COSTYPEDEVENTCOMM_TYPEDPUSHCONSUMER__TRAITS_

  template<>
  struct TAO_Event_Export Objref_Traits< ::CosTypedEventComm::TypedPushConsumer>
  {
    static ::CosTypedEventComm::TypedPushConsumer_ptr duplicate (
        ::CosTypedEventComm::TypedPushConsumer_ptr p);
    static void release (
        ::CosTypedEventComm::TypedPushConsumer_ptr p);
    static ::CosTypedEventComm::TypedPushConsumer_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CosTypedEventComm::TypedPushConsumer_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_COSTYPEDEVENTCOMM_TYPEDPULLSUPPLIER__TRAITS_)
#define _COSTYPEDEVENTCOMM_TYPEDPULLSUPPLIER__TRAITS_

  template<>
  struct TAO_Event_Export Objref_Traits< ::CosTypedEventComm::TypedPullSupplier>
  {
    static ::CosTypedEventComm::TypedPullSupplier_ptr duplicate (
        ::CosTypedEventComm::TypedPullSupplier_ptr p);
    static void release (
        ::CosTypedEventComm::TypedPullSupplier_ptr p);
    static ::CosTypedEventComm::TypedPullSupplier_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CosTypedEventComm::TypedPullSupplier_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosTypedEventComm
{
  TAO_Event_Export void operator<<= ( ::CORBA::Any &, TypedPushConsumer_ptr); // copying
  TAO_Event_Export void operator<<= ( ::CORBA::Any &, TypedPushConsumer_ptr *); // non-copying
  TAO_Event_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, TypedPushConsumer_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Event_Export void operator<<= (::CORBA::Any &, CosTypedEventComm::TypedPushConsumer_ptr); // copying
TAO_Event_Export void operator<<= (::CORBA::Any &, CosTypedEventComm::TypedPushConsumer_ptr *); // non-copying
TAO_Event_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CosTypedEventComm::TypedPushConsumer_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosTypedEventComm
{
  TAO_Event_Export void operator<<= ( ::CORBA::Any &, TypedPullSupplier_ptr); // copying
  TAO_Event_Export void operator<<= ( ::CORBA::Any &, TypedPullSupplier_ptr *); // non-copying
  TAO_Event_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, TypedPullSupplier_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Event_Export void operator<<= (::CORBA::Any &, CosTypedEventComm::TypedPullSupplier_ptr); // copying
TAO_Event_Export void operator<<= (::CORBA::Any &, CosTypedEventComm::TypedPullSupplier_ptr *); // non-copying
TAO_Event_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CosTypedEventComm::TypedPullSupplier_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Event_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CosTypedEventComm::TypedPushConsumer_ptr );
TAO_Event_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CosTypedEventComm::TypedPushConsumer_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Event_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CosTypedEventComm::TypedPullSupplier_ptr );
TAO_Event_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CosTypedEventComm::TypedPullSupplier_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686
#if defined (__ACE_INLINE__)
#include "CosTypedEventCommC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

