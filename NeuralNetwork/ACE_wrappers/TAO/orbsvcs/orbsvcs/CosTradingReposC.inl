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


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\union_ci.cpp:36

// *************************************************************
// Inline operations for union CosTradingRepos::ServiceTypeRepository::SpecifiedServiceTypes
// *************************************************************

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\discriminant_ci.cpp:55

ACE_INLINE
void
CosTradingRepos::ServiceTypeRepository::SpecifiedServiceTypes::_default ()
{
  this->_reset ();
  this->disc_ = static_cast <CosTradingRepos::ServiceTypeRepository::ListOption> (-1);
}

// Accessor to set the discriminant.
ACE_INLINE
void
CosTradingRepos::ServiceTypeRepository::SpecifiedServiceTypes::_d (CosTradingRepos::ServiceTypeRepository::ListOption discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
CosTradingRepos::ServiceTypeRepository::ListOption
CosTradingRepos::ServiceTypeRepository::SpecifiedServiceTypes::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union_branch\public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
CosTradingRepos::ServiceTypeRepository::SpecifiedServiceTypes::all_ (CORBA::Boolean val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = CosTradingRepos::ServiceTypeRepository::all;
  // Set the value.
  this->u_.all__ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Boolean
CosTradingRepos::ServiceTypeRepository::SpecifiedServiceTypes::all_ (void) const
{
  return this->u_.all__;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union_branch\public_ci.cpp:1065

/// Accessor to set the member.
ACE_INLINE
void
CosTradingRepos::ServiceTypeRepository::SpecifiedServiceTypes::incarnation (const CosTradingRepos::ServiceTypeRepository::IncarnationNumber &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = CosTradingRepos::ServiceTypeRepository::since;
  this->u_.incarnation_ = val;
}

// Readonly get method.
ACE_INLINE
const CosTradingRepos::ServiceTypeRepository::IncarnationNumber &
CosTradingRepos::ServiceTypeRepository::SpecifiedServiceTypes::incarnation (void) const
{
  return this->u_.incarnation_;
}

// Read/write get method.
ACE_INLINE
CosTradingRepos::ServiceTypeRepository::IncarnationNumber &
CosTradingRepos::ServiceTypeRepository::SpecifiedServiceTypes::incarnation (void)
{
  return this->u_.incarnation_;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ci.cpp:59

ACE_INLINE
CosTradingRepos::ServiceTypeRepository::ServiceTypeRepository (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
CosTradingRepos::ServiceTypeRepository::ServiceTypeRepository (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}


TAO_END_VERSIONED_NAMESPACE_DECL


