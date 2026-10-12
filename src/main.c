#include <stdio.h>
#include "controller.h"
#include "config.h"
#include "clock_driver.h"
#include "fan_driver.h"
#include "heater_driver.h"

static const char *State_ToString(SystemState state)
{
    switch (state)
    {
        case SYSTEM_IDLE:
            return "IDLE";
        case SYSTEM_HEATING:
            return "HEATING";
        case SYSTEM_COOLING:
            return "COOLING";
        case SYSTEM_ALARM:
            return "ALARM";
        default:
            return "UNKNOWN";
    }
}

int main(void)
{
    SystemConfig config;
    Controller controller;
    unsigned int cycle;

    Config_LoadDefaults(&config);
    Controller_Init(&controller, &config);

    printf("Environmental Control Demo\n");
    printf("Target: %.1f C, tolerance: +/- %.1f C\n\n",
           config.targetTemperature,
           config.temperatureTolerance);

    for (cycle = 0U; cycle < 20U; ++cycle)
    {
        Controller_RunCycle(&controller);

        printf("Cycle %02u: state=%-8s fan=%s heater=%s\n",
               cycle + 1U,
               State_ToString(Controller_GetState(&controller)),
               FanDriver_IsOn() ? "ON" : "OFF",
               HeaterDriver_IsOn() ? "ON" : "OFF");

        Clock_DelayMs(250U);
    }

    return 0;
}
