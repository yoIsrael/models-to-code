/*
 * THIS FILE IS AUTOMATICALLY GENERATED. DO NOT EDIT.
 * Created by: /home/andrewm/working/modelstocode/mtc_source/tools/linux/pycca/lib/application/pycca.tcl 
 * Created on: Sat Apr 15 14:53:36 PDT 2017
 * This is pycca version 4.5.1
 * ---------------------------------------------------------------
 */

#ifndef LUBE_H_
#define LUBE_H_


/*
 * interface prolog code
 */

#include "pycca_portal.h"
#include <stdint.h>
// Any additional interface includes, etc.
typedef uint32_t Count ;

/*
 * Domain Operations External Declarations
 */
extern void lube_init(void) ;
extern void lube_Suspend_Autocycle_Session(InstId_t sessionId) ;
extern void lube_Injector_max_pressure(InstId_t injId) ;
extern void lube_Lock_Machinery(InstId_t machineId) ;
extern void lube_Unlock_Machinery(InstId_t machineId) ;

/*
 * Declaration of Function to Construct Initial Instances
 */


/*
 * External Operations Declarations
 */
extern void eop_lube_UI_Deactivated(InstId_t sessionId) ;
extern void eop_lube_App_Error(char const *Msg) ;
extern void eop_lube_SIO_Inject(InstId_t injectorId) ;
extern void eop_lube_SIO_Stop_injecting(InstId_t injectorId) ;
extern void eop_lube_SIO_Start_monitoring(InstId_t injectorId) ;
extern void eop_lube_SIO_Stop_monitoring(InstId_t injectorId) ;
extern void eop_lube_ALARM_Set_pressure_error(InstId_t injectorId) ;
extern void eop_lube_ALARM_Set_dissipation_error(InstId_t injectorId) ;
extern void eop_lube_ALARM_Clear_dissipation_error(InstId_t injectorId) ;
extern void eop_lube_ALARM_Set_lube_level_very_low(InstId_t reservoirId) ;
extern void eop_lube_ALARM_Clear_lube_level_very_low(InstId_t reservoirId) ;
extern void eop_lube_ALARM_Set_lube_level_low(InstId_t reservoirId) ;
extern void eop_lube_ALARM_Clear_lube_level_low(InstId_t reservoirId) ;
extern void eop_lube_ALARM_Set_lube_level_empty(InstId_t reservoirId) ;
extern void eop_lube_ALARM_Clear_lube_level_empty(InstId_t reservoirId) ;

/*
 * Numeric encoding of classes and attributes. These definitions are usable
 * as external identifiers or in conjunction with the data portal.
 */
/*
 * Class: Lubrication_Schedule
 */
#define LUBE_LUBRICATION_SCHEDULE_CLASS_ID     0
#define LUBE_LUBRICATION_SCHEDULE_GEARBOX_INST_ID 0
#define LUBE_LUBRICATION_SCHEDULE_GENERATOR_INST_ID 1
#define LUBE_LUBRICATION_SCHEDULE_SHAFT_INST_ID 2
#define LUBE_LUBRICATION_SCHEDULE_TEST2_INST_ID 3
#define LUBE_LUBRICATION_SCHEDULE_INST_COUNT    4
#define LUBE_LUBRICATION_SCHEDULE_NAME_ATTR_ID    0
#define LUBE_LUBRICATION_SCHEDULE_WAIT_INTERVAL_ATTR_ID    1
#define LUBE_LUBRICATION_SCHEDULE_MONITOR_INTERVAL_ATTR_ID    2
#define LUBE_LUBRICATION_SCHEDULE_MAX_LOW_LUBE_CYCLES_ATTR_ID    3
#define LUBE_LUBRICATION_SCHEDULE_DEFAULT_CONTINUOUS_OPERATION_ATTR_ID    4
#define LUBE_LUBRICATION_SCHEDULE_DEFAULT_MAX_CYCLES_ATTR_ID    5
#define LUBE_LUBRICATION_SCHEDULE_ATTR_COUNT 6
/*
 * Class: Injector_Design
 */
#define LUBE_INJECTOR_DESIGN_CLASS_ID     1
#define LUBE_INJECTOR_DESIGN_IHN4_INST_ID 0
#define LUBE_INJECTOR_DESIGN_IX77B_INST_ID 1
#define LUBE_INJECTOR_DESIGN_INST_COUNT    2
#define LUBE_INJECTOR_DESIGN_MODEL_ATTR_ID    0
#define LUBE_INJECTOR_DESIGN_MIN_DELIVERY_PRESSURE_ATTR_ID    1
#define LUBE_INJECTOR_DESIGN_MAX_SYSTEM_PRESSURE_ATTR_ID    2
#define LUBE_INJECTOR_DESIGN_MAX_DISSIPATION_PRESSURE_ATTR_ID    3
#define LUBE_INJECTOR_DESIGN_DELIVERY_WINDOW_ATTR_ID    4
#define LUBE_INJECTOR_DESIGN_GOOD_INJECTION_DURATION_ATTR_ID    5
#define LUBE_INJECTOR_DESIGN_ATTR_COUNT 6
/*
 * Class: Injector
 */
#define LUBE_INJECTOR_CLASS_ID     2
#define LUBE_INJECTOR_IN1_INST_ID 0
#define LUBE_INJECTOR_IN2_INST_ID 1
#define LUBE_INJECTOR_IN3_INST_ID 2
#define LUBE_INJECTOR_INST_COUNT    3
#define LUBE_INJECTOR_PRESSURE_ATTR_ID    0
#define LUBE_INJECTOR_DISSIPATION_ERROR_ATTR_ID    1
#define LUBE_INJECTOR_INJECTING_ATTR_ID    2
#define LUBE_INJECTOR_ATTR_COUNT 3
#define LUBE_INJECTOR_ABOVE_DISSIPATION_PRESSURE_EVENT_ID 0
#define LUBE_INJECTOR_ABOVE_INJECT_PRESSURE_EVENT_ID 1
#define LUBE_INJECTOR_BELOW_INJECT_PRESSURE_EVENT_ID 2
#define LUBE_INJECTOR_GOOD_INJECTION_EVENT_ID 3
#define LUBE_INJECTOR_INJECTION_CANCELED_EVENT_ID 4
#define LUBE_INJECTOR_KEEP_MONITORING_EVENT_ID 5
#define LUBE_INJECTOR_LOCKED_OUT_EVENT_ID 6
#define LUBE_INJECTOR_MONITOR_EVENT_ID 7
#define LUBE_INJECTOR_OK_TO_START_EVENT_ID 8
#define LUBE_INJECTOR_START_EVENT_ID 9
#define LUBE_INJECTOR_STOP_EVENT_ID 10
#define LUBE_INJECTOR_STOPPED_EVENT_ID 11
#define LUBE_INJECTOR_WAIT_FOR_INJECT_PRESSURE_EVENT_ID 12
#define LUBE_INJECTOR_WAKEUP_EVENT_ID 13
/*
 * Class: Autocycle_Session
 */
#define LUBE_AUTOCYCLE_SESSION_CLASS_ID     3
#define LUBE_AUTOCYCLE_SESSION_ACS1_INST_ID 0
#define LUBE_AUTOCYCLE_SESSION_ACS2_INST_ID 1
#define LUBE_AUTOCYCLE_SESSION_ACS3_INST_ID 2
#define LUBE_AUTOCYCLE_SESSION_INST_COUNT    3
#define LUBE_AUTOCYCLE_SESSION_CYCLES_REQUESTED_ATTR_ID    0
#define LUBE_AUTOCYCLE_SESSION_CONTINUOUS_OPERATION_ATTR_ID    1
#define LUBE_AUTOCYCLE_SESSION_FAILED_CYCLES_ATTR_ID    2
#define LUBE_AUTOCYCLE_SESSION_CYCLES_SINCE_ACTIVATION_ATTR_ID    3
#define LUBE_AUTOCYCLE_SESSION_LUBRICATING_ATTR_ID    4
#define LUBE_AUTOCYCLE_SESSION_ACTIVE_ATTR_ID    5
#define LUBE_AUTOCYCLE_SESSION_DEACTIVATE_ATTR_ID    6
#define LUBE_AUTOCYCLE_SESSION_SUSPEND_REQUESTED_ATTR_ID    7
#define LUBE_AUTOCYCLE_SESSION_WAIT_TIME_REMAINING_ATTR_ID    8
#define LUBE_AUTOCYCLE_SESSION_ATTR_COUNT 9
#define LUBE_AUTOCYCLE_SESSION_ACTIVATE_EVENT_ID 0
#define LUBE_AUTOCYCLE_SESSION_ACTIVATED_EVENT_ID 1
#define LUBE_AUTOCYCLE_SESSION_CHANGE_SCHEDULE_EVENT_ID 2
#define LUBE_AUTOCYCLE_SESSION_COUNT_AS_NORMAL_EVENT_ID 3
#define LUBE_AUTOCYCLE_SESSION_CREATED_EVENT_ID 4
#define LUBE_AUTOCYCLE_SESSION_CYCLE_INTERRUPTED_EVENT_ID 5
#define LUBE_AUTOCYCLE_SESSION_DEACTIVATE_EVENT_ID 6
#define LUBE_AUTOCYCLE_SESSION_GET_READY_TO_LUBRICATE_EVENT_ID 7
#define LUBE_AUTOCYCLE_SESSION_GOOD_INJECTION_EVENT_ID 8
#define LUBE_AUTOCYCLE_SESSION_LOCKED_OUT_EVENT_ID 9
#define LUBE_AUTOCYCLE_SESSION_LOW_PRESSURE_INJECTION_EVENT_ID 10
#define LUBE_AUTOCYCLE_SESSION_LUBE_INTERVAL_ENDED_EVENT_ID 11
#define LUBE_AUTOCYCLE_SESSION_LUBRICATE_EVENT_ID 12
#define LUBE_AUTOCYCLE_SESSION_MONITOR_INTERVAL_CANCELED_EVENT_ID 13
#define LUBE_AUTOCYCLE_SESSION_NEW_SESSION_EVENT_ID 14
#define LUBE_AUTOCYCLE_SESSION_NEXT_CYCLE_EVENT_ID 15
#define LUBE_AUTOCYCLE_SESSION_RESUME_EVENT_ID 16
#define LUBE_AUTOCYCLE_SESSION_STOP_EVENT_ID 17
#define LUBE_AUTOCYCLE_SESSION_SUSPEND_EVENT_ID 18
#define LUBE_AUTOCYCLE_SESSION_WAIT_INTERVAL_CANCELED_EVENT_ID 19
/*
 * Class: Machinery
 */
#define LUBE_MACHINERY_CLASS_ID     4
#define LUBE_MACHINERY_M1_INST_ID 0
#define LUBE_MACHINERY_M2_INST_ID 1
#define LUBE_MACHINERY_M3_INST_ID 2
#define LUBE_MACHINERY_INST_COUNT    3
#define LUBE_MACHINERY_LOCKED_OUT_ATTR_ID    0
#define LUBE_MACHINERY_ATTR_COUNT 1
/*
 * Class: Reservoir
 */
#define LUBE_RESERVOIR_CLASS_ID     5
#define LUBE_RESERVOIR_RES1_INST_ID 0
#define LUBE_RESERVOIR_RES2_INST_ID 1
#define LUBE_RESERVOIR_INST_COUNT    2
#define LUBE_RESERVOIR_LEVEL_ATTR_ID    0
#define LUBE_RESERVOIR_ATTR_COUNT 1
#define LUBE_RESERVOIR_LOW_INJECTION_PRESSURE_EVENT_ID 0
#define LUBE_RESERVOIR_LOW_LUBE_LEVEL_EVENT_ID 1
#define LUBE_RESERVOIR_NORMAL_LUBE_LEVEL_EVENT_ID 2
#define LUBE_RESERVOIR_TOO_MANY_LOW_LUBE_CYCLES_EVENT_ID 3

#define LUBE_CLASS_COUNT 6
/*
 * Data Portal Access Variable
 */
extern struct pycca_domain_portal const lube_portal ;


#endif /* LUBE_H_ */
