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
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ci.cpp:59

ACE_INLINE
ImplementationRepository::Locator::Locator (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
ImplementationRepository::Locator::Locator (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_valuetype\valuetype_ci.cpp:44

ACE_INLINE
ImplementationRepository::AMH_LocatorExceptionHolder::AMH_LocatorExceptionHolder (void)
  : exception (0)
{}

ACE_INLINE const char*
ImplementationRepository::AMH_LocatorExceptionHolder::_tao_obv_static_repository_id ()
{
  return "IDL:ImplementationRepository/AMH_LocatorExceptionHolder:1.0";
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\union_ci.cpp:36

// *************************************************************
// Inline operations for union ImplementationRepository::UpdateAction
// *************************************************************

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\discriminant_ci.cpp:55

ACE_INLINE
void
ImplementationRepository::UpdateAction::_default ()
{
  this->_reset ();
  this->disc_ = static_cast <ImplementationRepository::UpdateType> (-1);
}

// Accessor to set the discriminant.
ACE_INLINE
void
ImplementationRepository::UpdateAction::_d (ImplementationRepository::UpdateType discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
ImplementationRepository::UpdateType
ImplementationRepository::UpdateAction::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union_branch\public_ci.cpp:1065

/// Accessor to set the member.
ACE_INLINE
void
ImplementationRepository::UpdateAction::info (const ImplementationRepository::RepoInfo &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = ImplementationRepository::repo_update;
  this->u_.info_ = val;
}

// Readonly get method.
ACE_INLINE
const ImplementationRepository::RepoInfo &
ImplementationRepository::UpdateAction::info (void) const
{
  return this->u_.info_;
}

// Read/write get method.
ACE_INLINE
ImplementationRepository::RepoInfo &
ImplementationRepository::UpdateAction::info (void)
{
  return this->u_.info_;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union_branch\public_ci.cpp:229

/// Accessor to set the member.
ACE_INLINE
void
ImplementationRepository::UpdateAction::kind (ImplementationRepository::EntityType val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = ImplementationRepository::repo_remove;
  // Set the value.
  this->u_.kind_ = val;
}

/// Retrieve the member.
ACE_INLINE
ImplementationRepository::EntityType
ImplementationRepository::UpdateAction::kind (void) const
{
  return this->u_.kind_;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union_branch\public_ci.cpp:229

/// Accessor to set the member.
ACE_INLINE
void
ImplementationRepository::UpdateAction::state (ImplementationRepository::AAM_Status val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = ImplementationRepository::access;
  // Set the value.
  this->u_.state_ = val;
}

/// Retrieve the member.
ACE_INLINE
ImplementationRepository::AAM_Status
ImplementationRepository::UpdateAction::state (void) const
{
  return this->u_.state_;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ci.cpp:59

ACE_INLINE
ImplementationRepository::UpdatePushNotification::UpdatePushNotification (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
ImplementationRepository::UpdatePushNotification::UpdatePushNotification (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_valuetype\valuetype_ci.cpp:44

ACE_INLINE
ImplementationRepository::AMH_UpdatePushNotificationExceptionHolder::AMH_UpdatePushNotificationExceptionHolder (void)
  : exception (0)
{}

ACE_INLINE const char*
ImplementationRepository::AMH_UpdatePushNotificationExceptionHolder::_tao_obv_static_repository_id ()
{
  return "IDL:ImplementationRepository/AMH_UpdatePushNotificationExceptionHolder:1.0";
}


TAO_END_VERSIONED_NAMESPACE_DECL

