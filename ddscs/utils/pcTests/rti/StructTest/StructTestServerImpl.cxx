/** 
 * Generated by RPCDDS                                              *
 * Empty interface implementation to be filled with your own code.  *
 */
 
#include "StructTestServerImpl.h"
 
Recepcion StructTestServerImpl::duplicate(/*in*/ const Envio& ev) 
{
    Recepcion duplicate_ret;
        
	duplicate_ret.devolucion = ev.dato;
	duplicate_ret.message = DDS::String_dup(ev.message);
   
    return duplicate_ret;
} 
 
Recepcion StructTestServerImpl::suma(/*in*/ const Envio& ev1, /*in*/ const Envio& ev2) 
{
    Recepcion suma_ret;
        
	suma_ret.devolucion = ev1.dato + ev2.dato;
	suma_ret.message = DDS::String_alloc(strlen(ev1.message) + strlen(ev2.message) + 1);
#if defined(RTI_WIN32)
	_snprintf(suma_ret.message, strlen(ev1.message) + strlen(ev2.message) + 1, "%s%s", ev1.message, ev2.message);
#elif defined(RTI_LINUX)
	snprintf(suma_ret.message, strlen(ev1.message) + strlen(ev2.message) + 1, "%s%s", ev1.message, ev2.message);
#endif
   
    return suma_ret;
} 
