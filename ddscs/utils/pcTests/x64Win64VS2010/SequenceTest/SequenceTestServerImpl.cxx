/** 
 * Generated by DDSRPC                                              *
 * Empty interface implementation to be filled with your own code.  *
 */
 
#include "SequenceTestServerImpl.h"

SequenceTestImpl::SequenceTestImpl()
{
}
SequenceTestImpl::~SequenceTestImpl()
{
}

 
eProsima::DDSRPC::ReturnMessage
 SequenceTestImpl::getSLong(largo* l1 ,largo* &l2,largo* &l3, largo* &getSLong_ret) 
{
  eProsima::DDSRPC::ReturnMessage retCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;

  l3->ensure_length(2, 2);
  (*l3)[0] = (*l2)[0];
  (*l3)[1] = (*l2)[1];
  getSLong_ret->ensure_length(2, 2);
  (*getSLong_ret)[0] = (*l1)[0];
  (*getSLong_ret)[1] = (*l1)[1];
  (*l2)[0] = (*l1)[0] + (*l2)[0];
  (*l2)[1] = (*l1)[1] + (*l2)[1];
  
  return retCode;
} 
 
eProsima::DDSRPC::ReturnMessage
 SequenceTestImpl::getString(cadena* s1 ,cadena* &s2,cadena* &s3, cadena* &getString_ret) 
{
  eProsima::DDSRPC::ReturnMessage retCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;

  s3->ensure_length(2, 2);
  (*s3)[0] = DDS_String_dup((*s2)[0]);
  (*s3)[1] = DDS_String_dup((*s2)[1]);
  getString_ret->ensure_length(2, 2);
  (*getString_ret)[0] = DDS_String_dup((*s1)[0]);
  (*getString_ret)[1] = DDS_String_dup((*s1)[1]);
  DDS_String_free((*s2)[0]);
  DDS_String_free((*s2)[1]);
  (*s2)[0] = DDS_String_dup((*s1)[0]);
  (*s2)[1] = DDS_String_dup((*s1)[1]);
  
  return retCode;
} 
 
eProsima::DDSRPC::ReturnMessage
 SequenceTestImpl::getStringBounded(dattos* sb1 ,dattos* &sb2,dattos* &sb3, dattos* &getStringBounded_ret) 
{
  eProsima::DDSRPC::ReturnMessage retCode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;

  sb3->ensure_length(2, 2);
  (*sb3)[0].count = (*sb2)[0].count;
  (*sb3)[0].message = DDS_String_dup((*sb2)[0].message);
  (*sb3)[1].count = (*sb2)[1].count;
  (*sb3)[1].message = DDS_String_dup((*sb2)[1].message);
  getStringBounded_ret->ensure_length(2, 2);
  (*getStringBounded_ret)[0].count = (*sb1)[0].count;
  (*getStringBounded_ret)[0].message = DDS_String_dup((*sb1)[0].message);
  (*getStringBounded_ret)[1].count = (*sb1)[1].count;
  (*getStringBounded_ret)[1].message = DDS_String_dup((*sb1)[1].message);
  (*sb2)[0].count = (*sb1)[0].count;
  DDS_String_free((*sb2)[0].message);
  (*sb2)[0].message = DDS_String_dup((*sb1)[0].message);
  (*sb2)[1].count = (*sb1)[1].count;
  DDS_String_free((*sb2)[1].message);
  (*sb2)[1].message = DDS_String_dup((*sb1)[1].message);
  
  return retCode;
} 
