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

#ifndef _TAO_IDL_DEFAULT_ORTS_CTHZMD_H_
#define _TAO_IDL_DEFAULT_ORTS_CTHZMD_H_

#include /**/ "ace/pre.h"

#include "Default_ORTC.h"
#include "tao/ObjRefTemplate/ObjectReferenceTemplate_includeS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"

// Skeleton file generation suppressed with command line option -SS

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:306

#if !defined (_TAO_DEFAULT_ORT_OBJECTREFERENCETEMPLATE__SARG_TRAITS_)
#define _TAO_DEFAULT_ORT_OBJECTREFERENCETEMPLATE__SARG_TRAITS_

  template<>
  class SArg_Traits< ::TAO_Default_ORT::ObjectReferenceTemplate>
    : public
        Object_SArg_Traits_T<
            ::TAO_Default_ORT::ObjectReferenceTemplate *,
            ::TAO_Default_ORT::ObjectReferenceTemplate_var,
            ::TAO_Default_ORT::ObjectReferenceTemplate_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */
