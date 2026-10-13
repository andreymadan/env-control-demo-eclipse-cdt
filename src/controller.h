#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "config.h"

typedef enum
{
    SYSTEM_IDLE = 0,
    SYSTEM_HEATING,
    SYSTEM_COOLING,
    SYSTEM_ALARM
} SystemState;

typedef struct
{
    SystemConfig config;
    SystemState state;
    unsigned int consecutiveSensorFailures;
    unsigned long lastFanStopTime;
} Controller;

void Controller_Init(Controller *controller, const SystemConfig *config);
void Controller_RunCycle(Controller *controller);
SystemState Controller_GetState(const Controller *controller);

#endif
