/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file Client.cxx
 * This source file shows a simple example of how to create a proxy for interface StructTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "StructTestProxy.h"
#include "StructTestRequestReplyTypeSupportImpl.h"
#include "exceptions/Exceptions.h"

#include <iostream>

int main(int argc, char **argv)
{
    StructTestProxy *proxy = NULL;
    
    // Creation of the proxy for interface "StructTest".
    try
    {
        proxy = new StructTestProxy("StructTestService", 0, 30000L);
    }
    catch(eProsima::RPCDDS::InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }

    // Create and initialize parameters.
    Envio ev;

    // Create and initialize return value.
    Recepcion duplicate_ret;

    ev.dato = 10;
    ev.message = strdup("HOLA");

    // Call to remote procedure "duplicate".
    try
    {
        duplicate_ret = proxy->duplicate(ev);

        if(duplicate_ret.devolucion != 10 ||
                strcmp(duplicate_ret.message, "HOLA") != 0 ||
                ev.dato != 10 ||
                strcmp(ev.message, "HOLA") != 0)
        {
            printf("TEST FAILED<duplicate>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<duplicate>: %s\n", ex.what());
        _exit(-1);
    }

    Envio ev1;    
    Envio ev2;       
    Recepcion suma_ret;

    ev1.dato = 10;
    ev1.message = strdup("HOLA");
    ev2.dato = 20;
    ev2.message = strdup("ADIOS");

    try
    {
	    suma_ret = proxy->suma(ev1, ev2);

	    if(suma_ret.devolucion != 30 ||
			    strcmp(suma_ret.message, "HOLAADIOS") != 0 ||
			    ev1.dato != 10 ||
			    strcmp(ev1.message, "HOLA") != 0 ||
			    ev2.dato != 20 ||
			    strcmp(ev2.message, "ADIOS") != 0)
	    {
		    printf("TEST FAILED<suma>: Wrong values\n");
		    _exit(-1);
	    }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
	    printf("TEST FAILED<suma>: %s\n", ex.what());
	    _exit(-1);
    }

    printf("TEST SUCCESFULLY\n");

    delete(proxy);

    _exit(0);
    return 0;
}
