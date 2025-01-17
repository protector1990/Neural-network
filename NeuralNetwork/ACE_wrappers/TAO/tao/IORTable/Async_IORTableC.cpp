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


#include "tao/IORTable/Async_IORTable.h"
#include "tao/CDR.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for IORTable::AsyncLocator.

IORTable::AsyncLocator_ptr
TAO::Objref_Traits<IORTable::AsyncLocator>::duplicate (
    IORTable::AsyncLocator_ptr p)
{
  return IORTable::AsyncLocator::_duplicate (p);
}

void
TAO::Objref_Traits<IORTable::AsyncLocator>::release (
    IORTable::AsyncLocator_ptr p)
{
  ::CORBA::release (p);
}

IORTable::AsyncLocator_ptr
TAO::Objref_Traits<IORTable::AsyncLocator>::nil (void)
{
  return IORTable::AsyncLocator::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<IORTable::AsyncLocator>::marshal (
    const IORTable::AsyncLocator_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




IORTable::AsyncLocator::AsyncLocator (void)
{}

IORTable::AsyncLocator::~AsyncLocator (void)
{
}

IORTable::AsyncLocator_ptr
IORTable::AsyncLocator::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AsyncLocator::_duplicate (
      dynamic_cast<AsyncLocator_ptr> (_tao_objref));
}

IORTable::AsyncLocator_ptr
IORTable::AsyncLocator::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AsyncLocator::_duplicate (
      dynamic_cast<AsyncLocator_ptr> (_tao_objref));
}

IORTable::AsyncLocator_ptr
IORTable::AsyncLocator::_nil (void)
{
  return 0;
}

IORTable::AsyncLocator_ptr
IORTable::AsyncLocator::_duplicate (AsyncLocator_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
IORTable::AsyncLocator::_tao_release (AsyncLocator_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
IORTable::AsyncLocator::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:IORTable/Locator:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:IORTable/AsyncLocator:1.0"
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

const char* IORTable::AsyncLocator::_interface_repository_id (void) const
{
  return "IDL:IORTable/AsyncLocator:1.0";
}

::CORBA::Boolean
IORTable::AsyncLocator::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


