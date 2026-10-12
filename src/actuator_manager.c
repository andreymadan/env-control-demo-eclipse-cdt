#include "actuator_manager.h"
#include "fan_driver.h"
#include "heater_driver.h"
#include "clock_driver.h"

int ActuatorManager_StartFan(void)
{
    if (HeaterDriver_Off() != 0)
    {
        return -1;
    }

    return FanDriver_On();
}

int ActuatorManager_StopFan(void)
{
    return FanDriver_Off();
}

int ActuatorManager_StartHeater(void)
{
    if (FanDriver_Off() != 0)
    {
        return -1;
    }

    return HeaterDriver_On();
}

int ActuatorManager_StopHeater(void)
{
    return HeaterDriver_Off();
}

int ActuatorManager_StopAll(void)
{
    int fanResult = FanDriver_Off();
    int heaterResult = HeaterDriver_Off();

    return (fanResult == 0 && heaterResult == 0) ? 0 : -1;
}

int ActuatorManager_CanStartFan(unsigned long lastStopTime,
                                unsigned int cooldownSeconds)
{
    unsigned long now = Clock_GetSeconds();
    return (now - lastStopTime) >= cooldownSeconds;
}
