#ifndef CONFIG_H
#define CONFIG_H

typedef struct
{
    float targetTemperature;
    float temperatureTolerance;
    float maxTemperature;
    float minTemperature;
    float maxHumidity;
    unsigned int fanCooldownSeconds;
    unsigned int sensorFailureLimit;
} SystemConfig;

void Config_LoadDefaults(SystemConfig *config);

#endif
