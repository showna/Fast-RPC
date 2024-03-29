/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file SequenceTestClientExample.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "SequenceTestProxy.h"
#include "exceptions/Exceptions.h"
#include "SequenceTestRequestReplyPlugin.h"

#include <iostream>

int main(int argc, char **argv)
{
	SequenceTestProxy *proxy = new SequenceTestProxy("SequenceTestService");

	largo l1;
	largo l2;
	largo l3;
	largo getSLong_ret;

	largo_initialize(&l1);
	largo_initialize(&l2);
	largo_initialize(&l3);
	largo_initialize(&getSLong_ret);

	l1.ensure_length(2, 2);
	l1.set_at(0, 1);
	l1.set_at(1, 2);
	l2.ensure_length(2, 2);
	l2.set_at(0, 3);
	l2.set_at(1, 4);

	try
	{
		getSLong_ret = proxy->getSLong(l1, l2, l3);

        if(l3.length() != 2 || l3.get_at(0) != 3 || l3.get_at(1) != 4 ||
                getSLong_ret.length() != 2 || getSLong_ret.get_at(0) != 1 || getSLong_ret.get_at(1) != 2 ||
                l2.length() != 2 || l2.get_at(0) != 4 || l2.get_at(1) != 6 ||
                l1.length() != 2 || l1.get_at(0) != 1 || l1.get_at(1) != 2)
        {
            std::cout << "TEST FAILED<getSLong>: Wrong values " << std::endl;
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::SystemException &ex)
    {
        std::cout << "TEST FAILED<getSLong>: " << ex.what() << std::endl;
        _exit(-1);
    }

	largo_finalize(&l1);    
	largo_finalize(&l2);    
	largo_finalize(&l3);    
	largo_finalize(&getSLong_ret);    

	cadena s1;
	cadena s2;
	cadena s3;
	cadena getString_ret;
	char *cadena;
	char *& ref = cadena;

	cadena_initialize(&s1);    
	cadena_initialize(&s2);    
	cadena_initialize(&s3);    
	cadena_initialize(&getString_ret);

	s1.ensure_length(2, 2);
	cadena = DDS_String_dup("PRUEBA");
	s1.set_at(0, (const char*&)ref);
	cadena = DDS_String_dup("PRUEBA2");
	s1.set_at(1, (const char*&)ref);
	s2.ensure_length(2, 2);
	cadena = DDS_String_dup("PRUEBA3");
	s2.set_at(0, (const char*&)ref);
	cadena = DDS_String_dup("PRUEBA4");
	s2.set_at(1, (const char*&)ref);

    try
    {
        getString_ret = proxy->getString(s1, s2, s3);

        if(s3.length() != 2 || strcmp(s3.get_at(0), "PRUEBA3")  != 0 || strcmp(s3.get_at(1), "PRUEBA4")  != 0 ||
                getString_ret.length() != 2 || strcmp(getString_ret.get_at(0), "PRUEBA")  != 0  || strcmp(getString_ret.get_at(1), "PRUEBA2")  != 0 ||
                s2.length() != 2 || strcmp(s2.get_at(0), "PRUEBA")  != 0  || strcmp(s2.get_at(1), "PRUEBA2")  != 0 ||
                s1.length() != 2 || strcmp(s1.get_at(0), "PRUEBA")  != 0  || strcmp(s1.get_at(1), "PRUEBA2")  != 0)
        {
            std::cout << "TEST FAILED<getString>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::SystemException &ex)
    {
        std::cout << "TEST FAILED<getString>: " << ex.what() << std::endl;
        _exit(-1);
    }

	cadena_finalize(&s1);    
	cadena_finalize(&s2);    
	cadena_finalize(&s3);    
	cadena_finalize(&getString_ret);    

	dattos sb1;       
	dattos sb2;       
	dattos sb3;    
	dattos getStringBounded_ret;

	dattos_initialize(&sb1);
	dattos_initialize(&sb2);
	dattos_initialize(&sb3);
	dattos_initialize(&getStringBounded_ret);

	Datos data;
	sb1.ensure_length(2, 2);
	data.count = 1;
	data.message = DDS_String_dup("PRUEBA");
	sb1.set_at(0, data);
	data.count = 2;
	DDS_String_free(data.message);
	data.message = DDS_String_dup("PRUEBA2");
	sb1.set_at(1, data);
	sb2.ensure_length(2, 2);
	data.count = 3;
	DDS_String_free(data.message);
	data.message = DDS_String_dup("PRUEBA3");
	sb2.set_at(0, data);
	data.count = 4;
	DDS_String_free(data.message);
	data.message = DDS_String_dup("PRUEBA4");
	sb2.set_at(1, data);

    try
    {
        getStringBounded_ret = proxy->getStringBounded(sb1, sb2, sb3);

        if(sb3.length() != 2 || sb3.get_at(0).count != 3 || strcmp(sb3.get_at(0).message, "PRUEBA3")  != 0 || sb3.get_at(1).count != 4 || strcmp(sb3.get_at(1).message, "PRUEBA4")  != 0 ||
                getStringBounded_ret.length() != 2 || getStringBounded_ret.get_at(0).count != 1 || strcmp(getStringBounded_ret.get_at(0).message, "PRUEBA")  != 0  || getStringBounded_ret.get_at(1).count != 2 || strcmp(getStringBounded_ret.get_at(1).message, "PRUEBA2")  != 0 ||
                sb2.length() != 2 || sb2.get_at(0).count != 1 || strcmp(sb2.get_at(0).message, "PRUEBA")  != 0  || sb2.get_at(1).count != 2 || strcmp(sb2.get_at(1).message, "PRUEBA2")  != 0 ||
                sb1.length() != 2 || sb1.get_at(0).count != 1 || strcmp(sb1.get_at(0).message, "PRUEBA")  != 0  || sb1.get_at(1).count != 2 || strcmp(sb1.get_at(1).message, "PRUEBA2")  != 0)
        {
            std::cout << "TEST FAILED<getStringBounded>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::SystemException &ex)
    {
        std::cout << "TEST FAILED<getStringBounded>: " << ex.what() << std::endl;
        _exit(-1);
    }


	dattos_finalize(&sb1);    
	dattos_finalize(&sb2);    
	dattos_finalize(&sb3);    
	dattos_finalize(&getStringBounded_ret);    

    std::cout << "TEST SUCCESFULLY" << std::endl;

	delete(proxy);

	_exit(0);
	return 0;
}
