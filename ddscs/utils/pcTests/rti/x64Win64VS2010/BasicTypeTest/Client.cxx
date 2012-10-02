/** 
 * Generated by DDSRPC                                                   *
 * Example client. Method params should be initialized before execution  *
 */

#include "BasicTypeTestProxy.h"
#include "BasicTypeTestRequestReplyPlugin.h"

int main(int argc, char **argv)
{
	BasicTypeTestProxy *proxy = new BasicTypeTestProxy();

	DDS_Octet  oc1 = 1;    
	DDS_Octet  oc2 = 2;    
	DDS_Octet  oc3 = 0;    
	DDS_Octet  getOctet_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getOctetRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        

	getOctetRetValue = proxy->getOctet(oc1  , oc2  , oc3  , getOctet_ret  );

	if(getOctetRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			oc3 != 2 ||
			getOctet_ret != 1 ||
			oc2 != 3 ||
			oc1 != 1)
	{
		printf("TEST FAILED<getOctet>\n");
		_exit(-1);
	}

	DDS_Char  ch1 = 1;       
	DDS_Char  ch2 = 2;       
	DDS_Char  ch3 = 0;    
	DDS_Char  getChar_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getCharRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getCharRetValue = proxy->getChar(ch1  ,ch2  ,ch3  , getChar_ret  );   

	if(getCharRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			ch3 != 2 ||
			getChar_ret != 1 ||
			ch2 != 3 ||
			ch1 != 1)
	{
		printf("TEST FAILED<getChar>\n");
		_exit(-1);
	}

	DDS_Wchar  wch1 = 1;       
	DDS_Wchar  wch2 = 2;       
	DDS_Wchar  wch3 = 0; 
	DDS_Wchar  getWChar_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getWCharRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getWCharRetValue = proxy->getWChar(wch1  ,wch2  ,wch3  , getWChar_ret  );

	if(getWCharRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			wch3 != 2 ||
			getWChar_ret != 1 ||
			wch2 != 3 ||
			wch1 != 1)
	{
		printf("TEST FAILED<getWChar>\n");
		_exit(-1);
	}

	DDS_Short  sh1 = 1;       
	DDS_Short  sh2 = 2;       
	DDS_Short  sh3 = 0;    
	DDS_Short  getShort_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getShortRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getShortRetValue = proxy->getShort(sh1  ,sh2  ,sh3  , getShort_ret  );

	if(getShortRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			sh3 != 2 ||
			getShort_ret != 1 ||
			sh2 != 3 ||
			sh1 != 1)
	{
		printf("TEST FAILED<getShort>\n");
		_exit(-1);
	}

	DDS_UnsignedShort  ush1 = 1;       
	DDS_UnsignedShort  ush2 = 2;       
	DDS_UnsignedShort  ush3 = 0;    
	DDS_UnsignedShort  getUShort_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getUShortRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getUShortRetValue = proxy->getUShort(ush1  ,ush2  ,ush3  , getUShort_ret  );

	if(getUShortRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			ush3 != 2 ||
			getUShort_ret != 1 ||
			ush2 != 3 ||
			ush1 != 1)
	{
		printf("TEST FAILED<getUShort>\n");
		_exit(-1);
	}

	DDS_Long  lo1 = 1;       
	DDS_Long  lo2 = 2;       
	DDS_Long  lo3 = 0;    
	DDS_Long  getLong_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getLongRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getLongRetValue = proxy->getLong(lo1  ,lo2  ,lo3  , getLong_ret  );

	if(getLongRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			lo3 != 2 ||
			getLong_ret != 1 ||
			lo2 != 3 ||
			lo1 != 1)
	{
		printf("TEST FAILED<getLong>\n");
		_exit(-1);
	}

	DDS_UnsignedLong  ulo1 = 1;       
	DDS_UnsignedLong  ulo2 = 2;       
	DDS_UnsignedLong  ulo3 = 0;    
	DDS_UnsignedLong  getULong_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getULongRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getULongRetValue = proxy->getULong(ulo1  ,ulo2  ,ulo3  , getULong_ret  );

	if(getULongRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			ulo3 != 2 ||
			getULong_ret != 1 ||
			ulo2 != 3 ||
			ulo1 != 1)
	{
		printf("TEST FAILED<getULong>\n");
		_exit(-1);
	}

	DDS_LongLong  llo1 = 1;       
	DDS_LongLong  llo2 = 2;       
	DDS_LongLong  llo3 = 0;    
	DDS_LongLong  getLLong_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getLLongRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getLLongRetValue = proxy->getLLong(llo1  ,llo2  ,llo3  , getLLong_ret  );

	if(getLLongRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			llo3 != 2 ||
			getLLong_ret != 1 ||
			llo2 != 3 ||
			llo1 != 1)
	{
		printf("TEST FAILED<getLLong>\n");
		_exit(-1);
	}

	DDS_UnsignedLongLong  ullo1 = 1;       
	DDS_UnsignedLongLong  ullo2 = 2;       
	DDS_UnsignedLongLong  ullo3 = 0;    
	DDS_UnsignedLongLong  getULLong_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getULLongRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getULLongRetValue = proxy->getULLong(ullo1  ,ullo2  ,ullo3  , getULLong_ret  );

	if(getULLongRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			ullo3 != 2 ||
			getULLong_ret != 1 ||
			ullo2 != 3 ||
			ullo1 != 1)
	{
		printf("TEST FAILED<getULLong>\n");
		_exit(-1);
	}

	DDS_Float  fl1 = 1.0;       
	DDS_Float  fl2 = 2.0;       
	DDS_Float  fl3 = 0;    
	DDS_Float  getFloat_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getFloatRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getFloatRetValue = proxy->getFloat(fl1  ,fl2  ,fl3  , getFloat_ret  );

	if(getFloatRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			fl3 != 2.0 ||
			getFloat_ret != 1.0 ||
			fl2 != 3.0 ||
			fl1 != 1.0)
	{
		printf("TEST FAILED<getFloat>\n");
		_exit(-1);
	}

	DDS_Double  do1 = 1.0;       
	DDS_Double  do2 = 2.0;       
	DDS_Double  do3 = 0;    
	DDS_Double  getDouble_ret = 0;       
	eProsima::DDSRPC::ReturnMessage  getDoubleRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getDoubleRetValue = proxy->getDouble(do1  ,do2  ,do3  , getDouble_ret  );

	if(getDoubleRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			do3 != 2.0 ||
			getDouble_ret != 1.0 ||
			do2 != 3.0 ||
			do1 != 1.0)
	{
		printf("TEST FAILED<getDouble>\n");
		_exit(-1);
	}

	DDS_Boolean  bo1 = RTI_TRUE;       
	DDS_Boolean  bo2 = RTI_FALSE;       
	DDS_Boolean  bo3 = RTI_FALSE;    
	DDS_Boolean  getBoolean_ret = RTI_FALSE;       
	eProsima::DDSRPC::ReturnMessage  getBooleanRetValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL ;        

	getBooleanRetValue = proxy->getBoolean(bo1  ,bo2  ,bo3  , getBoolean_ret  );

	if(getBooleanRetValue != eProsima::DDSRPC::OPERATION_SUCCESSFUL ||
			bo3 != RTI_FALSE ||
			getBoolean_ret != RTI_TRUE ||
			bo2 != RTI_TRUE ||
			bo1 != RTI_TRUE)
	{
		printf("TEST FAILED<getBoolean>\n");
		_exit(-1);
	}

	printf("TEST SUCCESFULLY\n");

	delete(proxy);

	_exit(0);
	return 0;
}
