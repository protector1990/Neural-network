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


#include "EndpointPolicyC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for EndpointPolicy::EndpointValueBase.

EndpointPolicy::EndpointValueBase_ptr
TAO::Objref_Traits<EndpointPolicy::EndpointValueBase>::duplicate (
    EndpointPolicy::EndpointValueBase_ptr p)
{
  return EndpointPolicy::EndpointValueBase::_duplicate (p);
}

void
TAO::Objref_Traits<EndpointPolicy::EndpointValueBase>::release (
    EndpointPolicy::EndpointValueBase_ptr p)
{
  ::CORBA::release (p);
}

EndpointPolicy::EndpointValueBase_ptr
TAO::Objref_Traits<EndpointPolicy::EndpointValueBase>::nil (void)
{
  return EndpointPolicy::EndpointValueBase::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<EndpointPolicy::EndpointValueBase>::marshal (
    const EndpointPolicy::EndpointValueBase_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




EndpointPolicy::EndpointValueBase::EndpointValueBase (void)
{}

EndpointPolicy::EndpointValueBase::~EndpointValueBase (void)
{
}

void
EndpointPolicy::EndpointValueBase::_tao_any_destructor (void *_tao_void_pointer)
{
  EndpointValueBase *_tao_tmp_pointer =
    static_cast<EndpointValueBase *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

EndpointPolicy::EndpointValueBase_ptr
EndpointPolicy::EndpointValueBase::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return EndpointValueBase::_duplicate (
      dynamic_cast<EndpointValueBase_ptr> (_tao_objref));
}

EndpointPolicy::EndpointValueBase_ptr
EndpointPolicy::EndpointValueBase::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return EndpointValueBase::_duplicate (
      dynamic_cast<EndpointValueBase_ptr> (_tao_objref));
}

EndpointPolicy::EndpointValueBase_ptr
EndpointPolicy::EndpointValueBase::_nil (void)
{
  return 0;
}

EndpointPolicy::EndpointValueBase_ptr
EndpointPolicy::EndpointValueBase::_duplicate (EndpointValueBase_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
EndpointPolicy::EndpointValueBase::_tao_release (EndpointValueBase_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
EndpointPolicy::EndpointValueBase::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:EndpointPolicy/EndpointValueBase:1.0"
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

const char* EndpointPolicy::EndpointValueBase::_interface_repository_id (void) const
{
  return "IDL:EndpointPolicy/EndpointValueBase:1.0";
}

::CORBA::Boolean
EndpointPolicy::EndpointValueBase::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:105

#if !defined (_ENDPOINTPOLICY_ENDPOINTLIST_CS_)
#define _ENDPOINTPOLICY_ENDPOINTLIST_CS_

EndpointPolicy::EndpointList::EndpointList (void)
{}

EndpointPolicy::EndpointList::EndpointList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_object_reference_sequence<
        EndpointValueBase,
        EndpointValueBase_var
      > (max)
{}

EndpointPolicy::EndpointList::EndpointList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    EndpointPolicy::EndpointValueBase_ptr * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_object_reference_sequence<
        EndpointValueBase,
        EndpointValueBase_var
      >
    (max, length, buffer, release)
{}

EndpointPolicy::EndpointList::EndpointList (
    const EndpointList &seq)
  : ::TAO::unbounded_object_reference_sequence<
        EndpointValueBase,
        EndpointValueBase_var
      > (seq)
{}

EndpointPolicy::EndpointList::~EndpointList (void)
{}

void EndpointPolicy::EndpointList::_tao_any_destructor (
    void * _tao_void_pointer)
{
  EndpointList * _tao_tmp_pointer =
    static_cast<EndpointList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for EndpointPolicy::Policy.

EndpointPolicy::Policy_ptr
TAO::Objref_Traits<EndpointPolicy::Policy>::duplicate (
    EndpointPolicy::Policy_ptr p)
{
  return EndpointPolicy::Policy::_duplicate (p);
}

void
TAO::Objref_Traits<EndpointPolicy::Policy>::release (
    EndpointPolicy::Policy_ptr p)
{
  ::CORBA::release (p);
}

EndpointPolicy::Policy_ptr
TAO::Objref_Traits<EndpointPolicy::Policy>::nil (void)
{
  return EndpointPolicy::Policy::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<EndpointPolicy::Policy>::marshal (
    const EndpointPolicy::Policy_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




EndpointPolicy::Policy::Policy (void)
{}

EndpointPolicy::Policy::~Policy (void)
{
}

void
EndpointPolicy::Policy::_tao_any_destructor (void *_tao_void_pointer)
{
  Policy *_tao_tmp_pointer =
    static_cast<Policy *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

EndpointPolicy::Policy_ptr
EndpointPolicy::Policy::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Policy::_duplicate (
      dynamic_cast<Policy_ptr> (_tao_objref));
}

EndpointPolicy::Policy_ptr
EndpointPolicy::Policy::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Policy::_duplicate (
      dynamic_cast<Policy_ptr> (_tao_objref));
}

EndpointPolicy::Policy_ptr
EndpointPolicy::Policy::_nil (void)
{
  return 0;
}

EndpointPolicy::Policy_ptr
EndpointPolicy::Policy::_duplicate (Policy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
EndpointPolicy::Policy::_tao_release (Policy_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
EndpointPolicy::Policy::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:EndpointPolicy/Policy:1.0"
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

const char* EndpointPolicy::Policy::_interface_repository_id (void) const
{
  return "IDL:EndpointPolicy/Policy:1.0";
}

::CORBA::Boolean
EndpointPolicy::Policy::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


