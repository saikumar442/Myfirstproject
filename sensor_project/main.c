
#include <stdio.h>
#include "sensor.h"

int main() {

    SensorReading readings[10] = {
        {1, 25.5, "09:00:00", "Normal"},
        {2, 28.0, "09:01:00", "Normal"},
        {3, 30.5, "09:02:00", "Normal"},
        {4, 22.0, "09:03:00", "Normal"},
        {5, 35.5, "09:04:00", "High"},
        {6, 27.5, "09:05:00", "Normal"},
        {7, 20.0, "09:06:00", "Low"},
        {8, 32.0, "09:07:00", "Normal"},
        {9, 29.5, "09:08:00", "Normal"},
        {10, 26.0, "09:09:00", "Normal"}
    };

    float average, min, max;

    printf("SENSOR READINGS\n");
    printf("-------------------------------\n");

    for (int i = 0; i < 10; i++) {
        printf("ID: %d | Value: %.2f | Time: %s | Status: %s\n",
            readings[i].id,
            readings[i].value,
            readings[i].timestamp,
            readings[i].status
        );
    }

    calculateStatistics(
        readings, 10, &average, &min, &max
    );

    printf("\nSENSOR STATISTICS\n");
    printf("-------------------------------\n");
    printf("Average Value: %.2f\n", average);
    printf("Minimum Value: %.2f\n", min);
    printf("Maximum Value: %.2f\n", max);

    return 0;
}
