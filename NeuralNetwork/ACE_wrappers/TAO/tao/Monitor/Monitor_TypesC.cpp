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


#include "tao/Monitor/Monitor.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "Monitor_TypesC.inl"
#endif /* !defined INLINE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_cs.cpp:56

void
Monitor::DataValue::_tao_any_destructor (
    void *_tao_void_pointer)
{
  DataValue *_tao_tmp_pointer =
    static_cast<DataValue *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:105

#if !defined (_MONITOR_DATAVALUELIST_CS_)
#define _MONITOR_DATAVALUELIST_CS_

Monitor::DataValueList::DataValueList (void)
{}

Monitor::DataValueList::DataValueList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< DataValue> (max)
{}

Monitor::DataValueList::DataValueList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Monitor::DataValue * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_value_sequence< DataValue>
    (max, length, buffer, release)
{}

Monitor::DataValueList::DataValueList (
    const DataValueList &seq)
  : ::TAO::unbounded_value_sequence< DataValue> (seq)
{}

Monitor::DataValueList::~DataValueList (void)
{}

void Monitor::DataValueList::_tao_any_destructor (
    void * _tao_void_pointer)
{
  DataValueList * _tao_tmp_pointer =
    static_cast<DataValueList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_cs.cpp:56

void
Monitor::Numeric::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Numeric *_tao_tmp_pointer =
    static_cast<Numeric *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\union_cs.cpp:76

Monitor::UData::UData (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = (Monitor::DataType) -1;
}

Monitor::UData::UData (const ::Monitor::UData &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case Monitor::DATA_NUMERIC:
    {
      if (u.u_.num_ == 0)
        {
          this->u_.num_ = 0;
        }
      else
        {
          ACE_NEW (
              this->u_.num_,
              Monitor::Numeric (*u.u_.num_)
            );
        }
    }
    break;
    case Monitor::DATA_TEXT:
    {
      if (u.u_.list_ == 0)
        {
          this->u_.list_ = 0;
        }
      else
        {
          ACE_NEW (
              this->u_.list_,
              Monitor::NameList (*u.u_.list_)
            );
        }
    }
    break;
    default:
    break;
  }
}

Monitor::UData::~UData (void)
{
  // Finalize.
  this->_reset ();
}

void Monitor::UData::_tao_any_destructor (void *_tao_void_pointer)
{
  UData *tmp =
    static_cast<UData *> (_tao_void_pointer);
  delete tmp;
}

Monitor::UData &
Monitor::UData::operator= (const ::Monitor::UData &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case Monitor::DATA_NUMERIC:
    {
      if (u.u_.num_ == 0)
        {
          this->u_.num_ = 0;
        }
      else
        {
          ACE_NEW_RETURN (
              this->u_.num_,
              Monitor::Numeric (*u.u_.num_),
              *this
            );
        }
    }
    break;
    case Monitor::DATA_TEXT:
    {
      if (u.u_.list_ == 0)
        {
          this->u_.list_ = 0;
        }
      else
        {
          ACE_NEW_RETURN (
              this->u_.list_,
              Monitor::NameList (*u.u_.list_),
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
void Monitor::UData::_reset (void)
{
  switch (this->disc_)
  {
    
    case Monitor::DATA_NUMERIC:
      delete this->u_.num_;
      this->u_.num_ = 0;
      
    break;
    
    case Monitor::DATA_TEXT:
      delete this->u_.list_;
      this->u_.list_ = 0;
      
    break;
    
    default:
    break;
  }
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_cs.cpp:56

void
Monitor::Data::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Data *_tao_tmp_pointer =
    static_cast<Data *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:105

#if !defined (_MONITOR_DATALIST_CS_)
#define _MONITOR_DATALIST_CS_

Monitor::DataList::DataList (void)
{}

Monitor::DataList::DataList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< Data> (max)
{}

Monitor::DataList::DataList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Monitor::Data * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_value_sequence< Data>
    (max, length, buffer, release)
{}

Monitor::DataList::DataList (
    const DataList &seq)
  : ::TAO::unbounded_value_sequence< Data> (seq)
{}

Monitor::DataList::~DataList (void)
{}

void Monitor::DataList::_tao_any_destructor (
    void * _tao_void_pointer)
{
  DataList * _tao_tmp_pointer =
    static_cast<DataList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:105

#if !defined (_MONITOR_CONSTRAINTIDLIST_CS_)
#define _MONITOR_CONSTRAINTIDLIST_CS_

Monitor::ConstraintIdList::ConstraintIdList (void)
{}

Monitor::ConstraintIdList::ConstraintIdList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< ConstraintId> (max)
{}

Monitor::ConstraintIdList::ConstraintIdList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Long * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_value_sequence< ConstraintId>
    (max, length, buffer, release)
{}

Monitor::ConstraintIdList::ConstraintIdList (
    const ConstraintIdList &seq)
  : ::TAO::unbounded_value_sequence< ConstraintId> (seq)
{}

Monitor::ConstraintIdList::~ConstraintIdList (void)
{}

void Monitor::ConstraintIdList::_tao_any_destructor (
    void * _tao_void_pointer)
{
  ConstraintIdList * _tao_tmp_pointer =
    static_cast<ConstraintIdList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_cs.cpp:56

void
Monitor::ConstraintStruct::_tao_any_destructor (
    void *_tao_void_pointer)
{
  ConstraintStruct *_tao_tmp_pointer =
    static_cast<ConstraintStruct *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_cs.cpp:105

#if !defined (_MONITOR_CONSTRAINTSTRUCTLIST_CS_)
#define _MONITOR_CONSTRAINTSTRUCTLIST_CS_

Monitor::ConstraintStructList::ConstraintStructList (void)
{}

Monitor::ConstraintStructList::ConstraintStructList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< ConstraintStruct> (max)
{}

Monitor::ConstraintStructList::ConstraintStructList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Monitor::ConstraintStruct * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_value_sequence< ConstraintStruct>
    (max, length, buffer, release)
{}

Monitor::ConstraintStructList::ConstraintStructList (
    const ConstraintStructList &seq)
  : ::TAO::unbounded_value_sequence< ConstraintStruct> (seq)
{}

Monitor::ConstraintStructList::~ConstraintStructList (void)
{}

void Monitor::ConstraintStructList::_tao_any_destructor (
    void * _tao_void_pointer)
{
  ConstraintStructList * _tao_tmp_pointer =
    static_cast<ConstraintStructList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:49


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Monitor::DataValue &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.timestamp) &&
    (strm << _tao_aggregate.value);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Monitor::DataValue &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.timestamp) &&
    (strm >> _tao_aggregate.value);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Monitor_DataValueList_CPP_
#define _TAO_CDR_OP_Monitor_DataValueList_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Monitor::DataValueList &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Monitor::DataValueList &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_Monitor_DataValueList_CPP_ */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:49


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Monitor::Numeric &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.dlist) &&
    (strm << _tao_aggregate.count) &&
    (strm << _tao_aggregate.average) &&
    (strm << _tao_aggregate.sum_of_squares) &&
    (strm << _tao_aggregate.minimum) &&
    (strm << _tao_aggregate.maximum) &&
    (strm << _tao_aggregate.last);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Monitor::Numeric &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.dlist) &&
    (strm >> _tao_aggregate.count) &&
    (strm >> _tao_aggregate.average) &&
    (strm >> _tao_aggregate.sum_of_squares) &&
    (strm >> _tao_aggregate.minimum) &&
    (strm >> _tao_aggregate.maximum) &&
    (strm >> _tao_aggregate.last);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_enum\cdr_op_cs.cpp:34



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, Monitor::DataType _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, Monitor::DataType & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<Monitor::DataType> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_union\cdr_op_cs.cpp:74



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Monitor::UData &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case Monitor::DATA_NUMERIC:
      {
        result = strm << _tao_union.num ();
      }
      break;
    case Monitor::DATA_TEXT:
      {
        result = strm << _tao_union.list ();
      }
      break;
    default:
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Monitor::UData &_tao_union
  )
{
  Monitor::DataType _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case Monitor::DATA_NUMERIC:
      {
        Monitor::Numeric _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.num (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case Monitor::DATA_TEXT:
      {
        Monitor::NameList _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.list (_tao_union_tmp);
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
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:49


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Monitor::Data &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.itemname.in ()) &&
    (strm << _tao_aggregate.data_union);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Monitor::Data &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.itemname.out ()) &&
    (strm >> _tao_aggregate.data_union);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Monitor_DataList_CPP_
#define _TAO_CDR_OP_Monitor_DataList_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Monitor::DataList &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Monitor::DataList &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_Monitor_DataList_CPP_ */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Monitor_ConstraintIdList_CPP_
#define _TAO_CDR_OP_Monitor_ConstraintIdList_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Monitor::ConstraintIdList &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Monitor::ConstraintIdList &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_Monitor_ConstraintIdList_CPP_ */

// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:49


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Monitor::ConstraintStruct &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.itemname.in ()) &&
    (strm << _tao_aggregate.id);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Monitor::ConstraintStruct &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.itemname.out ()) &&
    (strm >> _tao_aggregate.id);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\private\datascience\neuralna_mreza\neuralnetwork\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Monitor_ConstraintStructList_CPP_
#define _TAO_CDR_OP_Monitor_ConstraintStructList_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Monitor::ConstraintStructList &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Monitor::ConstraintStructList &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_Monitor_ConstraintStructList_CPP_ */


TAO_END_VERSIONED_NAMESPACE_DECL

