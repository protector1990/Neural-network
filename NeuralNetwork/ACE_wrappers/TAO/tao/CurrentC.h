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

#ifndef _TAO_PIDL_CURRENTC_CWQU5Y_H_
#define _TAO_PIDL_CURRENTC_CWQU5Y_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/TAO_Export.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

namespace CORBA
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_CORBA_CURRENT__VAR_OUT_CH_)
#define _CORBA_CURRENT__VAR_OUT_CH_

  class Current;
  typedef Current *Current_ptr;
  typedef TAO_Objref_Var_T<Current> Current_var;
  typedef TAO_Objref_Out_T<Current> Current_out;
  

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

  class TAO_Export Current
    : public virtual ::CORBA::Object
  {
  public:

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

    typedef Current_ptr _ptr_type;
    typedef Current_var _var_type;
    typedef Current_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Current_ptr _duplicate (Current_ptr obj);

    static void _tao_release (Current_ptr obj);

    static Current_ptr _narrow (::CORBA::Object_ptr obj);
    static Current_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Current_ptr _nil (void);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    Current (void);

    

    virtual ~Current (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Current (const Current &);

    void operator= (const Current &);
  };

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module CORBA

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

#if !defined (_CORBA_CURRENT__TRAITS_)
#define _CORBA_CURRENT__TRAITS_

  template<>
  struct TAO_Export Objref_Traits< ::CORBA::Current>
  {
    static ::CORBA::Current_ptr duplicate (
        ::CORBA::Current_ptr p);
    static void release (
        ::CORBA::Current_ptr p);
    static ::CORBA::Current_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CORBA::Current_ptr p,
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
