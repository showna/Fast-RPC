/** 
 * Generated by DDSRPC                                                   *
 * Example client. Method params should be initialized before execution  *
 */

#include "BasicTypeTestProxy.h"
#include "BasicTypeTestRequestReplyPlugin.h"

int main()
{
    int domainId = 0;
    unsigned int timeoutInMillis = 4000;
    BasicTypeTestProxy *proxy = new BasicTypeTestProxy(domainId, timeoutInMillis);
    DDS_Duration_t period = {5,0};
    
    DDS_Octet  oc1 = 1;       
    DDS_Octet  oc2 = 2;       
    DDS_Octet  oc3 ;    
    DDS_Octet  getOctet_ret ;       
    eProsima::DDSRPC::ReturnMessage  getOctetRetValue ;        

    getOctetRetValue = proxy->getOctet(oc1  ,oc2  ,oc3  , getOctet_ret  );
    
	if(getOctetRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		oc3 != 2 ||
		getOctet_ret != 1 ||
		oc2 != 3 ||
		oc1 != 1)
	{
		printf("TEST FAILED<getOctet>");
		_exit(-1);
	}

    DDS_Char  ch1 = 1;       
    DDS_Char  ch2 = 2;       
    DDS_Char  ch3 ;    
    DDS_Char  getChar_ret ;       
    eProsima::DDSRPC::ReturnMessage  getCharRetValue ;        

    getCharRetValue = proxy->getChar(ch1  ,ch2  ,ch3  , getChar_ret  );   

	if(getCharRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		ch3 != 2 ||
		getChar_ret != 1 ||
		ch2 != 3 ||
		ch1 != 1)
	{
		printf("TEST FAILED<getChar>");
		_exit(-1);
	}
        
    DDS_Wchar  wch1 = 1;       
    DDS_Wchar  wch2 = 2;       
    DDS_Wchar  wch3 ;    
    DDS_Wchar  getWChar_ret ;       
    eProsima::DDSRPC::ReturnMessage  getWCharRetValue ;        

    getWCharRetValue = proxy->getWChar(wch1  ,wch2  ,wch3  , getWChar_ret  );
    
	if(getWCharRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		wch3 != 2 ||
		getWChar_ret != 1 ||
		wch2 != 3 ||
		wch1 != 1)
	{
		printf("TEST FAILED<getWChar>");
		_exit(-1);
	}

    DDS_Short  sh1 = 1;       
    DDS_Short  sh2 = 2;       
    DDS_Short  sh3 ;    
    DDS_Short  getShort_ret ;       
    eProsima::DDSRPC::ReturnMessage  getShortRetValue ;        

    getShortRetValue = proxy->getShort(sh1  ,sh2  ,sh3  , getShort_ret  );
    
	if(getShortRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		sh3 != 2 ||
		getShort_ret != 1 ||
		sh2 != 3 ||
		sh1 != 1)
	{
		printf("TEST FAILED<getShort>");
		_exit(-1);
	}

    DDS_UnsignedShort  ush1 = 1;       
    DDS_UnsignedShort  ush2 = 2;       
    DDS_UnsignedShort  ush3 ;    
    DDS_UnsignedShort  getUShort_ret ;       
    eProsima::DDSRPC::ReturnMessage  getUShortRetValue ;        

    getUShortRetValue = proxy->getUShort(ush1  ,ush2  ,ush3  , getUShort_ret  );
    
	if(getUShortRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		ush3 != 2 ||
		getUShort_ret != 1 ||
		ush2 != 3 ||
		ush1 != 1)
	{
		printf("TEST FAILED<getUShort>");
		_exit(-1);
	}

    DDS_Long  lo1 = 1;       
    DDS_Long  lo2 = 2;       
    DDS_Long  lo3 ;    
    DDS_Long  getLong_ret ;       
    eProsima::DDSRPC::ReturnMessage  getLongRetValue ;        

    getLongRetValue = proxy->getLong(lo1  ,lo2  ,lo3  , getLong_ret  );
    
	if(getLongRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		lo3 != 2 ||
		getLong_ret != 1 ||
		lo2 != 3 ||
		lo1 != 1)
	{
		printf("TEST FAILED<getLong>");
		_exit(-1);
	}

    DDS_UnsignedLong  ulo1 = 1;       
    DDS_UnsignedLong  ulo2 = 2;       
    DDS_UnsignedLong  ulo3 ;    
    DDS_UnsignedLong  getULong_ret ;       
    eProsima::DDSRPC::ReturnMessage  getULongRetValue ;        

    getULongRetValue = proxy->getULong(ulo1  ,ulo2  ,ulo3  , getULong_ret  );
    
	if(getULongRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		ulo3 != 2 ||
		getULong_ret != 1 ||
		ulo2 != 3 ||
		ulo1 != 1)
	{
		printf("TEST FAILED<getULong>");
		_exit(-1);
	}

    DDS_LongLong  llo1 = 1;       
    DDS_LongLong  llo2 = 2;       
    DDS_LongLong  llo3 ;    
    DDS_LongLong  getLLong_ret ;       
    eProsima::DDSRPC::ReturnMessage  getLLongRetValue ;        

    getLLongRetValue = proxy->getLLong(llo1  ,llo2  ,llo3  , getLLong_ret  );
    
	if(getLLongRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		llo3 != 2 ||
		getLLong_ret != 1 ||
		llo2 != 3 ||
		llo1 != 1)
	{
		printf("TEST FAILED<getLLong>");
		_exit(-1);
	}

    DDS_UnsignedLongLong  ullo1 = 1;       
    DDS_UnsignedLongLong  ullo2 = 2;       
    DDS_UnsignedLongLong  ullo3 ;    
    DDS_UnsignedLongLong  getULLong_ret ;       
    eProsima::DDSRPC::ReturnMessage  getULLongRetValue ;        

    getULLongRetValue = proxy->getULLong(ullo1  ,ullo2  ,ullo3  , getULLong_ret  );
    
	if(getULLongRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		ullo3 != 2 ||
		getULLong_ret != 1 ||
		ullo2 != 3 ||
		ullo1 != 1)
	{
		printf("TEST FAILED<getULLong>");
		_exit(-1);
	}

    DDS_Float  fl1 = 1.0;       
    DDS_Float  fl2 = 2.0;       
    DDS_Float  fl3 ;    
    DDS_Float  getFloat_ret ;       
    eProsima::DDSRPC::ReturnMessage  getFloatRetValue ;        

    getFloatRetValue = proxy->getFloat(fl1  ,fl2  ,fl3  , getFloat_ret  );
    
	if(getFloatRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		fl3 != 2.0 ||
		getFloat_ret != 1.0 ||
		fl2 != 3.0 ||
		fl1 != 1.0)
	{
		printf("TEST FAILED<getFloat>");
		_exit(-1);
	}

    DDS_Double  do1 = 1.0;       
    DDS_Double  do2 = 2.0;       
    DDS_Double  do3 ;    
    DDS_Double  getDouble_ret ;       
    eProsima::DDSRPC::ReturnMessage  getDoubleRetValue ;        

    getDoubleRetValue = proxy->getDouble(do1  ,do2  ,do3  , getDouble_ret  );
    
	if(getDoubleRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		do3 != 2.0 ||
		getDouble_ret != 1.0 ||
		do2 != 3.0 ||
		do1 != 1.0)
	{
		printf("TEST FAILED<getDouble>");
		_exit(-1);
	}

    DDS_Boolean  bo1 = RTI_TRUE;       
    DDS_Boolean  bo2 = RTI_FALSE;       
    DDS_Boolean  bo3 ;    
    DDS_Boolean  getBoolean_ret ;       
    eProsima::DDSRPC::ReturnMessage  getBooleanRetValue ;        

    getBooleanRetValue = proxy->getBoolean(bo1  ,bo2  ,bo3  , getBoolean_ret  );
    
	if(getBooleanRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
		bo3 != RTI_FALSE ||
		getBoolean_ret != RTI_TRUE ||
		bo2 != RTI_TRUE ||
		bo1 != RTI_TRUE)
	{
		printf("TEST FAILED<getBoolean>");
		_exit(-1);
	}
      
	printf("TEST SUCCESFULLY");
        
   delete(proxy);
   
   _exit(0);
}
