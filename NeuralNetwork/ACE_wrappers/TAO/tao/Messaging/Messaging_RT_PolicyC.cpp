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
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:366


#include "Messaging_RT_PolicyC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for Messaging::RelativeRoundtripTimeoutPolicy.

Messaging::RelativeRoundtripTimeoutPolicy_ptr
TAO::Objref_Traits<Messaging::RelativeRoundtripTimeoutPolicy>::duplicate (
    Messaging::RelativeRoundtripTimeoutPolicy_ptr p)
{
  return Messaging::RelativeRoundtripTimeoutPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<Messaging::RelativeRoundtripTimeoutPolicy>::release (
    Messaging::RelativeRoundtripTimeoutPolicy_ptr p)
{
  ::CORBA::release (p);
}

Messaging::RelativeRoundtripTimeoutPolicy_ptr
TAO::Objref_Traits<Messaging::RelativeRoundtripTimeoutPolicy>::nil (void)
{
  return Messaging::RelativeRoundtripTimeoutPolicy::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Messaging::RelativeRoundtripTimeoutPolicy>::marshal (
    const Messaging::RelativeRoundtripTimeoutPolicy_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




Messaging::RelativeRoundtripTimeoutPolicy::RelativeRoundtripTimeoutPolicy (void)
{}

Messaging::RelativeRoundtripTimeoutPolicy::~RelativeRoundtripTimeoutPolicy (void)
{
}

Messaging::RelativeRoundtripTimeoutPolicy_ptr
Messaging::RelativeRoundtripTimeoutPolicy::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return RelativeRoundtripTimeoutPolicy::_duplicate (
      dynamic_cast<RelativeRoundtripTimeoutPolicy_ptr> (_tao_objref));
}

Messaging::RelativeRoundtripTimeoutPolicy_ptr
Messaging::RelativeRoundtripTimeoutPolicy::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return RelativeRoundtripTimeoutPolicy::_duplicate (
      dynamic_cast<RelativeRoundtripTimeoutPolicy_ptr> (_tao_objref));
}

Messaging::RelativeRoundtripTimeoutPolicy_ptr
Messaging::RelativeRoundtripTimeoutPolicy::_nil (void)
{
  return 0;
}

Messaging::RelativeRoundtripTimeoutPolicy_ptr
Messaging::RelativeRoundtripTimeoutPolicy::_duplicate (RelativeRoundtripTimeoutPolicy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Messaging::RelativeRoundtripTimeoutPolicy::_tao_release (RelativeRoundtripTimeoutPolicy_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Messaging::RelativeRoundtripTimeoutPolicy::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/RelativeRoundtripTimeoutPolicy:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Messaging::RelativeRoundtripTimeoutPolicy::_interface_repository_id (void) const
{
  return "IDL:omg.org/Messaging/RelativeRoundtripTimeoutPolicy:1.0";
}

::CORBA::Boolean
Messaging::RelativeRoundtripTimeoutPolicy::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


