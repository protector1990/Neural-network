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

#ifndef _TAO_IDL_IMR_ACTIVATORS_QBX8I4_H_
#define _TAO_IDL_IMR_ACTIVATORS_QBX8I4_H_

#include /**/ "ace/pre.h"

#include "ImR_ActivatorC.h"
#include "ImplRepoS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
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
#include "tao/Messaging/AMH_Response_Handler.h"

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
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_IMPLEMENTATIONREPOSITORY_ACTIVATOR__SARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_ACTIVATOR__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::ImplementationRepository::Activator>
    : public
        Object_SArg_Traits_T<
            ::ImplementationRepository::Activator_ptr,
            ::ImplementationRepository::Activator_var,
            ::ImplementationRepository::Activator_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:306

#if !defined (_IMPLEMENTATIONREPOSITORY_AMH_ACTIVATOREXCEPTIONHOLDER__SARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_AMH_ACTIVATOREXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::ImplementationRepository::AMH_ActivatorExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::ImplementationRepository::AMH_ActivatorExceptionHolder *,
            ::ImplementationRepository::AMH_ActivatorExceptionHolder_var,
            ::ImplementationRepository::AMH_ActivatorExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_IMPLEMENTATIONREPOSITORY_AMI_ACTIVATORHANDLER__SARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_AMI_ACTIVATORHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::ImplementationRepository::AMI_ActivatorHandler>
    : public
        Object_SArg_Traits_T<
            ::ImplementationRepository::AMI_ActivatorHandler_ptr,
            ::ImplementationRepository::AMI_ActivatorHandler_var,
            ::ImplementationRepository::AMI_ActivatorHandler_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_IMPLEMENTATIONREPOSITORY_ACTIVATOREXT__SARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_ACTIVATOREXT__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::ImplementationRepository::ActivatorExt>
    : public
        Object_SArg_Traits_T<
            ::ImplementationRepository::ActivatorExt_ptr,
            ::ImplementationRepository::ActivatorExt_var,
            ::ImplementationRepository::ActivatorExt_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:306

#if !defined (_IMPLEMENTATIONREPOSITORY_AMH_ACTIVATOREXTEXCEPTIONHOLDER__SARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_AMH_ACTIVATOREXTEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::ImplementationRepository::AMH_ActivatorExtExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::ImplementationRepository::AMH_ActivatorExtExceptionHolder *,
            ::ImplementationRepository::AMH_ActivatorExtExceptionHolder_var,
            ::ImplementationRepository::AMH_ActivatorExtExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_IMPLEMENTATIONREPOSITORY_AMI_ACTIVATOREXTHANDLER__SARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_AMI_ACTIVATOREXTHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::ImplementationRepository::AMI_ActivatorExtHandler>
    : public
        Object_SArg_Traits_T<
            ::ImplementationRepository::AMI_ActivatorExtHandler_ptr,
            ::ImplementationRepository::AMI_ActivatorExtHandler_var,
            ::ImplementationRepository::AMI_ActivatorExtHandler_out,
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

namespace POA_ImplementationRepository
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\amh_sh.cpp:46

  class AMH_Activator;
  typedef AMH_Activator *AMH_Activator_ptr;

  class ActivatorIDL_Export AMH_Activator
    : public virtual PortableServer::ServantBase
  {
  protected:
    AMH_Activator (void);
  
  public:
    AMH_Activator (const AMH_Activator& rhs);
    virtual ~AMH_Activator (void);


    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest &req,
        TAO::Portable_Server::Servant_Upcall *_servant_upcall);
    
    ImplementationRepository::Activator *_this (void);

  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_sh.cpp:127

  static void start_server_skel (
      TAO_ServerRequest &_tao_req,
      TAO::Portable_Server::Servant_Upcall *_tao_obj,
      TAO_ServantBase *_tao_servant_upcall);
    
  virtual void start_server (
      ImplementationRepository::AMH_ActivatorResponseHandler_ptr _tao_rh,
      const char * name,
      const char * cmdline,
      const char * dir,
      const ::ImplementationRepository::EnvironmentList & env
    ) = 0;
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_sh.cpp:127

  static void shutdown_skel (
      TAO_ServerRequest &_tao_req,
      TAO::Portable_Server::Servant_Upcall *_tao_obj,
      TAO_ServantBase *_tao_servant_upcall);
    
  virtual void shutdown (
      ImplementationRepository::AMH_ActivatorResponseHandler_ptr _tao_rh
    ) = 0;
  
};

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

class Activator;
typedef Activator *Activator_ptr;

class ActivatorIDL_Export Activator
  : public virtual PortableServer::ServantBase
{
protected:
  Activator (void);

public:
  /// Useful for template programming.
  typedef ::ImplementationRepository::Activator _stub_type;
  typedef ::ImplementationRepository::Activator_ptr _stub_ptr_type;
  typedef ::ImplementationRepository::Activator_var _stub_var_type;

  Activator (const Activator& rhs);
  virtual ~Activator (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::ImplementationRepository::Activator *_this (void);
  
  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual void start_server (
    const char * name,
    const char * cmdline,
    const char * dir,
    const ::ImplementationRepository::EnvironmentList & env) = 0;

  static void start_server_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual void shutdown (
    void) = 0;

  static void shutdown_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\amh_rh_sh.cpp:50

class TAO_AMH_ActivatorResponseHandler;
typedef TAO_AMH_ActivatorResponseHandler *TAO_AMH_ActivatorResponseHandler_ptr;

class ActivatorIDL_Export TAO_AMH_ActivatorResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::ImplementationRepository::AMH_ActivatorResponseHandler
{
public:
  TAO_AMH_ActivatorResponseHandler (void);
  virtual ~TAO_AMH_ActivatorResponseHandler (void);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_rh_sh.cpp:60

  virtual void start_server (
    void);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_rh_sh.cpp:60

  virtual void start_server_excep (
    ::ImplementationRepository::AMH_ActivatorExceptionHolder * holder);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_rh_sh.cpp:60

  virtual void shutdown (
    void);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_rh_sh.cpp:60

  virtual void shutdown_excep (
    ::ImplementationRepository::AMH_ActivatorExceptionHolder * holder);
};

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

class AMI_ActivatorHandler;
typedef AMI_ActivatorHandler *AMI_ActivatorHandler_ptr;

class ActivatorIDL_Export AMI_ActivatorHandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  AMI_ActivatorHandler (void);

public:
  /// Useful for template programming.
  typedef ::ImplementationRepository::AMI_ActivatorHandler _stub_type;
  typedef ::ImplementationRepository::AMI_ActivatorHandler_ptr _stub_ptr_type;
  typedef ::ImplementationRepository::AMI_ActivatorHandler_var _stub_var_type;

  AMI_ActivatorHandler (const AMI_ActivatorHandler& rhs);
  virtual ~AMI_ActivatorHandler (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::ImplementationRepository::AMI_ActivatorHandler *_this (void);
  
  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual void start_server (
    void) = 0;

  static void start_server_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual void start_server_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void start_server_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\amh_sh.cpp:46

class AMH_ActivatorExt;
typedef AMH_ActivatorExt *AMH_ActivatorExt_ptr;

class ActivatorIDL_Export AMH_ActivatorExt
  : public virtual POA_ImplementationRepository::AMH_Activator
    
{
protected:
  AMH_ActivatorExt (void);

public:
  AMH_ActivatorExt (const AMH_ActivatorExt& rhs);
  virtual ~AMH_ActivatorExt (void);


  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest &req,
      TAO::Portable_Server::Servant_Upcall *_servant_upcall);
  
  ImplementationRepository::ActivatorExt *_this (void);

virtual const char* _interface_repository_id (void) const;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_sh.cpp:127

static void kill_server_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void kill_server (
    ImplementationRepository::AMH_ActivatorExtResponseHandler_ptr _tao_rh,
    const char * name,
    ::CORBA::Long pid,
    ::CORBA::Short signum
  ) = 0;


// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_sh.cpp:127

static void still_alive_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void still_alive (
    ImplementationRepository::AMH_ActivatorExtResponseHandler_ptr _tao_rh,
    ::CORBA::Long pid
  ) = 0;

};

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

class ActivatorExt;
typedef ActivatorExt *ActivatorExt_ptr;

class ActivatorIDL_Export ActivatorExt
  : public virtual POA_ImplementationRepository::Activator
{
protected:
  ActivatorExt (void);

public:
  /// Useful for template programming.
  typedef ::ImplementationRepository::ActivatorExt _stub_type;
  typedef ::ImplementationRepository::ActivatorExt_ptr _stub_ptr_type;
  typedef ::ImplementationRepository::ActivatorExt_var _stub_var_type;

  ActivatorExt (const ActivatorExt& rhs);
  virtual ~ActivatorExt (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::ImplementationRepository::ActivatorExt *_this (void);
  
  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual ::CORBA::Boolean kill_server (
    const char * name,
    ::CORBA::Long pid,
    ::CORBA::Short signum) = 0;

  static void kill_server_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual ::CORBA::Boolean still_alive (
    ::CORBA::Long pid) = 0;

  static void still_alive_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\amh_rh_sh.cpp:50

class TAO_AMH_ActivatorExtResponseHandler;
typedef TAO_AMH_ActivatorExtResponseHandler *TAO_AMH_ActivatorExtResponseHandler_ptr;

class ActivatorIDL_Export TAO_AMH_ActivatorExtResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::ImplementationRepository::AMH_ActivatorExtResponseHandler
{
public:
  TAO_AMH_ActivatorExtResponseHandler (void);
  virtual ~TAO_AMH_ActivatorExtResponseHandler (void);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_rh_sh.cpp:60

  virtual void kill_server (
    ::CORBA::Boolean return_value);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_rh_sh.cpp:60

  virtual void kill_server_excep (
    ::ImplementationRepository::AMH_ActivatorExtExceptionHolder * holder);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_rh_sh.cpp:60

  virtual void still_alive (
    ::CORBA::Boolean return_value);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\amh_rh_sh.cpp:60

  virtual void still_alive_excep (
    ::ImplementationRepository::AMH_ActivatorExtExceptionHolder * holder);
};

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

class AMI_ActivatorExtHandler;
typedef AMI_ActivatorExtHandler *AMI_ActivatorExtHandler_ptr;

class ActivatorIDL_Export AMI_ActivatorExtHandler
  : public virtual POA_ImplementationRepository::AMI_ActivatorHandler
{
protected:
  AMI_ActivatorExtHandler (void);

public:
  /// Useful for template programming.
  typedef ::ImplementationRepository::AMI_ActivatorExtHandler _stub_type;
  typedef ::ImplementationRepository::AMI_ActivatorExtHandler_ptr _stub_ptr_type;
  typedef ::ImplementationRepository::AMI_ActivatorExtHandler_var _stub_var_type;

  AMI_ActivatorExtHandler (const AMI_ActivatorExtHandler& rhs);
  virtual ~AMI_ActivatorExtHandler (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::ImplementationRepository::AMI_ActivatorExtHandler *_this (void);
  
  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual void kill_server (
    ::CORBA::Boolean ami_return_val) = 0;

  static void kill_server_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual void kill_server_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void kill_server_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual void still_alive (
    ::CORBA::Boolean ami_return_val) = 0;

  static void still_alive_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

  virtual void still_alive_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void still_alive_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:66

} // module ImplementationRepository

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

