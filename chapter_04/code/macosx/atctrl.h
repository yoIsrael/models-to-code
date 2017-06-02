/*
 * THIS FILE IS AUTOMATICALLY GENERATED. DO NOT EDIT.
 * Created by: /Users/andrewm/develop/modelstocode/mtc_source/tools/macosx/pycca/lib/application/pycca.tcl 
 * Created on: Sun Apr 16 11:21:17 PDT 2017
 * This is pycca version 4.5.1
 * ---------------------------------------------------------------
 */

#ifndef ATCTRL_H_
#define ATCTRL_H_


/*
 * interface prolog code
 */

#include <stdint.h>
// Any additional interface includes, etc.
typedef char const *Employee_ID ;
typedef char const *Station_Number ;
typedef char const *Czone_Name ;

/*
 * Domain Operations External Declarations
 */
extern void atctrl_init(void) ;

/*
 * Declaration of Function to Construct Initial Instances
 */


/*
 * External Operations Declarations
 */
extern void eop_atctrl_Cannot_handoff_to_self(Employee_ID controller) ;
extern void eop_atctrl_Unknown_controller(Employee_ID controller) ;
extern void eop_atctrl_Zone_not_handled_by_controller(Employee_ID controller) ;
extern void eop_atctrl_Control_Zones_Active(Employee_ID atc) ;
extern void eop_atctrl_Break_required(Station_Number station) ;

/*
 * Numeric encoding of classes and attributes. These definitions are usable
 * as external identifiers or in conjunction with the data portal.
 */
/*
 * Class: Air_Traffic_Controller
 */
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_CLASS_ID     0
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_ATC53_INST_ID 0
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_ATC67_INST_ID 1
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_ATC51_INST_ID 2
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_INST_COUNT    3
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_ID_ATTR_ID    0
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_NAME_ATTR_ID    1
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_RATING_ATTR_ID    2
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_R1_TYPE_ATTR_ID 3
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_R1_OFF_DUTY_CONTROLLER_CODE  0
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_R1_ON_DUTY_CONTROLLER_CODE  1
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_ATTR_COUNT 4
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_CANNOT_GO_ON_DUTY_EVENT_ID 0
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_HANDOFF_EVENT_ID 1
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_HANDOFF_COMPLETE_EVENT_ID 2
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_LOG_IN_EVENT_ID 3
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_LOG_OUT_EVENT_ID 4
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_LOGGED_IN_EVENT_ID 5
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_MUST_HAND_OFF_ZONES_EVENT_ID 6
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_OFF_DUTY_EVENT_ID 7
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_READY_FOR_A_BREAK_EVENT_ID 8
#define ATCTRL_AIR_TRAFFIC_CONTROLLER_READY_FOR_DUTY_EVENT_ID 9
/*
 * Class: Off_Duty_Controller
 */
#define ATCTRL_OFF_DUTY_CONTROLLER_CLASS_ID     1
#define ATCTRL_OFF_DUTY_CONTROLLER_INST_COUNT    3
#define ATCTRL_OFF_DUTY_CONTROLLER_LAST_SHIFT_ENDED_ATTR_ID    0
#define ATCTRL_OFF_DUTY_CONTROLLER_ATTR_COUNT 1
/*
 * Class: On_Duty_Controller
 */
#define ATCTRL_ON_DUTY_CONTROLLER_CLASS_ID     2
#define ATCTRL_ON_DUTY_CONTROLLER_ATC53_INST_ID 0
#define ATCTRL_ON_DUTY_CONTROLLER_ATC67_INST_ID 1
#define ATCTRL_ON_DUTY_CONTROLLER_ATC51_INST_ID 2
#define ATCTRL_ON_DUTY_CONTROLLER_INST_COUNT    3
#define ATCTRL_ON_DUTY_CONTROLLER_TIME_LOGGED_IN_ATTR_ID    0
#define ATCTRL_ON_DUTY_CONTROLLER_ATTR_COUNT 1
/*
 * Class: Control_Zone
 */
#define ATCTRL_CONTROL_ZONE_CLASS_ID     3
#define ATCTRL_CONTROL_ZONE_SFO_INST_ID 0
#define ATCTRL_CONTROL_ZONE_OAK_INST_ID 1
#define ATCTRL_CONTROL_ZONE_SJC_INST_ID 2
#define ATCTRL_CONTROL_ZONE_INST_COUNT    3
#define ATCTRL_CONTROL_ZONE_NAME_ATTR_ID    0
#define ATCTRL_CONTROL_ZONE_TRAFFIC_ATTR_ID    1
#define ATCTRL_CONTROL_ZONE_ATTR_COUNT 2
/*
 * Class: Duty_Station
 */
#define ATCTRL_DUTY_STATION_CLASS_ID     4
#define ATCTRL_DUTY_STATION_S1_INST_ID 0
#define ATCTRL_DUTY_STATION_S2_INST_ID 1
#define ATCTRL_DUTY_STATION_S3_INST_ID 2
#define ATCTRL_DUTY_STATION_INST_COUNT    3
#define ATCTRL_DUTY_STATION_NUMBER_ATTR_ID    0
#define ATCTRL_DUTY_STATION_LOCATION_ATTR_ID    1
#define ATCTRL_DUTY_STATION_CAPACITY_ATTR_ID    2
#define ATCTRL_DUTY_STATION_ATTR_COUNT 3
#define ATCTRL_DUTY_STATION_AVAILABLE_EVENT_ID 0
#define ATCTRL_DUTY_STATION_IN_USE_EVENT_ID 1
#define ATCTRL_DUTY_STATION_MAX_SHIFT_EXCEEDED_EVENT_ID 2
#define ATCTRL_DUTY_STATION_USER_LEAVING_EVENT_ID 3
/*
 * Class: Shift_Specification
 */
#define ATCTRL_SHIFT_SPECIFICATION_CLASS_ID     5
#define ATCTRL_SHIFT_SPECIFICATION_SINGLETON_INST_ID 0
#define ATCTRL_SHIFT_SPECIFICATION_INST_COUNT    1
#define ATCTRL_SHIFT_SPECIFICATION_MIN_BREAK_ATTR_ID    0
#define ATCTRL_SHIFT_SPECIFICATION_MAX_SHIFT_ATTR_ID    1
#define ATCTRL_SHIFT_SPECIFICATION_ATTR_COUNT 2

#define ATCTRL_CLASS_COUNT 6
/*
 * Data Portal Access Variable
 */
extern struct pycca_domain_portal const atctrl_portal ;


#endif /* ATCTRL_H_ */
