/** 
 * Generated by DDSRPC                                              *
 * Empty interface implementation to be filled with your own code.  *
 */
 
#include "MultithreadTestServerImpl.h"

MultithreadTestServerImpl::MultithreadTestServerImpl()
{
}
MultithreadTestServerImpl::~MultithreadTestServerImpl()
{
}

 
DDS_Long MultithreadTestServerImpl::test(/*in*/ const Dato& dato1, /*out*/ Dato& dato2) 
{
    DDS_Long returnedValue;
        
    dato2.count = dato1.count;
	Dato_initialize(&dato2);
    _snprintf(dato2.message, 255, "%s", dato1.message);
    returnedValue = 0;
   
    return returnedValue;
} 
