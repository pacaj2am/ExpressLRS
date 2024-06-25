#include "CRSF.h"
#if !defined(PLATFORM_STM32)
#include "common/mavlink.h"
#endif
#include <CRSFHandset.h>

// Takes a MAVLink message wrapped in CRSF and possibly converts it to a CRSF telemetry message
void convert_mavlink_to_crsf_telem(uint8_t *CRSFinBuffer, uint8_t count, Handset *handset);