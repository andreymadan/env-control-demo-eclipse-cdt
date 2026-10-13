#include "display_driver.h"
#include <stdio.h>

void DisplayDriver_ShowAlarm(int alarmCode)
{
    printf("DISPLAY: alarm code %d\n", alarmCode);
}

void DisplayDriver_ClearAlarm(void)
{
    printf("DISPLAY: alarm cleared\n");
}
