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


#include "ExceptionHolderC.h"
#include "tao/CDR.h"
#include "tao/Valuetype/ValueFactory.h"
#include "tao/ORB_Core.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "ExceptionHolderC.inl"
#endif /* !defined INLINE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_valuetype\valuetype_cs.cpp:53

void
TAO::Value_Traits<Messaging::ExceptionHolder>::add_ref (
    Messaging::ExceptionHolder * p)
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<Messaging::ExceptionHolder>::remove_ref (
    Messaging::ExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<Messaging::ExceptionHolder>::release (
    Messaging::ExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

Messaging::ExceptionHolder *
Messaging::ExceptionHolder::_downcast ( ::CORBA::ValueBase *v)
{
  return dynamic_cast< ::Messaging::ExceptionHolder * > (v);
}

const char *
Messaging::ExceptionHolder::_tao_obv_repository_id (void) const
{
  return this->_tao_obv_static_repository_id ();
}

void
Messaging::ExceptionHolder::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

void
Messaging::ExceptionHolder::_tao_any_destructor (void *_tao_void_pointer)
{
  ExceptionHolder *_tao_tmp_pointer =
    static_cast<ExceptionHolder *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

Messaging::ExceptionHolder::~ExceptionHolder (void)
{}

::CORBA::Boolean
Messaging::ExceptionHolder::_tao_marshal_v (TAO_OutputCDR & strm) const
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_);
  return this->_tao_marshal__Messaging_ExceptionHolder (strm, ci);
}

::CORBA::Boolean
Messaging::ExceptionHolder::_tao_unmarshal_v (TAO_InputCDR & strm)
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_, 1);
  return this->_tao_unmarshal__Messaging_ExceptionHolder (strm,ci);
}

::CORBA::Boolean
Messaging::ExceptionHolder::_tao_match_formal_type (ptrdiff_t formal_type_id) const
{
  return formal_type_id == reinterpret_cast<ptrdiff_t> (Messaging::ExceptionHolder::_downcast);
}

::CORBA::Boolean
Messaging::ExceptionHolder::_tao_unmarshal (
    TAO_InputCDR &strm,
    ExceptionHolder *&new_object
  )
{
  ::CORBA::ValueBase *base = 0;
  ::CORBA::Boolean is_indirected = false;
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean const retval =
    ::CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        base,
        ExceptionHolder::_tao_obv_static_repository_id (),
        is_null_object,
        is_indirected
      );
  
  ::CORBA::ValueBase_var owner (base);

  if (!retval)
    return false;
  
  if (is_null_object)
    return true;
  
  if (!is_indirected && !base->_tao_unmarshal_v (strm))
    return false;
  
  // Now base must point to the unmarshaled object.
  // Align the pointer to the right subobject.
  new_object = ExceptionHolder::_downcast (base);
  if (0 == new_object)
    return false;
  
  if (is_indirected)
    new_object->_add_ref ();
  
  owner._retn ();
  return true;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_valuetype\valuetype_obv_cs.cpp:44

OBV_Messaging::ExceptionHolder::ExceptionHolder (void)
: require_truncation_ (false)
{}

OBV_Messaging::ExceptionHolder::ExceptionHolder (
    ::CORBA::Boolean _tao_init_is_system_exception,
    ::CORBA::Boolean _tao_init_byte_order,
    const ::CORBA::OctetSeq & _tao_init_marshaled_exception)
: require_truncation_ (false)
{
  is_system_exception (_tao_init_is_system_exception);
  byte_order (_tao_init_byte_order);
  marshaled_exception (_tao_init_marshaled_exception);
}

OBV_Messaging::ExceptionHolder::~ExceptionHolder (void)
{}

::CORBA::Boolean
OBV_Messaging::ExceptionHolder::_tao_marshal__Messaging_ExceptionHolder (TAO_OutputCDR &strm, TAO_ChunkInfo& ci) const
{
  return _tao_marshal_state (strm, ci);
}

::CORBA::Boolean
OBV_Messaging::ExceptionHolder::_tao_unmarshal__Messaging_ExceptionHolder (TAO_InputCDR &strm, TAO_ChunkInfo& ci)
{
  return _tao_unmarshal_state (strm, ci);
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_valuetype\field_cs.cpp:587

/// Accessor to set the member.
void
OBV_Messaging::ExceptionHolder::is_system_exception (const CORBA::Boolean val)
{
  // Set the value.
  this->_pd_is_system_exception = val;
}

// Retrieve the member
::CORBA::Boolean
OBV_Messaging::ExceptionHolder::is_system_exception (void) const
{
  return this->_pd_is_system_exception;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_valuetype\field_cs.cpp:587

/// Accessor to set the member.
void
OBV_Messaging::ExceptionHolder::byte_order (const CORBA::Boolean val)
{
  // Set the value.
  this->_pd_byte_order = val;
}

// Retrieve the member
::CORBA::Boolean
OBV_Messaging::ExceptionHolder::byte_order (void) const
{
  return this->_pd_byte_order;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_valuetype\field_cs.cpp:762

/// Accessor to set the member.
void
OBV_Messaging::ExceptionHolder::marshaled_exception (const CORBA::OctetSeq &val)
{
  this->_pd_marshaled_exception = val;
}

/// Readonly get method.
const CORBA::OctetSeq &
OBV_Messaging::ExceptionHolder::marshaled_exception (void) const
{
  return this->_pd_marshaled_exception;
}

/// Read/write get method.
CORBA::OctetSeq &
OBV_Messaging::ExceptionHolder::marshaled_exception (void)
{
  return this->_pd_marshaled_exception;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_valuetype.cpp:512

void
CORBA::add_ref (Messaging::ExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (Messaging::ExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_remove_ref ();
    }
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_valuetype\cdr_op_cs.cpp:60



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const Messaging::ExceptionHolder *_tao_valuetype)
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuetype,
        reinterpret_cast<ptrdiff_t> (&Messaging::ExceptionHolder::_downcast));
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    Messaging::ExceptionHolder *&_tao_valuetype)
{
  return Messaging::ExceptionHolder::_tao_unmarshal (strm, _tao_valuetype);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_valuetype\marshal_cs.cpp:33

::CORBA::Boolean
OBV_Messaging::ExceptionHolder::_tao_marshal_state (TAO_OutputCDR &strm, TAO_ChunkInfo&ci) const
{
  if (! ci.start_chunk (strm))
    return false;
  
  CORBA::Boolean const ret = 
      (strm << ::ACE_OutputCDR::from_boolean (_pd_is_system_exception)) &&
      (strm << ::ACE_OutputCDR::from_boolean (_pd_byte_order)) &&
      (strm << _pd_marshaled_exception);
  if ( ! ret) 
    return false; 
  
  if (! ci.end_chunk (strm))
    return false;
  
  return true;
}

::CORBA::Boolean
OBV_Messaging::ExceptionHolder::_tao_unmarshal_state (TAO_InputCDR &strm, TAO_ChunkInfo&ci)
{
  if (!ci.handle_chunking (strm))
    return false;
  
  CORBA::Boolean const ret = 
      (strm >> ::ACE_InputCDR::to_boolean (_pd_is_system_exception)) &&
      (strm >> ::ACE_InputCDR::to_boolean (_pd_byte_order)) &&
      (strm >> _pd_marshaled_exception);
  if (!ret) 
    return false; 
  
  if (this->require_truncation_)
    return ci.skip_chunks (strm);
  
  else
    return ci.handle_chunking (strm);
  
  
}

void
OBV_Messaging::ExceptionHolder::truncation_hook (void)
{
  this->require_truncation_ = true;
}




TAO_END_VERSIONED_NAMESPACE_DECL

