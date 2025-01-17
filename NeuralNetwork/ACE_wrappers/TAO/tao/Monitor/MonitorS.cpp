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

#ifndef _TAO_IDL_MONITORS_AHSGF3_CPP_
#define _TAO_IDL_MONITORS_AHSGF3_CPP_


#include "MonitorS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Direct_Collocation_Upcall_Wrapper.h"
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

class TAO_Monitor_Subscriber_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Monitor_Subscriber_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Monitor_Subscriber_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16,  0, 16,  0, 16, 16,
      0,  5, 16, 16,  0, 16, 16, 16, 16, 16,
     16, 16,  0, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Monitor_Subscriber_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 12,
      DUPLICATES = 0,
      WORDLIST_SIZE = 10
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"push", &POA_Monitor::Subscriber::push_skel, &POA_Monitor::_TAO_Subscriber_Direct_Proxy_Impl::push},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
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

static TAO_Monitor_Subscriber_Perfect_Hash_OpTable tao_Monitor_Subscriber_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_Monitor::_TAO_Subscriber_Direct_Proxy_Impl::~_TAO_Subscriber_Direct_Proxy_Impl (void)
{
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:57
void
POA_Monitor::_TAO_Subscriber_Direct_Proxy_Impl::push (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_Monitor::Subscriber_ptr _tao_ptr = 
    dynamic_cast<POA_Monitor::Subscriber_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->push (
        ((TAO::Arg_Traits< ::Monitor::DataList>::in_arg_val *) args[1])->arg ()
      );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:90

POA_Monitor::Subscriber::Subscriber (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Monitor_Subscriber_optable;
}

POA_Monitor::Subscriber::Subscriber (const Subscriber& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Monitor::Subscriber::~Subscriber (void)
{
}

namespace POA_Monitor
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class push_Subscriber
    : public TAO::Upcall_Command
  {
  public:
    inline push_Subscriber (
      POA_Monitor::Subscriber * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Monitor::DataList>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Monitor::DataList> (
          this->operation_details_,
          this->args_,
          1);
        
      this->servant_->push (
        arg_1);
    }
  
  private:
    POA_Monitor::Subscriber * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_Monitor::Subscriber::push_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::Monitor::DataList>::in_arg_val _tao_dil;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_dil
    };
  
  static size_t const nargs = 2;

  POA_Monitor::Subscriber * const impl =
    dynamic_cast<POA_Monitor::Subscriber *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  push_Subscriber command (
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



::CORBA::Boolean POA_Monitor::Subscriber::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Monitor/Subscriber:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Monitor::Subscriber::_interface_repository_id (void) const
{
  return "IDL:Monitor/Subscriber:1.0";
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:423

void POA_Monitor::Subscriber::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:370

Monitor::Subscriber *
POA_Monitor::Subscriber::_this (void)
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

  typedef ::Monitor::Subscriber STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_interface.cpp:1863

class TAO_Monitor_MC_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Monitor_MC_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Monitor_MC_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35,  0, 35,  0, 35,  0,
     15,  5, 35,  0, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 15,  0,  0,  0, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Monitor_MC_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 11,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 24,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 34,
      HASH_VALUE_RANGE = 30,
      DUPLICATES = 0,
      WORDLIST_SIZE = 16
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"get_statistics", &POA_Monitor::MC::get_statistics_skel, &POA_Monitor::_TAO_MC_Direct_Proxy_Impl::get_statistics},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"clear_statistics", &POA_Monitor::MC::clear_statistics_skel, &POA_Monitor::_TAO_MC_Direct_Proxy_Impl::clear_statistics},
      {"",0,0},{"",0,0},
      {"get_statistic_names", &POA_Monitor::MC::get_statistic_names_skel, &POA_Monitor::_TAO_MC_Direct_Proxy_Impl::get_statistic_names},
      {"",0,0},{"",0,0},
      {"unregister_constraints", &POA_Monitor::MC::unregister_constraints_skel, &POA_Monitor::_TAO_MC_Direct_Proxy_Impl::unregister_constraints},
      {"",0,0},
      {"get_and_clear_statistics", &POA_Monitor::MC::get_and_clear_statistics_skel, &POA_Monitor::_TAO_MC_Direct_Proxy_Impl::get_and_clear_statistics},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"register_constraint", &POA_Monitor::MC::register_constraint_skel, &POA_Monitor::_TAO_MC_Direct_Proxy_Impl::register_constraint},
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

static TAO_Monitor_MC_Perfect_Hash_OpTable tao_Monitor_MC_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_Monitor::_TAO_MC_Direct_Proxy_Impl::~_TAO_MC_Direct_Proxy_Impl (void)
{
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:57
void
POA_Monitor::_TAO_MC_Direct_Proxy_Impl::get_statistic_names (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_Monitor::MC_ptr _tao_ptr = 
    dynamic_cast<POA_Monitor::MC_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::Monitor::NameList>::ret_val *) args[0])->arg () =
    _tao_ptr->get_statistic_names (
          ((TAO::Arg_Traits< char *>::in_arg_val *) args[1])->arg ()
        );
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:57
void
POA_Monitor::_TAO_MC_Direct_Proxy_Impl::get_statistics (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_Monitor::MC_ptr _tao_ptr = 
    dynamic_cast<POA_Monitor::MC_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::Monitor::DataList>::ret_val *) args[0])->arg () =
    _tao_ptr->get_statistics (
          ((TAO::Arg_Traits< ::Monitor::NameList>::in_arg_val *) args[1])->arg ()
        );
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:57
void
POA_Monitor::_TAO_MC_Direct_Proxy_Impl::get_and_clear_statistics (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_Monitor::MC_ptr _tao_ptr = 
    dynamic_cast<POA_Monitor::MC_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::Monitor::DataList>::ret_val *) args[0])->arg () =
    _tao_ptr->get_and_clear_statistics (
          ((TAO::Arg_Traits< ::Monitor::NameList>::in_arg_val *) args[1])->arg ()
        );
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:57
void
POA_Monitor::_TAO_MC_Direct_Proxy_Impl::clear_statistics (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_Monitor::MC_ptr _tao_ptr = 
    dynamic_cast<POA_Monitor::MC_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::Monitor::NameList>::ret_val *) args[0])->arg () =
    _tao_ptr->clear_statistics (
          ((TAO::Arg_Traits< ::Monitor::NameList>::in_arg_val *) args[1])->arg ()
        );
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:57
void
POA_Monitor::_TAO_MC_Direct_Proxy_Impl::register_constraint (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_Monitor::MC_ptr _tao_ptr = 
    dynamic_cast<POA_Monitor::MC_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::Monitor::ConstraintStructList>::ret_val *) args[0])->arg () =
    _tao_ptr->register_constraint (
          ((TAO::Arg_Traits< ::Monitor::NameList>::in_arg_val *) args[1])->arg (),
          ((TAO::Arg_Traits< char *>::in_arg_val *) args[2])->arg (),
          ((TAO::Arg_Traits< ::Monitor::Subscriber>::in_arg_val *) args[3])->arg ()
        );
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\direct_proxy_impl_ss.cpp:57
void
POA_Monitor::_TAO_MC_Direct_Proxy_Impl::unregister_constraints (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_Monitor::MC_ptr _tao_ptr = 
    dynamic_cast<POA_Monitor::MC_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->unregister_constraints (
        ((TAO::Arg_Traits< ::Monitor::ConstraintStructList>::in_arg_val *) args[1])->arg ()
      );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:90

POA_Monitor::MC::MC (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Monitor_MC_optable;
}

POA_Monitor::MC::MC (const MC& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Monitor::MC::~MC (void)
{
}

namespace POA_Monitor
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class get_statistic_names_MC
    : public TAO::Upcall_Command
  {
  public:
    inline get_statistic_names_MC (
      POA_Monitor::MC * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Monitor::NameList>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Monitor::NameList> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->get_statistic_names (
          arg_1);
    }
  
  private:
    POA_Monitor::MC * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_Monitor::MC::get_statistic_names_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Monitor::NameList>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_filter;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_filter
    };
  
  static size_t const nargs = 2;

  POA_Monitor::MC * const impl =
    dynamic_cast<POA_Monitor::MC *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_statistic_names_MC command (
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


namespace POA_Monitor
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class get_statistics_MC
    : public TAO::Upcall_Command
  {
  public:
    inline get_statistics_MC (
      POA_Monitor::MC * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Monitor::DataList>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Monitor::DataList> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Monitor::NameList>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Monitor::NameList> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->get_statistics (
          arg_1);
    }
  
  private:
    POA_Monitor::MC * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_Monitor::MC::get_statistics_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Monitor::DataList>::ret_val retval;
  TAO::SArg_Traits< ::Monitor::NameList>::in_arg_val _tao_names;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_names
    };
  
  static size_t const nargs = 2;

  POA_Monitor::MC * const impl =
    dynamic_cast<POA_Monitor::MC *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_statistics_MC command (
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


namespace POA_Monitor
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class get_and_clear_statistics_MC
    : public TAO::Upcall_Command
  {
  public:
    inline get_and_clear_statistics_MC (
      POA_Monitor::MC * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Monitor::DataList>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Monitor::DataList> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Monitor::NameList>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Monitor::NameList> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->get_and_clear_statistics (
          arg_1);
    }
  
  private:
    POA_Monitor::MC * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_Monitor::MC::get_and_clear_statistics_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Monitor::DataList>::ret_val retval;
  TAO::SArg_Traits< ::Monitor::NameList>::in_arg_val _tao_names;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_names
    };
  
  static size_t const nargs = 2;

  POA_Monitor::MC * const impl =
    dynamic_cast<POA_Monitor::MC *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_and_clear_statistics_MC command (
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


namespace POA_Monitor
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class clear_statistics_MC
    : public TAO::Upcall_Command
  {
  public:
    inline clear_statistics_MC (
      POA_Monitor::MC * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Monitor::NameList>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Monitor::NameList> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Monitor::NameList>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Monitor::NameList> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->clear_statistics (
          arg_1);
    }
  
  private:
    POA_Monitor::MC * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_Monitor::MC::clear_statistics_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Monitor::NameList>::ret_val retval;
  TAO::SArg_Traits< ::Monitor::NameList>::in_arg_val _tao_names;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_names
    };
  
  static size_t const nargs = 2;

  POA_Monitor::MC * const impl =
    dynamic_cast<POA_Monitor::MC *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  clear_statistics_MC command (
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


namespace POA_Monitor
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class register_constraint_MC
    : public TAO::Upcall_Command
  {
  public:
    inline register_constraint_MC (
      POA_Monitor::MC * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Monitor::ConstraintStructList>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Monitor::ConstraintStructList> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Monitor::NameList>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Monitor::NameList> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< char *>::in_arg_type arg_2 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::Monitor::Subscriber>::in_arg_type arg_3 =
        TAO::Portable_Server::get_in_arg< ::Monitor::Subscriber> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->register_constraint (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Monitor::MC * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_Monitor::MC::register_constraint_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Monitor::ConstraintStructList>::ret_val retval;
  TAO::SArg_Traits< ::Monitor::NameList>::in_arg_val _tao_names;
  TAO::SArg_Traits< char *>::in_arg_val _tao_cs;
  TAO::SArg_Traits< ::Monitor::Subscriber>::in_arg_val _tao_sub;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_names,
      &_tao_cs,
      &_tao_sub
    };
  
  static size_t const nargs = 4;

  POA_Monitor::MC * const impl =
    dynamic_cast<POA_Monitor::MC *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  register_constraint_MC command (
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


namespace POA_Monitor
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:80

  class unregister_constraints_MC
    : public TAO::Upcall_Command
  {
  public:
    inline unregister_constraints_MC (
      POA_Monitor::MC * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Monitor::ConstraintStructList>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Monitor::ConstraintStructList> (
          this->operation_details_,
          this->args_,
          1);
        
      this->servant_->unregister_constraints (
        arg_1);
    }
  
  private:
    POA_Monitor::MC * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:168

void POA_Monitor::MC::unregister_constraints_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::Monitor::ConstraintStructList>::in_arg_val _tao_constraint;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_constraint
    };
  
  static size_t const nargs = 2;

  POA_Monitor::MC * const impl =
    dynamic_cast<POA_Monitor::MC *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  unregister_constraints_MC command (
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



::CORBA::Boolean POA_Monitor::MC::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Monitor/MC:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Monitor::MC::_interface_repository_id (void) const
{
  return "IDL:Monitor/MC:1.0";
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:423

void POA_Monitor::MC::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:370

Monitor::MC *
POA_Monitor::MC::_this (void)
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

  typedef ::Monitor::MC STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */

