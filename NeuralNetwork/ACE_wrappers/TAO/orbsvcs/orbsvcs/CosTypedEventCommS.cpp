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
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:635

#ifndef _TAO_IDL_COSTYPEDEVENTCOMMS_IQVVCQ_CPP_
#define _TAO_IDL_COSTYPEDEVENTCOMMS_IQVVCQ_CPP_


#include "CosTypedEventCommS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:1863

class TAO_CosTypedEventComm_TypedPushConsumer_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_CosTypedEventComm_TypedPushConsumer_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_CosTypedEventComm_TypedPushConsumer_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25,  0, 25,  0, 25, 25,
      0,  5, 25,  0,  0, 25, 25, 25, 25, 25,
     25, 25,  0, 25,  0, 25,  0, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_CosTypedEventComm_TypedPushConsumer_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 8,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 24,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 24,
      HASH_VALUE_RANGE = 21,
      DUPLICATES = 0,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"push", &POA_CosEventComm::PushConsumer::push_skel, 0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},
      {"get_typed_consumer", &POA_CosTypedEventComm::TypedPushConsumer::get_typed_consumer_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"disconnect_push_consumer", &POA_CosEventComm::PushConsumer::disconnect_push_consumer_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_CosTypedEventComm_TypedPushConsumer_Perfect_Hash_OpTable tao_CosTypedEventComm_TypedPushConsumer_optable;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:90

POA_CosTypedEventComm::TypedPushConsumer::TypedPushConsumer (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_CosTypedEventComm_TypedPushConsumer_optable;
}

POA_CosTypedEventComm::TypedPushConsumer::TypedPushConsumer (const TypedPushConsumer& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs),
    POA_CosEventComm::PushConsumer (rhs)
{
}

POA_CosTypedEventComm::TypedPushConsumer::~TypedPushConsumer (void)
{
}

namespace POA_CosTypedEventComm
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class get_typed_consumer_TypedPushConsumer
    : public TAO::Upcall_Command
  {
  public:
    inline get_typed_consumer_TypedPushConsumer (
      POA_CosTypedEventComm::TypedPushConsumer * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::Object>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::Object> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->get_typed_consumer ();
    }
  
  private:
    POA_CosTypedEventComm::TypedPushConsumer * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_CosTypedEventComm::TypedPushConsumer::get_typed_consumer_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Object>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_CosTypedEventComm::TypedPushConsumer * const impl =
    dynamic_cast<POA_CosTypedEventComm::TypedPushConsumer *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_typed_consumer_TypedPushConsumer command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:163



::CORBA::Boolean POA_CosTypedEventComm::TypedPushConsumer::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CosEventComm/PushConsumer:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CosTypedEventComm/TypedPushConsumer:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_CosTypedEventComm::TypedPushConsumer::_interface_repository_id (void) const
{
  return "IDL:omg.org/CosTypedEventComm/TypedPushConsumer:1.0";
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:423

void POA_CosTypedEventComm::TypedPushConsumer::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:370

CosTypedEventComm::TypedPushConsumer *
POA_CosTypedEventComm::TypedPushConsumer::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::CosTypedEventComm::TypedPushConsumer STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:1863

class TAO_CosTypedEventComm_TypedPullSupplier_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_CosTypedEventComm_TypedPullSupplier_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_CosTypedEventComm_TypedPullSupplier_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
     25, 25, 25, 25, 25,  0, 25,  0, 25, 25,
      0,  5, 25,  0, 25, 25, 25, 25,  0, 25,
     25, 25,  0, 25,  0, 25,  0, 25, 25, 25,
     25, 25, 25, 25, 25, 25, 25, 25,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_CosTypedEventComm_TypedPullSupplier_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 9,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 24,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 24,
      HASH_VALUE_RANGE = 21,
      DUPLICATES = 0,
      WORDLIST_SIZE = 13
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"pull", &POA_CosEventComm::PullSupplier::pull_skel, 0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"try_pull", &POA_CosEventComm::PullSupplier::try_pull_skel, 0},
      {"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},
      {"get_typed_supplier", &POA_CosTypedEventComm::TypedPullSupplier::get_typed_supplier_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"disconnect_pull_supplier", &POA_CosEventComm::PullSupplier::disconnect_pull_supplier_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_CosTypedEventComm_TypedPullSupplier_Perfect_Hash_OpTable tao_CosTypedEventComm_TypedPullSupplier_optable;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:90

POA_CosTypedEventComm::TypedPullSupplier::TypedPullSupplier (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_CosTypedEventComm_TypedPullSupplier_optable;
}

POA_CosTypedEventComm::TypedPullSupplier::TypedPullSupplier (const TypedPullSupplier& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs),
    POA_CosEventComm::PullSupplier (rhs)
{
}

POA_CosTypedEventComm::TypedPullSupplier::~TypedPullSupplier (void)
{
}

namespace POA_CosTypedEventComm
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class get_typed_supplier_TypedPullSupplier
    : public TAO::Upcall_Command
  {
  public:
    inline get_typed_supplier_TypedPullSupplier (
      POA_CosTypedEventComm::TypedPullSupplier * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::Object>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::Object> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->get_typed_supplier ();
    }
  
  private:
    POA_CosTypedEventComm::TypedPullSupplier * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_CosTypedEventComm::TypedPullSupplier::get_typed_supplier_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Object>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_CosTypedEventComm::TypedPullSupplier * const impl =
    dynamic_cast<POA_CosTypedEventComm::TypedPullSupplier *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_typed_supplier_TypedPullSupplier command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:163



::CORBA::Boolean POA_CosTypedEventComm::TypedPullSupplier::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CosEventComm/PullSupplier:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CosTypedEventComm/TypedPullSupplier:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_CosTypedEventComm::TypedPullSupplier::_interface_repository_id (void) const
{
  return "IDL:omg.org/CosTypedEventComm/TypedPullSupplier:1.0";
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:423

void POA_CosTypedEventComm::TypedPullSupplier::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:370

CosTypedEventComm::TypedPullSupplier *
POA_CosTypedEventComm::TypedPullSupplier::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::CosTypedEventComm::TypedPullSupplier STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

#endif /* ifndef */

