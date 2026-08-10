#pragma once
#include_next <halconf.h>
#undef HAL_USE_ADC
#define HAL_USE_ADC TRUE
#undef HAL_USE_SERIAL
#define HAL_USE_SERIAL TRUE
