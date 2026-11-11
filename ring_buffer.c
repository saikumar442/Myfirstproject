
#include <stdio.h>

#define SIZE 8

int main() {
    float buffer[SIZE];
    int next = 0;
    int count = 0;
    int n;

    printf("RING BUFFER - LAST 8 SENSOR READINGS\n");

    printf("How many readings do you want to enter? ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid number of readings.\n");
        return 1;
    }

    // Insert readings into ring buffer
    for (int i = 0; i < n; i++) {
        float value;

        printf("Enter reading %d: ", i + 1);

        if (scanf("%f", &value) != 1) {
            printf("Invalid sensor reading.\n");
            return 1;
        }

        buffer[next] = value;

        next = (next + 1) % SIZE;

        if (count < SIZE) {
            count++;
        }
    }

    // Display the last 8 readings
    printf("\n--- LAST 8 SENSOR READINGS ---\n");

    int start = (next - count + SIZE) % SIZE;

    for (int i = 0; i < count; i++) {
        int index = (start + i) % SIZE;
        printf("%.2f\n", buffer[index]);
    }

    printf("\nTotal readings stored: %d\n", count);

    return 0;
}
