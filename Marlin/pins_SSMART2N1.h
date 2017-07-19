/**
 * Sainsmart 2-n-1 THC_RAMPS_3D V1(RAMPS v1.3) pin assignments
 */

#include "pins_RAMPS_13.h"

// Extruders are swapped per silkscreen, so make match silkscreen
#undef HEATER_0_PIN
#undef HEATER_1_PIN

#define HEATER_0_PIN      9 // Was 10
#define HEATER_1_PIN	 10 // Was 9

// Control over Parts Fan on pin 7
#undef FAN_PIN
#define FAN_PIN        7 // PARTS FAN

