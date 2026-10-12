#include "sensor_manager.h"
#include "temperature_sensor.h"
#include "humidity_sensor.h"

int SensorManager_Read(SensorData *data)
{
    if (data == 0)
    {
        return -1;
    }

    data->temperature = 0.0f;
    data->humidity = 0.0f;

    data->temperatureValid =
        (TemperatureSensor_ReadCelsius(&data->temperature) == 0);

    data->humidityValid =
        (HumiditySensor_ReadPercent(&data->humidity) == 0);

    return 0;
}
