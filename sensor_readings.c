
#include <stdio.h>

struct Sensor {
    int id;
    float value;
    char timestamp[30];
    char status[20];
};

int main() {
    struct Sensor readings[10];
    float sum = 0, average;
    float min, max;

    // Input 10 sensor readings
    for (int i = 0; i < 10; i++) {
        printf("\nEnter details for Sensor %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &readings[i].id);

        printf("Value: ");
        scanf("%f", &readings[i].value);

        printf("Timestamp: ");
        scanf("%29s", readings[i].timestamp);

        printf("Status: ");
        scanf("%19s", readings[i].status);

        sum += readings[i].value;
    }

    // Initialize minimum and maximum
    min = max = readings[0].value;

    // Calculate minimum and maximum
    for (int i = 0; i < 10; i++) {
        if (readings[i].value < min)
            min = readings[i].value;

        if (readings[i].value > max)
            max = readings[i].value;
    }

    average = sum / 10;

    // Display sensor readings
    printf("\n--- SENSOR READINGS ---\n");

    for (int i = 0; i < 10; i++) {
        printf("\nID: %d", readings[i].id);
        printf("\nValue: %.2f", readings[i].value);
        printf("\nTimestamp: %s", readings[i].timestamp);
        printf("\nStatus: %s\n", readings[i].status);
    }

    // Display results
    printf("\n--- SENSOR STATISTICS ---\n");
    printf("Average Value = %.2f\n", average);
    printf("Minimum Value = %.2f\n", min);
    printf("Maximum Value = %.2f\n", max);
for (int i = 0; i < 10; i++) {
    printf("\nEnter Sensor ID: ");
    scanf("%d", &readings[i].id);

    printf("Enter Sensor Value: ");
    scanf("%f", &readings[i].value);

    printf("Enter Timestamp: ");
    scanf("%29s", readings[i].timestamp);

    printf("Enter Status: ");
    scanf("%19s", readings[i].status);
}
    return 0;
}

