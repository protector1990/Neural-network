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


#include "OctetSeqC.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:105

#if !defined (_CORBA_OCTETSEQ_CS_)
#define _CORBA_OCTETSEQ_CS_

CORBA::OctetSeq::OctetSeq (void)
{}

CORBA::OctetSeq::OctetSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< ::CORBA::Octet> (max)
{}

CORBA::OctetSeq::OctetSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Octet * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_value_sequence< ::CORBA::Octet>
    (max, length, buffer, release)
{}

CORBA::OctetSeq::OctetSeq (
    const OctetSeq &seq)
  : ::TAO::unbounded_value_sequence< ::CORBA::Octet> (seq)
{}

CORBA::OctetSeq::~OctetSeq (void)
{}

void CORBA::OctetSeq::_tao_any_destructor (
    void * _tao_void_pointer)
{
  OctetSeq * _tao_tmp_pointer =
    static_cast<OctetSeq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_CORBA_OctetSeq_CPP_
#define _TAO_CDR_OP_CORBA_OctetSeq_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::OctetSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::OctetSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_CORBA_OctetSeq_CPP_ */


TAO_END_VERSIONED_NAMESPACE_DECL

