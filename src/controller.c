#include "controller.h"
#include "sensor_manager.h"
#include "actuator_manager.h"
#include "alarm_manager.h"
#include "clock_driver.h"

void Controller_Init(Controller *controller, const SystemConfig *config)
{
    if (controller == 0 || config == 0)
    {
        return;
    }

    controller->config = *config;
    controller->state = SYSTEM_IDLE;
    controller->consecutiveSensorFailures = 0U;
    controller->lastFanStopTime = 0UL;
}

void Controller_RunCycle(Controller *controller)
{
    SensorData sensors;

    if (controller == 0)
    {
        return;
    }

    if (SensorManager_Read(&sensors) != 0)
    {
        return;
    }

    if (!sensors.temperatureValid)
    {
        controller->consecutiveSensorFailures++;

        if (controller->consecutiveSensorFailures >=
            controller->config.sensorFailureLimit)
        {
            ActuatorManager_StopAll();
            AlarmManager_Activate(ALARM_SENSOR_FAILURE);
            controller->state = SYSTEM_ALARM;
        }
        return;
    }

    controller->consecutiveSensorFailures = 0U;

    if (sensors.temperature > controller->config.maxTemperature)
    {
        ActuatorManager_StopHeater();
        ActuatorManager_StartFan();
        AlarmManager_Activate(ALARM_OVER_TEMPERATURE);
        controller->state = SYSTEM_ALARM;
        return;
    }

    if (sensors.humidityValid &&
        sensors.humidity > controller->config.maxHumidity)
    {
        AlarmManager_Activate(ALARM_HIGH_HUMIDITY);
        controller->state = SYSTEM_ALARM;
        return;
    }

    if (sensors.temperature <
        controller->config.targetTemperature -
        controller->config.temperatureTolerance)
    {
        ActuatorManager_StartHeater();
        controller->state = SYSTEM_HEATING;
        return;
    }

    if (sensors.temperature >
        controller->config.targetTemperature +
        controller->config.temperatureTolerance)
    {
        if (ActuatorManager_CanStartFan(
                controller->lastFanStopTime,
                controller->config.fanCooldownSeconds))
        {
            ActuatorManager_StartFan();
            controller->state = SYSTEM_COOLING;
        }
        return;
    }

    if (controller->state == SYSTEM_COOLING)
    {
        controller->lastFanStopTime = Clock_GetSeconds();
    }

    ActuatorManager_StopAll();
    AlarmManager_Clear();
    controller->state = SYSTEM_IDLE;
}

SystemState Controller_GetState(const Controller *controller)
{
    if (controller == 0)
    {
        return SYSTEM_ALARM;
    }

    return controller->state;
}
