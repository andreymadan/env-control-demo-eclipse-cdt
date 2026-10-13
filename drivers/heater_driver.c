#include "heater_driver.h"

static int heaterOn = 0;

int HeaterDriver_On(void)
{
    heaterOn = 1;
    return 0;
}

int HeaterDriver_Off(void)
{
    heaterOn = 0;
    return 0;
}

int HeaterDriver_IsOn(void)
{
    return heaterOn;
}
