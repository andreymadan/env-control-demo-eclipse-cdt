#include "fan_driver.h"

static int fanOn = 0;

int FanDriver_On(void)
{
    fanOn = 1;
    return 0;
}

int FanDriver_Off(void)
{
    fanOn = 0;
    return 0;
}

int FanDriver_IsOn(void)
{
    return fanOn;
}
