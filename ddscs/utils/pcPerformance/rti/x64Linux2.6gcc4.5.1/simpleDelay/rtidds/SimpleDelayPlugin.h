
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SimpleDelay.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SimpleDelayPlugin_1048391384_h
#define SimpleDelayPlugin_1048391384_h

#include "SimpleDelay.h"




struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


#ifdef __cplusplus
extern "C" {
#endif

#define Estructura_LAST_MEMBER_ID 0

#define EstructuraPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EstructuraPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EstructuraPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EstructuraPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EstructuraPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EstructuraPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Estructura*
EstructuraPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Estructura*
EstructuraPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EstructuraPluginSupport_copy_data(
    Estructura *out,
    const Estructura *in);

NDDSUSERDllExport extern void 
EstructuraPluginSupport_destroy_data_ex(
    Estructura *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EstructuraPluginSupport_destroy_data(
    Estructura *sample);

NDDSUSERDllExport extern void 
EstructuraPluginSupport_print_data(
    const Estructura *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EstructuraPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EstructuraPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EstructuraPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EstructuraPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
EstructuraPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Estructura *out,
    const Estructura *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EstructuraPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Estructura *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EstructuraPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Estructura *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EstructuraPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Estructura **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EstructuraPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EstructuraPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EstructuraPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EstructuraPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Estructura * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EstructuraPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EstructuraPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EstructuraPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Estructura *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EstructuraPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Estructura * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EstructuraPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Estructura ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EstructuraPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Estructura *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EstructuraPlugin_new(void);

NDDSUSERDllExport extern void
EstructuraPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SimpleDelayPlugin_1048391384_h */
