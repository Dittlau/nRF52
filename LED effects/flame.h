#pragma once

//#include "nrf.h"
#include "nrf_gpio.h"

// PWM driver
#include "nrf_drv_pwm.h"

#define YELLOW1     25
#define YELLOW2     27
#define RED1        26

void flame_setup(void);
