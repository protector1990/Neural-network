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

#ifndef _TAO_IDL_COSLIFECYCLES_WIP5RU_CPP_
#define _TAO_IDL_COSLIFECYCLES_WIP5RU_CPP_


#include "CosLifeCycleS.h"
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

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:1863

class TAO_CosLifeCycle_FactoryFinder_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_CosLifeCycle_FactoryFinder_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_CosLifeCycle_FactoryFinder_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20,  0, 20,  0, 20, 20,
      5,  5,  0, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20,  0,  0, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_CosLifeCycle_FactoryFinder_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 19,
      HASH_VALUE_RANGE = 15,
      DUPLICATES = 0,
      WORDLIST_SIZE = 11
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"find_factories", &POA_CosLifeCycle::FactoryFinder::find_factories_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
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

static TAO_CosLifeCycle_FactoryFinder_Perfect_Hash_OpTable tao_CosLifeCycle_FactoryFinder_optable;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:90

POA_CosLifeCycle::FactoryFinder::FactoryFinder (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_CosLifeCycle_FactoryFinder_optable;
}

POA_CosLifeCycle::FactoryFinder::FactoryFinder (const FactoryFinder& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_CosLifeCycle::FactoryFinder::~FactoryFinder (void)
{
}

namespace POA_CosLifeCycle
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class find_factories_FactoryFinder
    : public TAO::Upcall_Command
  {
  public:
    inline find_factories_FactoryFinder (
      POA_CosLifeCycle::FactoryFinder * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CosLifeCycle::Factories>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CosLifeCycle::Factories> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::CosLifeCycle::Key>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CosLifeCycle::Key> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->find_factories (
          arg_1);
    }
  
  private:
    POA_CosLifeCycle::FactoryFinder * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_CosLifeCycle::FactoryFinder::find_factories_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const exceptions[] = 
    {
      CosLifeCycle::_tc_NoFactory
    };
  static ::CORBA::ULong const nexceptions = 1;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CosLifeCycle::Factories>::ret_val retval;
  TAO::SArg_Traits< ::CosLifeCycle::Key>::in_arg_val _tao_factory_key;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_factory_key
    };
  
  static size_t const nargs = 2;

  POA_CosLifeCycle::FactoryFinder * const impl =
    dynamic_cast<POA_CosLifeCycle::FactoryFinder *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  find_factories_FactoryFinder command (
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



::CORBA::Boolean POA_CosLifeCycle::FactoryFinder::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CosLifeCycle/FactoryFinder:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_CosLifeCycle::FactoryFinder::_interface_repository_id (void) const
{
  return "IDL:omg.org/CosLifeCycle/FactoryFinder:1.0";
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:423

void POA_CosLifeCycle::FactoryFinder::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:370

CosLifeCycle::FactoryFinder *
POA_CosLifeCycle::FactoryFinder::_this (void)
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

  typedef ::CosLifeCycle::FactoryFinder STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:1863

class TAO_CosLifeCycle_LifeCycleObject_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_CosLifeCycle_LifeCycleObject_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_CosLifeCycle_LifeCycleObject_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19,  0, 19,  0, 19,  5,
      0,  0, 19, 19, 19, 19, 19, 19, 19,  0,
     19, 19, 19, 19,  0, 19,  5, 19, 19, 19,
     19,  0, 19, 19, 19, 19, 19, 19,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_CosLifeCycle_LifeCycleObject_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 8,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 18,
      HASH_VALUE_RANGE = 15,
      DUPLICATES = 0,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"move", &POA_CosLifeCycle::LifeCycleObject::move_skel, 0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"remove", &POA_CosLifeCycle::LifeCycleObject::remove_skel, 0},
      {"",0,0},{"",0,0},
      {"copy", &POA_CosLifeCycle::LifeCycleObject::copy_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
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

static TAO_CosLifeCycle_LifeCycleObject_Perfect_Hash_OpTable tao_CosLifeCycle_LifeCycleObject_optable;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:90

POA_CosLifeCycle::LifeCycleObject::LifeCycleObject (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_CosLifeCycle_LifeCycleObject_optable;
}

POA_CosLifeCycle::LifeCycleObject::LifeCycleObject (const LifeCycleObject& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_CosLifeCycle::LifeCycleObject::~LifeCycleObject (void)
{
}

namespace POA_CosLifeCycle
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class copy_LifeCycleObject
    : public TAO::Upcall_Command
  {
  public:
    inline copy_LifeCycleObject (
      POA_CosLifeCycle::LifeCycleObject * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CosLifeCycle::LifeCycleObject>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CosLifeCycle::LifeCycleObject> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::CosLifeCycle::FactoryFinder>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CosLifeCycle::FactoryFinder> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::CosLifeCycle::Criteria>::in_arg_type arg_2 =
        TAO::Portable_Server::get_in_arg< ::CosLifeCycle::Criteria> (
          this->operation_details_,
          this->args_,
          2);
        
      retval =
        this->servant_->copy (
          arg_1
          , arg_2);
    }
  
  private:
    POA_CosLifeCycle::LifeCycleObject * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_CosLifeCycle::LifeCycleObject::copy_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const exceptions[] = 
    {
      CosLifeCycle::_tc_NoFactory,
      CosLifeCycle::_tc_NotCopyable,
      CosLifeCycle::_tc_InvalidCriteria,
      CosLifeCycle::_tc_CannotMeetCriteria
    };
  static ::CORBA::ULong const nexceptions = 4;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CosLifeCycle::LifeCycleObject>::ret_val retval;
  TAO::SArg_Traits< ::CosLifeCycle::FactoryFinder>::in_arg_val _tao_there;
  TAO::SArg_Traits< ::CosLifeCycle::Criteria>::in_arg_val _tao_the_criteria;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_there,
      &_tao_the_criteria
    };
  
  static size_t const nargs = 3;

  POA_CosLifeCycle::LifeCycleObject * const impl =
    dynamic_cast<POA_CosLifeCycle::LifeCycleObject *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  copy_LifeCycleObject command (
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


namespace POA_CosLifeCycle
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class move_LifeCycleObject
    : public TAO::Upcall_Command
  {
  public:
    inline move_LifeCycleObject (
      POA_CosLifeCycle::LifeCycleObject * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CosLifeCycle::FactoryFinder>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CosLifeCycle::FactoryFinder> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::CosLifeCycle::Criteria>::in_arg_type arg_2 =
        TAO::Portable_Server::get_in_arg< ::CosLifeCycle::Criteria> (
          this->operation_details_,
          this->args_,
          2);
        
      this->servant_->move (
        arg_1
        , arg_2);
    }
  
  private:
    POA_CosLifeCycle::LifeCycleObject * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_CosLifeCycle::LifeCycleObject::move_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const exceptions[] = 
    {
      CosLifeCycle::_tc_NoFactory,
      CosLifeCycle::_tc_NotMovable,
      CosLifeCycle::_tc_InvalidCriteria,
      CosLifeCycle::_tc_CannotMeetCriteria
    };
  static ::CORBA::ULong const nexceptions = 4;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::CosLifeCycle::FactoryFinder>::in_arg_val _tao_there;
  TAO::SArg_Traits< ::CosLifeCycle::Criteria>::in_arg_val _tao_the_criteria;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_there,
      &_tao_the_criteria
    };
  
  static size_t const nargs = 3;

  POA_CosLifeCycle::LifeCycleObject * const impl =
    dynamic_cast<POA_CosLifeCycle::LifeCycleObject *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  move_LifeCycleObject command (
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


namespace POA_CosLifeCycle
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class remove_LifeCycleObject
    : public TAO::Upcall_Command
  {
  public:
    inline remove_LifeCycleObject (
      POA_CosLifeCycle::LifeCycleObject * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->remove ();
    }
  
  private:
    POA_CosLifeCycle::LifeCycleObject * const servant_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_CosLifeCycle::LifeCycleObject::remove_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const exceptions[] = 
    {
      CosLifeCycle::_tc_NotRemovable
    };
  static ::CORBA::ULong const nexceptions = 1;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_CosLifeCycle::LifeCycleObject * const impl =
    dynamic_cast<POA_CosLifeCycle::LifeCycleObject *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  remove_LifeCycleObject command (
    impl);
  
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



::CORBA::Boolean POA_CosLifeCycle::LifeCycleObject::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CosLifeCycle/LifeCycleObject:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_CosLifeCycle::LifeCycleObject::_interface_repository_id (void) const
{
  return "IDL:omg.org/CosLifeCycle/LifeCycleObject:1.0";
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:423

void POA_CosLifeCycle::LifeCycleObject::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:370

CosLifeCycle::LifeCycleObject *
POA_CosLifeCycle::LifeCycleObject::_this (void)
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

  typedef ::CosLifeCycle::LifeCycleObject STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:1863

class TAO_CosLifeCycle_GenericFactory_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_CosLifeCycle_GenericFactory_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_CosLifeCycle_GenericFactory_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19,  0, 19,  0, 19,  5,
      0,  5, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19,  0,  0, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_CosLifeCycle_GenericFactory_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 18,
      HASH_VALUE_RANGE = 14,
      DUPLICATES = 0,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"supports", &POA_CosLifeCycle::GenericFactory::supports_skel, 0},
      {"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},
      {"create_object", &POA_CosLifeCycle::GenericFactory::create_object_skel, 0},
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

static TAO_CosLifeCycle_GenericFactory_Perfect_Hash_OpTable tao_CosLifeCycle_GenericFactory_optable;

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:90

POA_CosLifeCycle::GenericFactory::GenericFactory (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_CosLifeCycle_GenericFactory_optable;
}

POA_CosLifeCycle::GenericFactory::GenericFactory (const GenericFactory& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_CosLifeCycle::GenericFactory::~GenericFactory (void)
{
}

namespace POA_CosLifeCycle
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class supports_GenericFactory
    : public TAO::Upcall_Command
  {
  public:
    inline supports_GenericFactory (
      POA_CosLifeCycle::GenericFactory * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::ACE_InputCDR::to_boolean> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::CosLifeCycle::Key>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CosLifeCycle::Key> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->supports (
          arg_1);
    }
  
  private:
    POA_CosLifeCycle::GenericFactory * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_CosLifeCycle::GenericFactory::supports_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_val retval;
  TAO::SArg_Traits< ::CosLifeCycle::Key>::in_arg_val _tao_k;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_k
    };
  
  static size_t const nargs = 2;

  POA_CosLifeCycle::GenericFactory * const impl =
    dynamic_cast<POA_CosLifeCycle::GenericFactory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  supports_GenericFactory command (
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


namespace POA_CosLifeCycle
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class create_object_GenericFactory
    : public TAO::Upcall_Command
  {
  public:
    inline create_object_GenericFactory (
      POA_CosLifeCycle::GenericFactory * servant,
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
      
      TAO::SArg_Traits< ::CosLifeCycle::Key>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CosLifeCycle::Key> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::CosLifeCycle::Criteria>::in_arg_type arg_2 =
        TAO::Portable_Server::get_in_arg< ::CosLifeCycle::Criteria> (
          this->operation_details_,
          this->args_,
          2);
        
      retval =
        this->servant_->create_object (
          arg_1
          , arg_2);
    }
  
  private:
    POA_CosLifeCycle::GenericFactory * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_CosLifeCycle::GenericFactory::create_object_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const exceptions[] = 
    {
      CosLifeCycle::_tc_NoFactory,
      CosLifeCycle::_tc_InvalidCriteria,
      CosLifeCycle::_tc_CannotMeetCriteria
    };
  static ::CORBA::ULong const nexceptions = 3;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Object>::ret_val retval;
  TAO::SArg_Traits< ::CosLifeCycle::Key>::in_arg_val _tao_k;
  TAO::SArg_Traits< ::CosLifeCycle::Criteria>::in_arg_val _tao_the_criteria;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_k,
      &_tao_the_criteria
    };
  
  static size_t const nargs = 3;

  POA_CosLifeCycle::GenericFactory * const impl =
    dynamic_cast<POA_CosLifeCycle::GenericFactory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  create_object_GenericFactory command (
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



::CORBA::Boolean POA_CosLifeCycle::GenericFactory::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CosLifeCycle/GenericFactory:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_CosLifeCycle::GenericFactory::_interface_repository_id (void) const
{
  return "IDL:omg.org/CosLifeCycle/GenericFactory:1.0";
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:423

void POA_CosLifeCycle::GenericFactory::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:370

CosLifeCycle::GenericFactory *
POA_CosLifeCycle::GenericFactory::_this (void)
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

  typedef ::CosLifeCycle::GenericFactory STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */
