#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

typedef struct
{
    float temperature;
    float humidity;
    int temperatureValid;
    int humidityValid;
} SensorData;

int SensorManager_Read(SensorData *data);

#endif
