#include "config.h"

void Config_LoadDefaults(SystemConfig *config)
{
    if (config == 0)
    {
        return;
    }

    config->targetTemperature = 22.0f;
    config->temperatureTolerance = 2.0f;
    config->maxTemperature = 40.0f;
    config->minTemperature = 5.0f;
    config->maxHumidity = 80.0f;
    config->fanCooldownSeconds = 30U;
    config->sensorFailureLimit = 3U;
}
