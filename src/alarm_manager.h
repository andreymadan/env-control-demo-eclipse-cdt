#ifndef ALARM_MANAGER_H
#define ALARM_MANAGER_H

typedef enum
{
    ALARM_NONE = 0,
    ALARM_SENSOR_FAILURE,
    ALARM_OVER_TEMPERATURE,
    ALARM_HIGH_HUMIDITY,
    ALARM_ENVIRONMENT
} AlarmType;

void AlarmManager_Activate(AlarmType alarm);
void AlarmManager_Clear(void);
AlarmType AlarmManager_GetActiveAlarm(void);

#endif
