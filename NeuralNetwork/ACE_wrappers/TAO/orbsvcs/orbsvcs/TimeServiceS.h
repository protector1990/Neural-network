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

#ifndef _TAO_IDL_TIMESERVICES_ADYSYX_H_
#define _TAO_IDL_TIMESERVICES_ADYSYX_H_

#include /**/ "ace/pre.h"

#include "TimeServiceC.h"
#include "tao/TimeBaseS.h"
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

#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

#include /**/ "orbsvcs/Time/time_skel_export.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:902

  template<>
  class SArg_Traits< ::CosTime::TimeComparison>
    : public
        Basic_SArg_Traits_T<
            ::CosTime::TimeComparison,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:902

  template<>
  class SArg_Traits< ::CosTime::ComparisonType>
    : public
        Basic_SArg_Traits_T<
            ::CosTime::ComparisonType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:902

  template<>
  class SArg_Traits< ::CosTime::OverlapType>
    : public
        Basic_SArg_Traits_T<
            ::CosTime::OverlapType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_COSTIME_TIO__SARG_TRAITS_)
#define _COSTIME_TIO__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosTime::TIO>
    : public
        Object_SArg_Traits_T<
            ::CosTime::TIO_ptr,
            ::CosTime::TIO_var,
            ::CosTime::TIO_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_COSTIME_UTO__SARG_TRAITS_)
#define _COSTIME_UTO__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosTime::UTO>
    : public
        Object_SArg_Traits_T<
            ::CosTime::UTO_ptr,
            ::CosTime::UTO_var,
            ::CosTime::UTO_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:145

#if !defined (_COSTIME_TIMESERVICE__SARG_TRAITS_)
#define _COSTIME_TIMESERVICE__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosTime::TimeService>
    : public
        Object_SArg_Traits_T<
            ::CosTime::TimeService_ptr,
            ::CosTime::TimeService_var,
            ::CosTime::TimeService_out,
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

namespace POA_CosTime
{
  

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

  class UTO;
  typedef UTO *UTO_ptr;

  class TAO_Time_Skel_Export UTO
    : public virtual PortableServer::ServantBase
  {
  protected:
    UTO (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosTime::UTO _stub_type;
    typedef ::CosTime::UTO_ptr _stub_ptr_type;
    typedef ::CosTime::UTO_var _stub_var_type;

    UTO (const UTO& rhs);
    virtual ~UTO (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::CosTime::UTO *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::TimeBase::TimeT time (
      void) = 0;

    static void _get_time_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::TimeBase::InaccuracyT inaccuracy (
      void) = 0;

    static void _get_inaccuracy_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::TimeBase::TdfT tdf (
      void) = 0;

    static void _get_tdf_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::TimeBase::UtcT utc_time (
      void) = 0;

    static void _get_utc_time_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::UTO_ptr absolute_time (
      void) = 0;

    static void absolute_time_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::TimeComparison compare_time (
      ::CosTime::ComparisonType comparison_type,
      ::CosTime::UTO_ptr otu) = 0;

    static void compare_time_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::TIO_ptr time_to_interval (
      ::CosTime::UTO_ptr otu) = 0;

    static void time_to_interval_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::TIO_ptr interval (
      void) = 0;

    static void interval_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

  class TIO;
  typedef TIO *TIO_ptr;

  class TAO_Time_Skel_Export TIO
    : public virtual PortableServer::ServantBase
  {
  protected:
    TIO (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosTime::TIO _stub_type;
    typedef ::CosTime::TIO_ptr _stub_ptr_type;
    typedef ::CosTime::TIO_var _stub_var_type;

    TIO (const TIO& rhs);
    virtual ~TIO (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::CosTime::TIO *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::TimeBase::IntervalT time_interval (
      void) = 0;

    static void _get_time_interval_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::OverlapType spans (
      ::CosTime::UTO_ptr time,
      ::CosTime::TIO_out overlap) = 0;

    static void spans_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::OverlapType overlaps (
      ::CosTime::TIO_ptr interval,
      ::CosTime::TIO_out overlap) = 0;

    static void overlaps_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::UTO_ptr time (
      void) = 0;

    static void time_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:73

  class TimeService;
  typedef TimeService *TimeService_ptr;

  class TAO_Time_Skel_Export TimeService
    : public virtual PortableServer::ServantBase
  {
  protected:
    TimeService (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosTime::TimeService _stub_type;
    typedef ::CosTime::TimeService_ptr _stub_ptr_type;
    typedef ::CosTime::TimeService_var _stub_var_type;

    TimeService (const TimeService& rhs);
    virtual ~TimeService (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::CosTime::TimeService *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::UTO_ptr universal_time (
      void) = 0;

    static void universal_time_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::UTO_ptr secure_universal_time (
      void) = 0;

    static void secure_universal_time_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::UTO_ptr new_universal_time (
      ::TimeBase::TimeT time,
      ::TimeBase::InaccuracyT inaccuracy,
      ::TimeBase::TdfT tdf) = 0;

    static void new_universal_time_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::UTO_ptr uto_from_utc (
      const ::TimeBase::UtcT & utc) = 0;

    static void uto_from_utc_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:36

    virtual ::CosTime::TIO_ptr new_interval (
      ::TimeBase::TimeT lower,
      ::TimeBase::TimeT upper) = 0;

    static void new_interval_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:66

} // module CosTime

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

