
#include <stdio.h>
#include "sensor.h"

void calculateStatistics(
    SensorReading readings[],
    int size,
    float *average,
    float *min,
    float *max
) {
    float sum = 0;

    *min = readings[0].value;
    *max = readings[0].value;

    for (int i = 0; i < size; i++) {
        sum += readings[i].value;

        if (readings[i].value < *min) {
            *min = readings[i].value;
        }

        if (readings[i].value > *max) {
            *max = readings[i].value;
        }
    }

    *average = sum / size;
}
