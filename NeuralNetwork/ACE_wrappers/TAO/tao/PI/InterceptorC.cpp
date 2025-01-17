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


#include "InterceptorC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for PortableInterceptor::Interceptor.

PortableInterceptor::Interceptor_ptr
TAO::Objref_Traits<PortableInterceptor::Interceptor>::duplicate (
    PortableInterceptor::Interceptor_ptr p)
{
  return PortableInterceptor::Interceptor::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::Interceptor>::release (
    PortableInterceptor::Interceptor_ptr p)
{
  ::CORBA::release (p);
}

PortableInterceptor::Interceptor_ptr
TAO::Objref_Traits<PortableInterceptor::Interceptor>::nil (void)
{
  return PortableInterceptor::Interceptor::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::Interceptor>::marshal (
    const PortableInterceptor::Interceptor_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




PortableInterceptor::Interceptor::Interceptor (void)
{}

PortableInterceptor::Interceptor::~Interceptor (void)
{
}

PortableInterceptor::Interceptor_ptr
PortableInterceptor::Interceptor::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Interceptor::_duplicate (
      dynamic_cast<Interceptor_ptr> (_tao_objref));
}

PortableInterceptor::Interceptor_ptr
PortableInterceptor::Interceptor::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Interceptor::_duplicate (
      dynamic_cast<Interceptor_ptr> (_tao_objref));
}

PortableInterceptor::Interceptor_ptr
PortableInterceptor::Interceptor::_nil (void)
{
  return 0;
}

PortableInterceptor::Interceptor_ptr
PortableInterceptor::Interceptor::_duplicate (Interceptor_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
PortableInterceptor::Interceptor::_tao_release (Interceptor_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableInterceptor::Interceptor::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/Interceptor:1.0"
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

const char* PortableInterceptor::Interceptor::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/Interceptor:1.0";
}

::CORBA::Boolean
PortableInterceptor::Interceptor::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


