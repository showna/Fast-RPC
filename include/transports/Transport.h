/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_TRANSPORT_H_
#define _TRANSPORTS_TRANSPORT_H_

#include "rpcdds_dll.h"
#include "utils/Middleware.h"

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * @brief This class is the base of all classes that implement a transport
		 *        that could be used by the client or the server.
         * @ingroup TRANSPORTMODULE
		 */
        class RPCDDS_DllAPI Transport
        {
            public:

				/// \brief Default constructor.
                Transport(){}

				/// \brief Default destructor.
                virtual ~Transport(){}
                
				/**
				 * \brief This function sets the QoS of DDS to use the transport that this class implements.
				 *        This function has to be implemented by the derived classes.
				 *
				 * \param participantQos Reference to the DDS domain participant QoS.
				 */
                virtual int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant) = 0;
        };
    } // namespace RPCDDS
} // namespace eProsima
#endif // _TRANSPORTS_TRANSPORT_H_
