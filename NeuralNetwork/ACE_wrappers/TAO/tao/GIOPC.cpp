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


#include "GIOPC.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "GIOPC.inl"
#endif /* !defined INLINE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_cs.cpp:56

void
GIOP::Version::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Version *_tao_tmp_pointer =
    static_cast<Version *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_cs.cpp:56

void
GIOP::IORAddressingInfo::_tao_any_destructor (
    void *_tao_void_pointer)
{
  IORAddressingInfo *_tao_tmp_pointer =
    static_cast<IORAddressingInfo *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\union_cs.cpp:76

GIOP::TargetAddress::TargetAddress (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = -32768;
}

GIOP::TargetAddress::TargetAddress (const ::GIOP::TargetAddress &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case 0:
    {
      if (u.u_.object_key_ == 0)
        {
          this->u_.object_key_ = 0;
        }
      else
        {
          ACE_NEW (
              this->u_.object_key_,
              CORBA::OctetSeq (*u.u_.object_key_)
            );
        }
    }
    break;
    case 1:
    {
      if (u.u_.profile_ == 0)
        {
          this->u_.profile_ = 0;
        }
      else
        {
          ACE_NEW (
              this->u_.profile_,
              IOP::TaggedProfile (*u.u_.profile_)
            );
        }
    }
    break;
    case 2:
    {
      if (u.u_.ior_ == 0)
        {
          this->u_.ior_ = 0;
        }
      else
        {
          ACE_NEW (
              this->u_.ior_,
              GIOP::IORAddressingInfo (*u.u_.ior_)
            );
        }
    }
    break;
    default:
    break;
  }
}

GIOP::TargetAddress::~TargetAddress (void)
{
  // Finalize.
  this->_reset ();
}

void GIOP::TargetAddress::_tao_any_destructor (void *_tao_void_pointer)
{
  TargetAddress *tmp =
    static_cast<TargetAddress *> (_tao_void_pointer);
  delete tmp;
}

GIOP::TargetAddress &
GIOP::TargetAddress::operator= (const ::GIOP::TargetAddress &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case 0:
    {
      if (u.u_.object_key_ == 0)
        {
          this->u_.object_key_ = 0;
        }
      else
        {
          ACE_NEW_RETURN (
              this->u_.object_key_,
              CORBA::OctetSeq (*u.u_.object_key_),
              *this
            );
        }
    }
    break;
    case 1:
    {
      if (u.u_.profile_ == 0)
        {
          this->u_.profile_ = 0;
        }
      else
        {
          ACE_NEW_RETURN (
              this->u_.profile_,
              IOP::TaggedProfile (*u.u_.profile_),
              *this
            );
        }
    }
    break;
    case 2:
    {
      if (u.u_.ior_ == 0)
        {
          this->u_.ior_ = 0;
        }
      else
        {
          ACE_NEW_RETURN (
              this->u_.ior_,
              GIOP::IORAddressingInfo (*u.u_.ior_),
              *this
            );
        }
    }
    break;
    default:
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void GIOP::TargetAddress::_reset (void)
{
  switch (this->disc_)
  {
    
    case 0:
      delete this->u_.object_key_;
      this->u_.object_key_ = 0;
      
    break;
    
    case 1:
      delete this->u_.profile_;
      this->u_.profile_ = 0;
      
    break;
    
    case 2:
      delete this->u_.ior_;
      this->u_.ior_ = 0;
      
    break;
    
    default:
    break;
  }
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:49


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const GIOP::Version &_tao_aggregate)
{
  return
    (strm << ::ACE_OutputCDR::from_octet (_tao_aggregate.major)) &&
    (strm << ::ACE_OutputCDR::from_octet (_tao_aggregate.minor));
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    GIOP::Version &_tao_aggregate)
{
  return
    (strm >> ::ACE_InputCDR::to_octet (_tao_aggregate.major)) &&
    (strm >> ::ACE_InputCDR::to_octet (_tao_aggregate.minor));
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:49


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const GIOP::IORAddressingInfo &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.selected_profile_index) &&
    (strm << _tao_aggregate.ior);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    GIOP::IORAddressingInfo &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.selected_profile_index) &&
    (strm >> _tao_aggregate.ior);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\cdr_op_cs.cpp:74



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const GIOP::TargetAddress &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case 0:
      {
        result = strm << _tao_union.object_key ();
      }
      break;
    case 1:
      {
        result = strm << _tao_union.profile ();
      }
      break;
    case 2:
      {
        result = strm << _tao_union.ior ();
      }
      break;
    default:
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    GIOP::TargetAddress &_tao_union
  )
{
  CORBA::Short _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case 0:
      {
        CORBA::OctetSeq _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.object_key (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case 1:
      {
        IOP::TaggedProfile _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.profile (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case 2:
      {
        GIOP::IORAddressingInfo _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.ior (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      _tao_union._default ();
      // For maximum interop compatibility, force the same value as transmitted
      _tao_union._d (_tao_discriminant);
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\cdr_op_cs.cpp:34



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, GIOP::MsgType _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, GIOP::MsgType & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<GIOP::MsgType> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\cdr_op_cs.cpp:34



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, GIOP::ReplyStatusType _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, GIOP::ReplyStatusType & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<GIOP::ReplyStatusType> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\cdr_op_cs.cpp:34



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, GIOP::LocateStatusType _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, GIOP::LocateStatusType & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<GIOP::LocateStatusType> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


