/*
 * THIS FILE IS AUTOMATICALLY GENERATED. DO NOT EDIT.
 * Created by: /Users/andrewm/develop/modelstocode/mtc_source/tools/macosx/pycca/lib/application/pycca.tcl 
 * Created on: Sun Apr 16 11:25:29 PDT 2017
 * This is pycca version 4.5.1
 * ---------------------------------------------------------------
 */

#ifndef LAUNCH_H_
#define LAUNCH_H_


/*
 * interface prolog code
 */

#include <stdint.h>
// Any additional interface includes, etc.
typedef uint8_t Torpedo_ID ;

/*
 * Domain Operations External Declarations
 */

/*
 * Declaration of Function to Construct Initial Instances
 */


/*
 * External Operations Declarations
 */
extern void eop_launch_MOTOR_start(Torpedo_ID torpedo) ;

/*
 * Numeric encoding of classes and attributes. These definitions are usable
 * as external identifiers or in conjunction with the data portal.
 */
/*
 * Class: Torpedo
 */
#define LAUNCH_TORPEDO_CLASS_ID     0
#define LAUNCH_TORPEDO_INST_COUNT    20
#define LAUNCH_TORPEDO_ID_ATTR_ID    0
#define LAUNCH_TORPEDO_RECALLED_ATTR_ID    1
#define LAUNCH_TORPEDO_R1_TYPE_ATTR_ID 2
#define LAUNCH_TORPEDO_R1_STORED_TORPEDO_CODE  0
#define LAUNCH_TORPEDO_R1_LOADED_TORPEDO_CODE  1
#define LAUNCH_TORPEDO_R1_FIRED_TORPEDO_CODE  2
#define LAUNCH_TORPEDO_ATTR_COUNT 3
#define LAUNCH_TORPEDO_RECALL_POLYEVENT_ID 0
/*
 * Class: Torpedo_Spec
 */
#define LAUNCH_TORPEDO_SPEC_CLASS_ID     1
#define LAUNCH_TORPEDO_SPEC_ACTIVE_INST_ID 0
#define LAUNCH_TORPEDO_SPEC_PASSIVE_INST_ID 1
#define LAUNCH_TORPEDO_SPEC_INST_COUNT    2
#define LAUNCH_TORPEDO_SPEC_NAME_ATTR_ID    0
#define LAUNCH_TORPEDO_SPEC_LAUNCH_TYPE_ATTR_ID    1
#define LAUNCH_TORPEDO_SPEC_ATTR_COUNT 2
/*
 * Class: Stored_Torpedo
 */
#define LAUNCH_STORED_TORPEDO_CLASS_ID     2
#define LAUNCH_STORED_TORPEDO_INST_COUNT    20
#define LAUNCH_STORED_TORPEDO_ATTR_COUNT 0
#define LAUNCH_STORED_TORPEDO_ASSIGNED_EVENT_ID 0
#define LAUNCH_STORED_TORPEDO_CHECKS_OUT_OK_EVENT_ID 1
#define LAUNCH_STORED_TORPEDO_FAILED_MAINTENANCE_EVENT_ID 2
#define LAUNCH_STORED_TORPEDO_INSTALLED_EVENT_ID 3
#define LAUNCH_STORED_TORPEDO_LOAD_EVENT_ID 4
#define LAUNCH_STORED_TORPEDO_MAINTENCE_CANCELED_EVENT_ID 5
#define LAUNCH_STORED_TORPEDO_RECALL_EVENT_ID 6
#define LAUNCH_STORED_TORPEDO_REQUEST_MAINTENANCE_CHECK_EVENT_ID 7
/*
 * Class: Storage_Rack
 */
#define LAUNCH_STORAGE_RACK_CLASS_ID     3
#define LAUNCH_STORAGE_RACK_SR1_INST_ID 0
#define LAUNCH_STORAGE_RACK_SR2_INST_ID 1
#define LAUNCH_STORAGE_RACK_SR3_INST_ID 2
#define LAUNCH_STORAGE_RACK_SR4_INST_ID 3
#define LAUNCH_STORAGE_RACK_SR5_INST_ID 4
#define LAUNCH_STORAGE_RACK_SR6_INST_ID 5
#define LAUNCH_STORAGE_RACK_SR7_INST_ID 6
#define LAUNCH_STORAGE_RACK_SR8_INST_ID 7
#define LAUNCH_STORAGE_RACK_INST_COUNT    8
#define LAUNCH_STORAGE_RACK_NUMBER_ATTR_ID    0
#define LAUNCH_STORAGE_RACK_ATTR_COUNT 1
/*
 * Class: Loaded_Torpedo
 */
#define LAUNCH_LOADED_TORPEDO_CLASS_ID     4
#define LAUNCH_LOADED_TORPEDO_INST_COUNT    8
#define LAUNCH_LOADED_TORPEDO_R2_TYPE_ATTR_ID 0
#define LAUNCH_LOADED_TORPEDO_R2_PASSIVE_LAUNCH_TORPEDO_CODE  0
#define LAUNCH_LOADED_TORPEDO_R2_ACTIVE_LAUNCH_TORPEDO_CODE  1
#define LAUNCH_LOADED_TORPEDO_ATTR_COUNT 1
#define LAUNCH_LOADED_TORPEDO_CLEARED_TUBE_POLYEVENT_ID 0
#define LAUNCH_LOADED_TORPEDO_FIRE_POLYEVENT_ID 1
#define LAUNCH_LOADED_TORPEDO_RECALL_POLYEVENT_ID 2
/*
 * Class: Tube
 */
#define LAUNCH_TUBE_CLASS_ID     5
#define LAUNCH_TUBE_TB1_INST_ID 0
#define LAUNCH_TUBE_TB2_INST_ID 1
#define LAUNCH_TUBE_TB3_INST_ID 2
#define LAUNCH_TUBE_TB4_INST_ID 3
#define LAUNCH_TUBE_INST_COUNT    4
#define LAUNCH_TUBE_NUMBER_ATTR_ID    0
#define LAUNCH_TUBE_FLOODED_ATTR_ID    1
#define LAUNCH_TUBE_ATTR_COUNT 2
/*
 * Class: Fired_Torpedo
 */
#define LAUNCH_FIRED_TORPEDO_CLASS_ID     6
#define LAUNCH_FIRED_TORPEDO_INST_COUNT    20
#define LAUNCH_FIRED_TORPEDO_ATTR_COUNT 0
#define LAUNCH_FIRED_TORPEDO_ARMED_EVENT_ID 0
#define LAUNCH_FIRED_TORPEDO_CLEARED_TUBE_EVENT_ID 1
#define LAUNCH_FIRED_TORPEDO_CONTACT_EVENT_ID 2
#define LAUNCH_FIRED_TORPEDO_DISARMED_EVENT_ID 3
#define LAUNCH_FIRED_TORPEDO_LOST_TRACK_EVENT_ID 4
#define LAUNCH_FIRED_TORPEDO_MISSED_EVENT_ID 5
#define LAUNCH_FIRED_TORPEDO_RECALL_EVENT_ID 6
#define LAUNCH_FIRED_TORPEDO_RECALL_REQUESTED_EVENT_ID 7
#define LAUNCH_FIRED_TORPEDO_TRACKING_EVENT_ID 8
/*
 * Class: Passive_Launch_Torpedo
 */
#define LAUNCH_PASSIVE_LAUNCH_TORPEDO_CLASS_ID     7
#define LAUNCH_PASSIVE_LAUNCH_TORPEDO_INST_COUNT    8
#define LAUNCH_PASSIVE_LAUNCH_TORPEDO_ATTR_COUNT 0
#define LAUNCH_PASSIVE_LAUNCH_TORPEDO_CLEARED_TUBE_EVENT_ID 0
#define LAUNCH_PASSIVE_LAUNCH_TORPEDO_FIRE_EVENT_ID 1
#define LAUNCH_PASSIVE_LAUNCH_TORPEDO_RECALL_EVENT_ID 2
#define LAUNCH_PASSIVE_LAUNCH_TORPEDO_UNLOADED_EVENT_ID 3
/*
 * Class: Active_Launch_Torpedo
 */
#define LAUNCH_ACTIVE_LAUNCH_TORPEDO_CLASS_ID     8
#define LAUNCH_ACTIVE_LAUNCH_TORPEDO_INST_COUNT    8
#define LAUNCH_ACTIVE_LAUNCH_TORPEDO_ATTR_COUNT 0
#define LAUNCH_ACTIVE_LAUNCH_TORPEDO_CLEARED_TUBE_EVENT_ID 0
#define LAUNCH_ACTIVE_LAUNCH_TORPEDO_FIRE_EVENT_ID 1
#define LAUNCH_ACTIVE_LAUNCH_TORPEDO_RECALL_EVENT_ID 2
#define LAUNCH_ACTIVE_LAUNCH_TORPEDO_UNLOADED_EVENT_ID 3

#define LAUNCH_CLASS_COUNT 9
/*
 * Data Portal Access Variable
 */
extern struct pycca_domain_portal const launch_portal ;


#endif /* LAUNCH_H_ */
