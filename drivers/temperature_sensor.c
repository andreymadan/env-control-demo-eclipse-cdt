#include "temperature_sensor.h"

int TemperatureSensor_ReadCelsius(float *temperature)
{
    static float simulatedTemperature = 21.0f;

    if (temperature == 0)
    {
        return -1;
    }

    *temperature = simulatedTemperature;

    simulatedTemperature += 0.4f;
    if (simulatedTemperature > 27.0f)
    {
        simulatedTemperature = 18.0f;
    }

    return 0;
}
