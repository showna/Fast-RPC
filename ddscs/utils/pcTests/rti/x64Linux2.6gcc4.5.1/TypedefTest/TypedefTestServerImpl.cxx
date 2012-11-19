/** 
 * Generated by RPCDDS                                              *
 * Empty interface implementation to be filled with your own code.  *
 */

#include "TypedefTestServerImpl.h"

largo TypedefTestServerImpl::getLargo(/*in*/ largo l1, /*out*/ largo& l2) 
{
    largo  getLargo_ret = 0;    

    getLargo_ret = l1;
    l2 = l1;

    return getLargo_ret;
} 

larguisimo TypedefTestServerImpl::getLarguisimo(/*in*/ larguisimo ll1, /*out*/ larguisimo& ll2) 
{
    larguisimo  getLarguisimo_ret = 0;    

    getLarguisimo_ret = ll1;
    ll2 = ll1;

    return getLarguisimo_ret;
} 

DatosDef TypedefTestServerImpl::getDatosDef(/*in*/ const DatosDef& d1, /*out*/ DatosDef& d2) 
{
    DatosDef getDatosDef_ret;

    getDatosDef_ret.count = d1.count;
    d2.count = d1.count;
    getDatosDef_ret.message = DDS::String_dup(d1.message);
    d2.message = DDS::String_dup(d1.message);

    return getDatosDef_ret;
} 

DatosDefondo TypedefTestServerImpl::getDatosDefondo(/*in*/ const DatosDefondo& dd1, /*out*/ DatosDefondo& dd2) 
{
    DatosDefondo getDatosDefondo_ret;

    getDatosDefondo_ret.count = dd1.count;
    dd2.count = dd1.count;
    getDatosDefondo_ret.message = DDS::String_dup(dd1.message);
    dd2.message = DDS::String_dup(dd1.message);

    return getDatosDefondo_ret;
} 

cadena TypedefTestServerImpl::getCadena(/*in*/ cadena c1, /*out*/ cadena& c2) 
{
    cadena  getCadena_ret = NULL;    

    getCadena_ret = DDS::String_dup(c1);
    c2 = DDS::String_dup(c1);
    return getCadena_ret;
} 

correa TypedefTestServerImpl::getCorrea(/*in*/ correa cc1, /*out*/ correa& cc2) 
{
    correa  getCorrea_ret = NULL;    

    getCorrea_ret = DDS::String_dup(cc1);
    cc2 = DDS::String_dup(cc1);

    return getCorrea_ret;
} 
