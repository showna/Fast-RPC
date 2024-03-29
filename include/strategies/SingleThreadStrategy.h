/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_SINGLETHREADSTRATEGY_H_
#define _STRATEGIES_SINGLETHREADSTRATEGY_H_

#include "server/ServerStrategy.h"
#include "rpcdds_dll.h"

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * @brief This class implements the sigle thread strategy.
		 *        The server uses the reception thread of RTI DDS to execute the request.
         * @ingroup STRATEGIESMODULE 
		 */
        class RPCDDS_DllAPI SingleThreadStrategy : public ServerStrategy
        {
            public:

				/// \brief Default constructor.
				SingleThreadStrategy(){};

				/// \brief Default destructor.
				virtual ~SingleThreadStrategy(){};

				/**
				 * \brief This function execute directly the request.
				 *
				 * \param execFunction Function that has to be call when the request will be processed.
				 * \param data The request. Cannot be NULL.
				 * \param server A pointer to the server. Cannot be NULL.
				 * \param service A pointer to the remote procedure service. Cannot be NULL.
				 */
                virtual void schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service);
        };
    } // namespace RPCDDS
} //namespace eProsima

#endif // _STRATEGIES_SINGLETHREADSTRATEGY_H_
