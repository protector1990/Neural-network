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


#include "BoundsC.h"
#include "tao/CDR.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\exception_cs.cpp:98

CORBA::Bounds::Bounds (void)
  : ::CORBA::UserException (
        "IDL:omg.org/CORBA/Bounds:1.0",
        "Bounds")
{
}

CORBA::Bounds::~Bounds (void)
{
}

CORBA::Bounds::Bounds (const ::CORBA::Bounds &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ())
{
}

CORBA::Bounds&
CORBA::Bounds::operator= (const ::CORBA::Bounds &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

void CORBA::Bounds::_tao_any_destructor (void *_tao_void_pointer)
{
  Bounds *_tao_tmp_pointer =
    static_cast<Bounds *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

CORBA::Bounds *
CORBA::Bounds::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<Bounds *> (_tao_excp);
}

const CORBA::Bounds *
CORBA::Bounds::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const Bounds *> (_tao_excp);
}

::CORBA::Exception *CORBA::Bounds::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::Bounds, 0);
  return retval;
}

::CORBA::Exception *
CORBA::Bounds::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::CORBA::Bounds (*this),
      0);
  return result;
}

void CORBA::Bounds::_raise (void) const
{
  throw *this;
}

void CORBA::Bounds::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void CORBA::Bounds::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_exception\cdr_op_cs.cpp:48

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::Bounds &_tao_aggregate)
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA::Bounds&)
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL

