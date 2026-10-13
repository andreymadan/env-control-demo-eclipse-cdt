#include "humidity_sensor.h"

int HumiditySensor_ReadPercent(float *humidity)
{
    static float simulatedHumidity = 45.0f;

    if (humidity == 0)
    {
        return -1;
    }

    *humidity = simulatedHumidity;
    simulatedHumidity += 1.0f;

    if (simulatedHumidity > 85.0f)
    {
        simulatedHumidity = 40.0f;
    }

    return 0;
}
