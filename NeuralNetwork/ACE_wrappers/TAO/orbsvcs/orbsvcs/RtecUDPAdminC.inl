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
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_ci.cpp:147


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


ACE_INLINE
void
TAO::Array_Traits<RtecUDPAdmin::char16_forany>::free (
    RtecUDPAdmin::char16_slice * _tao_slice)
{
  RtecUDPAdmin::char16_free (_tao_slice);
}

ACE_INLINE
RtecUDPAdmin::char16_slice *
TAO::Array_Traits<RtecUDPAdmin::char16_forany>::dup (
    const RtecUDPAdmin::char16_slice * _tao_slice)
{
  return RtecUDPAdmin::char16_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<RtecUDPAdmin::char16_forany>::copy (
    RtecUDPAdmin::char16_slice * _tao_to,
    const RtecUDPAdmin::char16_slice * _tao_from)
{
  RtecUDPAdmin::char16_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<RtecUDPAdmin::char16_forany>::zero (
    RtecUDPAdmin::char16_slice * _tao_slice)
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 16; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Char ();
    }
}

ACE_INLINE
RtecUDPAdmin::char16_slice *
TAO::Array_Traits<RtecUDPAdmin::char16_forany>::alloc (void)
{
  return RtecUDPAdmin::char16_alloc ();
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\union_ci.cpp:36

// *************************************************************
// Inline operations for union RtecUDPAdmin::UDP_Address
// *************************************************************

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\discriminant_ci.cpp:55

ACE_INLINE
void
RtecUDPAdmin::UDP_Address::_default ()
{
  this->_reset ();
  this->disc_ = static_cast <RtecUDPAdmin::Address_Family> (-1);
}

// Accessor to set the discriminant.
ACE_INLINE
void
RtecUDPAdmin::UDP_Address::_d (RtecUDPAdmin::Address_Family discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
RtecUDPAdmin::Address_Family
RtecUDPAdmin::UDP_Address::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union_branch\public_ci.cpp:1065

/// Accessor to set the member.
ACE_INLINE
void
RtecUDPAdmin::UDP_Address::v4_addr (const RtecUDPAdmin::UDP_Addr &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = RtecUDPAdmin::Rtec_inet;
  this->u_.v4_addr_ = val;
}

// Readonly get method.
ACE_INLINE
const RtecUDPAdmin::UDP_Addr &
RtecUDPAdmin::UDP_Address::v4_addr (void) const
{
  return this->u_.v4_addr_;
}

// Read/write get method.
ACE_INLINE
RtecUDPAdmin::UDP_Addr &
RtecUDPAdmin::UDP_Address::v4_addr (void)
{
  return this->u_.v4_addr_;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union_branch\public_ci.cpp:1065

/// Accessor to set the member.
ACE_INLINE
void
RtecUDPAdmin::UDP_Address::v6_addr (const RtecUDPAdmin::UDP_Addr_v6 &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = RtecUDPAdmin::Rtec_inet6;
  this->u_.v6_addr_ = val;
}

// Readonly get method.
ACE_INLINE
const RtecUDPAdmin::UDP_Addr_v6 &
RtecUDPAdmin::UDP_Address::v6_addr (void) const
{
  return this->u_.v6_addr_;
}

// Read/write get method.
ACE_INLINE
RtecUDPAdmin::UDP_Addr_v6 &
RtecUDPAdmin::UDP_Address::v6_addr (void)
{
  return this->u_.v6_addr_;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ci.cpp:59

ACE_INLINE
RtecUDPAdmin::AddrServer::AddrServer (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
RtecUDPAdmin::AddrServer::AddrServer (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}


TAO_END_VERSIONED_NAMESPACE_DECL

