/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file StructTestClientExample.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "StructTestProxy.h"
#include "exceptions/Exceptions.h"
#include "StructTestRequestReplyPlugin.h"

#include <iostream>

int main(int argc, char **argv)
{
    StructTestProxy *proxy = new StructTestProxy("StructTestService");
    
    Envio ev;
    Recepcion duplicate_ret;

	Envio_initialize(&ev);    
    Recepcion_initialize(&duplicate_ret);    
        
    ev.dato = 10;
    ev.message = DDS_String_dup("HOLA");

    try
    {
        duplicate_ret = proxy->duplicate(ev);

        if(duplicate_ret.devolucion != 10 ||
                strcmp(duplicate_ret.message, "HOLA") != 0 ||
                ev.dato != 10 ||
                strcmp(ev.message, "HOLA") != 0)
        {
            std::cout << "TEST FAILED<duplicate>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::SystemException &ex)
    {
        std::cout << "TEST FAILED<duplicate>: " << ex.what() << std::endl;
        _exit(-1);
    }

    Envio_finalize(&ev);    
    Recepcion_finalize(&duplicate_ret);    

	Envio ev1;    
	Envio ev2;       
	Recepcion suma_ret;

	Envio_initialize(&ev1);    
	Envio_initialize(&ev2);    
	Recepcion_initialize(&suma_ret);  

	ev1.dato = 10;
	ev1.message = DDS_String_dup("HOLA");
	ev2.dato = 20;
	ev2.message = DDS_String_dup("ADIOS");

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
            std::cout << "TEST FAILED<suma>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::SystemException &ex)
    {
        std::cout << "TEST FAILED<suma>: " << ex.what() << std::endl;
        _exit(-1);
    }

	Envio_finalize(&ev1);    
	Envio_finalize(&ev2);    
	Recepcion_finalize(&suma_ret);    

    std::cout << "TEST SUCCESFULLY" << std::endl;

	delete(proxy);

	_exit(0);
	return 0;
}
