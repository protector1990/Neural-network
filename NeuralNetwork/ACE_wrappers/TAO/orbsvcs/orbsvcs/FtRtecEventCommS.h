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

#ifndef _TAO_IDL_FTRTECEVENTCOMMS_Q38JNG_H_
#define _TAO_IDL_FTRTECEVENTCOMMS_Q38JNG_H_

#include /**/ "ace/pre.h"

#include "FtRtecEventCommC.h"
#include "orbsvcs/RtecEventCommS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Messaging/MessagingS.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

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

#if !defined (_MESSAGING_EXCEPTIONHOLDER__SARG_TRAITS_)
#define _MESSAGING_EXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::Messaging::ExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::Messaging::ExceptionHolder *,
            ::Messaging::ExceptionHolder_var,
            ::Messaging::ExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::FtRtecEventComm::ObjectId>
    : public
        Var_Size_SArg_Traits_T<
            ::FtRtecEventComm::ObjectId,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_FTRTECEVENTCOMM_PUSHCONSUMER__SARG_TRAITS_)
#define _FTRTECEVENTCOMM_PUSHCONSUMER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::FtRtecEventComm::PushConsumer>
    : public
        Object_SArg_Traits_T<
            ::FtRtecEventComm::PushConsumer_ptr,
            ::FtRtecEventComm::PushConsumer_var,
            ::FtRtecEventComm::PushConsumer_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_FTRTECEVENTCOMM_AMI_PUSHCONSUMERHANDLER__SARG_TRAITS_)
#define _FTRTECEVENTCOMM_AMI_PUSHCONSUMERHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::FtRtecEventComm::AMI_PushConsumerHandler>
    : public
        Object_SArg_Traits_T<
            ::FtRtecEventComm::AMI_PushConsumerHandler_ptr,
            ::FtRtecEventComm::AMI_PushConsumerHandler_var,
            ::FtRtecEventComm::AMI_PushConsumerHandler_out,
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

namespace POA_FtRtecEventComm
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

  class PushConsumer;
  typedef PushConsumer *PushConsumer_ptr;

  class TAO_FtRtEvent_Export PushConsumer
    : public virtual PortableServer::ServantBase
  {
  protected:
    PushConsumer (void);
  
  public:
    /// Useful for template programming.
    typedef ::FtRtecEventComm::PushConsumer _stub_type;
    typedef ::FtRtecEventComm::PushConsumer_ptr _stub_ptr_type;
    typedef ::FtRtecEventComm::PushConsumer_var _stub_var_type;

    PushConsumer (const PushConsumer& rhs);
    virtual ~PushConsumer (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::FtRtecEventComm::PushConsumer *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void push (
      const ::FtRtecEventComm::ObjectId & oid,
      const ::RtecEventComm::EventSet & data) = 0;

    static void push_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

  class AMI_PushConsumerHandler;
  typedef AMI_PushConsumerHandler *AMI_PushConsumerHandler_ptr;

  class TAO_FtRtEvent_Export AMI_PushConsumerHandler
    : public virtual POA_Messaging::ReplyHandler
  {
  protected:
    AMI_PushConsumerHandler (void);
  
  public:
    /// Useful for template programming.
    typedef ::FtRtecEventComm::AMI_PushConsumerHandler _stub_type;
    typedef ::FtRtecEventComm::AMI_PushConsumerHandler_ptr _stub_ptr_type;
    typedef ::FtRtecEventComm::AMI_PushConsumerHandler_var _stub_var_type;

    AMI_PushConsumerHandler (const AMI_PushConsumerHandler& rhs);
    virtual ~AMI_PushConsumerHandler (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::FtRtecEventComm::AMI_PushConsumerHandler *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void push (
      void) = 0;

    static void push_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual void push_excep (
      ::Messaging::ExceptionHolder * excep_holder) = 0;

    static void push_excep_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:66

} // module FtRtecEventComm

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

