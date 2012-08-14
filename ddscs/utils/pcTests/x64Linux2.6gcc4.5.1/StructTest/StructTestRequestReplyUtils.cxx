/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "StructTestRequestReplyUtils.h"
#include "StructTestRequestReplyPlugin.h"


const char* duplicateRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = duplicateRequestTypeSupport::get_type_name();

        if(duplicateRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

duplicateRequest* duplicateRequestUtils::createTypeData(Envio* ev)
{
    duplicateRequest* instance = duplicateRequestTypeSupport::create_data();

    EnvioPluginSupport_copy_data(&instance->ev, ev);
    
    
    return instance;
}

void duplicateRequestUtils::extractTypeData(duplicateRequest* data , Envio* &ev)
{
    ev = &data->ev;
    
    
}


const char* duplicateReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = duplicateReplyTypeSupport::get_type_name();

        if(duplicateReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

duplicateReply* duplicateReplyUtils::createTypeData(Recepcion*& returnedValue)
{
    duplicateReply* instance = duplicateReplyTypeSupport::create_data();

    
    RecepcionPluginSupport_copy_data(&instance->returnedValue, returnedValue);            
    return instance;
}

void duplicateReplyUtils::extractTypeData(duplicateReply* data , Recepcion*& returnedValue)
{
    
    RecepcionPluginSupport_copy_data(returnedValue, &data->returnedValue);            
}


const char* sumaRequestUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = sumaRequestTypeSupport::get_type_name();

        if(sumaRequestTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

sumaRequest* sumaRequestUtils::createTypeData(Envio* ev1, Envio* ev2)
{
    sumaRequest* instance = sumaRequestTypeSupport::create_data();

    EnvioPluginSupport_copy_data(&instance->ev1, ev1);
    EnvioPluginSupport_copy_data(&instance->ev2, ev2);
    
    
    return instance;
}

void sumaRequestUtils::extractTypeData(sumaRequest* data , Envio* &ev1, Envio* &ev2)
{
    ev1 = &data->ev1;
    ev2 = &data->ev2;
    
    
}


const char* sumaReplyUtils::registerType(DDS::DomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = sumaReplyTypeSupport::get_type_name();

        if(sumaReplyTypeSupport::register_type(clientParticipant, typeName) != DDS::RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

sumaReply* sumaReplyUtils::createTypeData(Recepcion*& returnedValue)
{
    sumaReply* instance = sumaReplyTypeSupport::create_data();

    
    RecepcionPluginSupport_copy_data(&instance->returnedValue, returnedValue);            
    return instance;
}

void sumaReplyUtils::extractTypeData(sumaReply* data , Recepcion*& returnedValue)
{
    
    RecepcionPluginSupport_copy_data(returnedValue, &data->returnedValue);            
}

 