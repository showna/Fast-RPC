package com.eprosima.rpcdds.exceptions;

public class BadArgumentException extends Exception
{
    public BadArgumentException()
    {
        super();
    }
    
    public BadArgumentException(String message)
    {
        super(message);
    }
}