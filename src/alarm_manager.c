#include "alarm_manager.h"
#include "display_driver.h"
#include "buzzer_driver.h"
#include "logger_driver.h"

static AlarmType activeAlarm = ALARM_NONE;

void AlarmManager_Activate(AlarmType alarm)
{
    activeAlarm = alarm;
    DisplayDriver_ShowAlarm((int)alarm);
    BuzzerDriver_Enable();
    LoggerDriver_LogAlarm((int)alarm);
}

void AlarmManager_Clear(void)
{
    activeAlarm = ALARM_NONE;
    DisplayDriver_ClearAlarm();
    BuzzerDriver_Disable();
}

AlarmType AlarmManager_GetActiveAlarm(void)
{
    return activeAlarm;
}
