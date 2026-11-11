
#ifndef SENSOR_H
#define SENSOR_H

typedef struct {
    int id;
    float value;
    char timestamp[20];
    char status[20];
} SensorReading;

// Function declarations
void calculateStatistics(
    SensorReading readings[],
    int size,
    float *average,
    float *min,
    float *max
);

#endif
