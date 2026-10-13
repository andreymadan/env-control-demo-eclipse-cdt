#include "logger_driver.h"
#include <stdio.h>

void LoggerDriver_LogAlarm(int alarmCode)
{
    printf("LOGGER: alarm %d recorded\n", alarmCode);
}
