/** 
 * Generated by RPCDDS                                              *
 * Empty interface implementation to be filled with your own code.  *
 */
 
#include "OnewayCallTestServerImpl.h"

static DDS_Long l = 0;
static DDS_Boolean b = RTI_FALSE;
static char *s = NULL;
static Structure st;
 
void OnewayCallTestServerImpl::setLong(/*in*/ DDS_Long lo1) 
{
	l = lo1;
} 
 
DDS_Long OnewayCallTestServerImpl::getLong() 
{
    return l;
} 
 
void OnewayCallTestServerImpl::setBoolean(/*in*/ DDS_Boolean bo1) 
{
    b = bo1;
} 
 
DDS_Boolean OnewayCallTestServerImpl::getBoolean() 
{
    return b;
} 
 
void OnewayCallTestServerImpl::setString(/*in*/ char* s1) 
{
    s = strdup(s1);
} 
 
char* OnewayCallTestServerImpl::getString() 
{
    return s;
} 
 
void OnewayCallTestServerImpl::setStruct(/*in*/ const Structure& ev) 
{
    st.dato = ev.dato;
    st.message = strdup(ev.message);
} 
 
Structure OnewayCallTestServerImpl::getStruct() 
{
    return st;
} 
