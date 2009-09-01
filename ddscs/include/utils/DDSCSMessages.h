#ifndef _DDSCSMESSAGES_H_
#define _DDSCSMESSAGES_H_

typedef enum DDSCSMessages
{
    CLIENT_ERROR = -2,
    RECEIVED_OTHER_REQUEST,
    SERVER_TIMEOUT,
    SERVER_ERROR,
    WITHOUT_RESOURCES,
    OPERATION_SUCCESSFUL
} DDSCSMessages;

#endif // _DDSCSMESSAGES_H_
