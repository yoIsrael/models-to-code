/*
 * DO NOT EDIT THIS FILE -- IT IS AUTOMATICALLY GENERATED
 * Generated by: /home/andrewm/working/modelstocode/mtc_source/tools/linux/tack/lib/application/main.tcl, Revision: 3.8.1
 * Generated on: Sat Apr 15 14:52:38 PDT 2017
 */

/*
 * INCLUDE FILES
 */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>
#include <string.h>

#include "./atcharness.h"
#include "harness.h"
#include "pycca_portal.h"

/*
 * MACRO DEFINITIONS
 */

/*
 * TYPE DEFINITIONS
 */

/*
 * EXTERNAL DATA DEFINITIONS
 */

/*
 * STATIC DATA DEFINITIONS
 */

static char const empty_string[] = "" ;
static char cvt_buffer[BUFSIZ] ;
static char const bad_param_msg[] = "bad parameter: %s" ;
static char const wrong_args_msg[] =
        "wrong # of arguments: got %d, expected %d" ;
static char const read_err_msg[] = "pycca_read_attr error = %d" ;
static char const write_err_msg[] = "pycca_write_attr error = %d" ;
static char const bad_attr_value_msg[] = "bad value %s" ;
static char const stubLabel[] = "stub" ;

#include "atctrl.h"
/*
 * FORWARD FUNCTION DECLARATIONS
 */

static bool atctrl_Air_Traffic_Controller_ID_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Air_Traffic_Controller_ID_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Air_Traffic_Controller_Name_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Air_Traffic_Controller_Name_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Air_Traffic_Controller_Rating_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Air_Traffic_Controller_Rating_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_On_Duty_Controller_Time_logged_in_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_On_Duty_Controller_Time_logged_in_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Off_Duty_Controller_Last_shift_ended_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Off_Duty_Controller_Last_shift_ended_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Control_Zone_Name_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Control_Zone_Name_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Control_Zone_Traffic_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Control_Zone_Traffic_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Duty_Station_Number_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Duty_Station_Number_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Duty_Station_Location_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Duty_Station_Location_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Duty_Station_Capacity_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Duty_Station_Capacity_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Shift_Specification_Min_break_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Shift_Specification_Min_break_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;
static bool atctrl_Shift_Specification_Max_shift_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result) ;
static bool atctrl_Shift_Specification_Max_shift_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result) ;

static int atctrl_Air_Traffic_Controller_Ready_for_duty_fmt(EventParamType *params, int argc, char const **argv) ;
static int atctrl_Air_Traffic_Controller_Log_in_fmt(EventParamType *params, int argc, char const **argv) ;
static int atctrl_Air_Traffic_Controller_Handoff_fmt(EventParamType *params, int argc, char const **argv) ;


/*
 * STATIC DATA DEFINITIONS
 */

static attr_map_t const atctrl_Air_Traffic_Controller_attr_map[] = {
    {.name = "ID",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_ID_ATTR_ID,
     .attr_read = atctrl_Air_Traffic_Controller_ID_read,
     .attr_update = atctrl_Air_Traffic_Controller_ID_update},
    {.name = "Name",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_NAME_ATTR_ID,
     .attr_read = atctrl_Air_Traffic_Controller_Name_read,
     .attr_update = atctrl_Air_Traffic_Controller_Name_update},
    {.name = "Rating",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_RATING_ATTR_ID,
     .attr_read = atctrl_Air_Traffic_Controller_Rating_read,
     .attr_update = atctrl_Air_Traffic_Controller_Rating_update},
} ;
static inst_map_t const atctrl_Air_Traffic_Controller_inst_map[] = {
    {.name = "atc51",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_ATC51_INST_ID},
    {.name = "atc53",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_ATC53_INST_ID},
    {.name = "atc67",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_ATC67_INST_ID},
} ;
static event_map_t const atctrl_Air_Traffic_Controller_event_map[] = {
    {.name = "Cannot_go_on_duty",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_CANNOT_GO_ON_DUTY_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "Handoff",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_HANDOFF_EVENT_ID,
     .paramFmt = atctrl_Air_Traffic_Controller_Handoff_fmt,
     .pcount = 2},
    {.name = "Handoff_complete",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_HANDOFF_COMPLETE_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "Log_in",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_LOG_IN_EVENT_ID,
     .paramFmt = atctrl_Air_Traffic_Controller_Log_in_fmt,
     .pcount = 1},
    {.name = "Log_out",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_LOG_OUT_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "Logged_in",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_LOGGED_IN_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "Must_hand_off_zones",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_MUST_HAND_OFF_ZONES_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "Off_duty",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_OFF_DUTY_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "Ready_for_a_break",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_READY_FOR_A_BREAK_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "Ready_for_duty",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_READY_FOR_DUTY_EVENT_ID,
     .paramFmt = atctrl_Air_Traffic_Controller_Ready_for_duty_fmt,
     .pcount = 1},
} ;
static attr_map_t const atctrl_Control_Zone_attr_map[] = {
    {.name = "Name",
     .id = ATCTRL_CONTROL_ZONE_NAME_ATTR_ID,
     .attr_read = atctrl_Control_Zone_Name_read,
     .attr_update = atctrl_Control_Zone_Name_update},
    {.name = "Traffic",
     .id = ATCTRL_CONTROL_ZONE_TRAFFIC_ATTR_ID,
     .attr_read = atctrl_Control_Zone_Traffic_read,
     .attr_update = atctrl_Control_Zone_Traffic_update},
} ;
static inst_map_t const atctrl_Control_Zone_inst_map[] = {
    {.name = "oak",
     .id = ATCTRL_CONTROL_ZONE_OAK_INST_ID},
    {.name = "sfo",
     .id = ATCTRL_CONTROL_ZONE_SFO_INST_ID},
    {.name = "sjc",
     .id = ATCTRL_CONTROL_ZONE_SJC_INST_ID},
} ;
static attr_map_t const atctrl_Duty_Station_attr_map[] = {
    {.name = "Capacity",
     .id = ATCTRL_DUTY_STATION_CAPACITY_ATTR_ID,
     .attr_read = atctrl_Duty_Station_Capacity_read,
     .attr_update = atctrl_Duty_Station_Capacity_update},
    {.name = "Location",
     .id = ATCTRL_DUTY_STATION_LOCATION_ATTR_ID,
     .attr_read = atctrl_Duty_Station_Location_read,
     .attr_update = atctrl_Duty_Station_Location_update},
    {.name = "Number",
     .id = ATCTRL_DUTY_STATION_NUMBER_ATTR_ID,
     .attr_read = atctrl_Duty_Station_Number_read,
     .attr_update = atctrl_Duty_Station_Number_update},
} ;
static inst_map_t const atctrl_Duty_Station_inst_map[] = {
    {.name = "s1",
     .id = ATCTRL_DUTY_STATION_S1_INST_ID},
    {.name = "s2",
     .id = ATCTRL_DUTY_STATION_S2_INST_ID},
    {.name = "s3",
     .id = ATCTRL_DUTY_STATION_S3_INST_ID},
} ;
static event_map_t const atctrl_Duty_Station_event_map[] = {
    {.name = "Available",
     .id = ATCTRL_DUTY_STATION_AVAILABLE_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "In_use",
     .id = ATCTRL_DUTY_STATION_IN_USE_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "Max_shift_exceeded",
     .id = ATCTRL_DUTY_STATION_MAX_SHIFT_EXCEEDED_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
    {.name = "User_leaving",
     .id = ATCTRL_DUTY_STATION_USER_LEAVING_EVENT_ID,
     .paramFmt = NULL,
     .pcount = 0},
} ;
static attr_map_t const atctrl_Off_Duty_Controller_attr_map[] = {
    {.name = "Last_shift_ended",
     .id = ATCTRL_OFF_DUTY_CONTROLLER_LAST_SHIFT_ENDED_ATTR_ID,
     .attr_read = atctrl_Off_Duty_Controller_Last_shift_ended_read,
     .attr_update = atctrl_Off_Duty_Controller_Last_shift_ended_update},
} ;
static attr_map_t const atctrl_On_Duty_Controller_attr_map[] = {
    {.name = "Time_logged_in",
     .id = ATCTRL_ON_DUTY_CONTROLLER_TIME_LOGGED_IN_ATTR_ID,
     .attr_read = atctrl_On_Duty_Controller_Time_logged_in_read,
     .attr_update = atctrl_On_Duty_Controller_Time_logged_in_update},
} ;
static inst_map_t const atctrl_On_Duty_Controller_inst_map[] = {
    {.name = "atc51",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_ATC51_INST_ID},
    {.name = "atc53",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_ATC53_INST_ID},
    {.name = "atc67",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_ATC67_INST_ID},
} ;
static attr_map_t const atctrl_Shift_Specification_attr_map[] = {
    {.name = "Max_shift",
     .id = ATCTRL_SHIFT_SPECIFICATION_MAX_SHIFT_ATTR_ID,
     .attr_read = atctrl_Shift_Specification_Max_shift_read,
     .attr_update = atctrl_Shift_Specification_Max_shift_update},
    {.name = "Min_break",
     .id = ATCTRL_SHIFT_SPECIFICATION_MIN_BREAK_ATTR_ID,
     .attr_read = atctrl_Shift_Specification_Min_break_read,
     .attr_update = atctrl_Shift_Specification_Min_break_update},
} ;
static inst_map_t const atctrl_Shift_Specification_inst_map[] = {
    {.name = "singleton",
     .id = ATCTRL_SHIFT_SPECIFICATION_SINGLETON_INST_ID},
} ;
static class_map_t const atctrl_class_map[] = {
    {.name = "Air_Traffic_Controller",
     .id = ATCTRL_AIR_TRAFFIC_CONTROLLER_CLASS_ID,
     .attrs = atctrl_Air_Traffic_Controller_attr_map,
     .attr_count = 3,
     .insts = atctrl_Air_Traffic_Controller_inst_map,
     .inst_count = 3,
     .events = atctrl_Air_Traffic_Controller_event_map,
     .event_count = 10,
     .polyevents = NULL,
     .polyevent_count = 0},
    {.name = "Control_Zone",
     .id = ATCTRL_CONTROL_ZONE_CLASS_ID,
     .attrs = atctrl_Control_Zone_attr_map,
     .attr_count = 2,
     .insts = atctrl_Control_Zone_inst_map,
     .inst_count = 3,
     .events = NULL,
     .event_count = 0,
     .polyevents = NULL,
     .polyevent_count = 0},
    {.name = "Duty_Station",
     .id = ATCTRL_DUTY_STATION_CLASS_ID,
     .attrs = atctrl_Duty_Station_attr_map,
     .attr_count = 3,
     .insts = atctrl_Duty_Station_inst_map,
     .inst_count = 3,
     .events = atctrl_Duty_Station_event_map,
     .event_count = 4,
     .polyevents = NULL,
     .polyevent_count = 0},
    {.name = "Off_Duty_Controller",
     .id = ATCTRL_OFF_DUTY_CONTROLLER_CLASS_ID,
     .attrs = atctrl_Off_Duty_Controller_attr_map,
     .attr_count = 1,
     .insts = NULL,
     .inst_count = 0,
     .events = NULL,
     .event_count = 0,
     .polyevents = NULL,
     .polyevent_count = 0},
    {.name = "On_Duty_Controller",
     .id = ATCTRL_ON_DUTY_CONTROLLER_CLASS_ID,
     .attrs = atctrl_On_Duty_Controller_attr_map,
     .attr_count = 1,
     .insts = atctrl_On_Duty_Controller_inst_map,
     .inst_count = 3,
     .events = NULL,
     .event_count = 0,
     .polyevents = NULL,
     .polyevent_count = 0},
    {.name = "Shift_Specification",
     .id = ATCTRL_SHIFT_SPECIFICATION_CLASS_ID,
     .attrs = atctrl_Shift_Specification_attr_map,
     .attr_count = 2,
     .insts = atctrl_Shift_Specification_inst_map,
     .inst_count = 1,
     .events = NULL,
     .event_count = 0,
     .polyevents = NULL,
     .polyevent_count = 0},
} ;

static dportal_t const atctrl_domain_portal = {
    .name = "atctrl",
    .dops = NULL,
    .dop_count = 0,
    .classes = atctrl_class_map,
    .class_count = sizeof(atctrl_class_map) / sizeof(atctrl_class_map[0]),
    .dportal = &atctrl_portal
} ;


/*
 * STATIC INLINE FUNCTION DEFINITIONS
 */

/*
 * INLINE FUNCTION DECLARATIONS
 */

/*
 * EXTERNAL FUNCTION DEFINITIONS
 */
void
atctrl_harness_init(void)
{
    harness_register(&atctrl_domain_portal) ;
}

void
eop_atctrl_Cannot_handoff_to_self(Employee_ID controller)
{
    harness_stub_printf(stubLabel, "domain atctrl eop Cannot_handoff_to_self parameters {controller %""s""}", (char *)(controller)) ;
    printf("Cannot Handoff to Self: \"%s\"\n", controller) ;
}

void
eop_atctrl_Unknown_controller(Employee_ID controller)
{
    harness_stub_printf(stubLabel, "domain atctrl eop Unknown_controller parameters {controller %""s""}", (char *)(controller)) ;
    printf("Bad Handoff Target: \"%s\"\n", controller) ;
}

void
eop_atctrl_Zone_not_handled_by_controller(Employee_ID controller)
{
    harness_stub_printf(stubLabel, "domain atctrl eop Zone_not_handled_by_controller parameters {controller %""s""}", (char *)(controller)) ;
    printf("Control zone not handled by \"%s\"\n", controller) ;
}

void
eop_atctrl_Control_Zones_Active(Employee_ID atc)
{
    harness_stub_printf(stubLabel, "domain atctrl eop Control_Zones_Active parameters {atc %""s""}", (char *)(atc)) ;
    printf("Control Zones Active: %s\n", atc) ;
}

void
eop_atctrl_Break_required(Station_Number station)
{
    harness_stub_printf(stubLabel, "domain atctrl eop Break_required parameters {station %""s""}", (char *)(station)) ;
    printf("Break required: %s\n", station) ;
}


/*
 * STATIC FUNCTION DEFINITIONS
 */

static bool atctrl_Air_Traffic_Controller_ID_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    char * value = (char *)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Air_Traffic_Controller_Name_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    char * value = (char *)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Air_Traffic_Controller_Rating_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    char * value = (char *)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_On_Duty_Controller_Time_logged_in_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    long int value = (long int)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""ld", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Off_Duty_Controller_Last_shift_ended_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    long int value = (long int)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""ld", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Control_Zone_Name_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    char * value = (char *)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Control_Zone_Traffic_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    unsigned value = (unsigned)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""u", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Duty_Station_Number_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    char * value = (char *)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Duty_Station_Location_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    char * value = (char *)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Duty_Station_Capacity_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    unsigned value = (unsigned)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""u", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Shift_Specification_Min_break_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    unsigned value = (unsigned)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""u", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}

static bool atctrl_Shift_Specification_Max_shift_read(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const **result)
{
    bool retvalue ;

    unsigned value = (unsigned)0 ;
    int err = pycca_read_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, read_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""u", value) ;
        retvalue = true ;
    }
    *result = cvt_buffer ;
    return retvalue ;
}


static bool atctrl_Air_Traffic_Controller_ID_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, attr_value, strlen(attr_value) + 1) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", attr_value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Air_Traffic_Controller_Name_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, attr_value, strlen(attr_value) + 1) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", attr_value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Air_Traffic_Controller_Rating_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, attr_value, strlen(attr_value) + 1) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", attr_value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_On_Duty_Controller_Time_logged_in_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    long int value ;
    if (sscanf(attr_value, "%""li", &value) != 1) {
        snprintf(cvt_buffer, sizeof(cvt_buffer), bad_attr_value_msg, attr_value) ;
        return false ;
    }
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""ld", value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Off_Duty_Controller_Last_shift_ended_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    long int value ;
    if (sscanf(attr_value, "%""li", &value) != 1) {
        snprintf(cvt_buffer, sizeof(cvt_buffer), bad_attr_value_msg, attr_value) ;
        return false ;
    }
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""ld", value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Control_Zone_Name_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, attr_value, strlen(attr_value) + 1) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", attr_value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Control_Zone_Traffic_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    unsigned value ;
    if (sscanf(attr_value, "%""i", &value) != 1) {
        snprintf(cvt_buffer, sizeof(cvt_buffer), bad_attr_value_msg, attr_value) ;
        return false ;
    }
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""u", value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Duty_Station_Number_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, attr_value, strlen(attr_value) + 1) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", attr_value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Duty_Station_Location_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, attr_value, strlen(attr_value) + 1) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""s", attr_value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Duty_Station_Capacity_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    unsigned value ;
    if (sscanf(attr_value, "%""i", &value) != 1) {
        snprintf(cvt_buffer, sizeof(cvt_buffer), bad_attr_value_msg, attr_value) ;
        return false ;
    }
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""u", value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Shift_Specification_Min_break_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    unsigned value ;
    if (sscanf(attr_value, "%""i", &value) != 1) {
        snprintf(cvt_buffer, sizeof(cvt_buffer), bad_attr_value_msg, attr_value) ;
        return false ;
    }
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""u", value) ;
        retvalue = true ;
    }
    return retvalue ;
}

static bool atctrl_Shift_Specification_Max_shift_update(struct pycca_domain_portal const *portal, unsigned class_id, unsigned inst_id, unsigned attr_id, char const *attr_value, char const **result)
{
    bool retvalue ;
    *result = cvt_buffer ;
    unsigned value ;
    if (sscanf(attr_value, "%""i", &value) != 1) {
        snprintf(cvt_buffer, sizeof(cvt_buffer), bad_attr_value_msg, attr_value) ;
        return false ;
    }
    int err = pycca_update_attr(portal, class_id, inst_id, attr_id, &value, sizeof(value)) ;
    if (err < 0) {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, write_err_msg, err) ;
        retvalue = false ;
    } else {
        snprintf(cvt_buffer, sizeof(cvt_buffer) - 1, "%""u", value) ;
        retvalue = true ;
    }
    return retvalue ;
}


static int atctrl_Air_Traffic_Controller_Ready_for_duty_fmt(EventParamType *params, int argc, char const **argv)
{
    struct Ready_for_duty_params {
        Station_Number Station ;
    } *pp = (struct Ready_for_duty_params *)params ;
    int pnum = 0 ;
    pp->Station = *argv++ ;
    pnum++ ;
    return -1 ;
}
static int atctrl_Air_Traffic_Controller_Log_in_fmt(EventParamType *params, int argc, char const **argv)
{
    struct Log_in_params {
        Station_Number Station ;
    } *pp = (struct Log_in_params *)params ;
    int pnum = 0 ;
    pp->Station = *argv++ ;
    pnum++ ;
    return -1 ;
}
static int atctrl_Air_Traffic_Controller_Handoff_fmt(EventParamType *params, int argc, char const **argv)
{
    struct Handoff_params {
        Czone_Name zone ;
        Employee_ID controller ;
    } *pp = (struct Handoff_params *)params ;
    int pnum = 0 ;
    pp->zone = *argv++ ;
    pnum++ ;
    pp->controller = *argv++ ;
    pnum++ ;
    return -1 ;
}

