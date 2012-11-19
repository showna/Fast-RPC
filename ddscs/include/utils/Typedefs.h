#ifndef _UTILS_TYPEDEFS_H_
#define _UTILS_TYPEDEFS_H_

namespace eProsima
{
	namespace RPCDDS
	{
#define DDS_TIMEOUT(name, duration) DDS::Duration_t name = {duration.total_seconds(), \
    static_cast<RTI_UINT32>(duration.fractional_seconds() * (1000000000 / boost::posix_time::time_duration::traits_type::res_adjust()))};

#define DDS_TIMEOUT_SET(name, duration) name.sec = duration.total_seconds(); \
        name.nanosec = static_cast<RTI_UINT32>(duration.fractional_seconds() * (1000000000 / boost::posix_time::time_duration::traits_type::res_adjust()));


		class ServerRPC;
		class Server;

		typedef void(*fExecFunction)(Server*, void*, ServerRPC*);

		typedef void (*fDeleteRequestData)(void*);

		typedef void* (*fCreateRequestData)();

		typedef void (*fDeleteReplyData)(void*);

		typedef void* (*fCreateReplyData)();

	} // namespace RPCDDS
} // namespace eProsima

#endif // _UTILS_TYPEDEFS_H_
