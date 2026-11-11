
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int num, n;
    unsigned int mask;
    int count = 0;
    int width = sizeof(unsigned int) * CHAR_BIT;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter bit position (0 to %d): ", width - 1);
    scanf("%u", &n);

    if (n >= (unsigned int)width)
    {
        printf("Invalid bit position!\n");
        return 1;
    }

    // 1. Count set bits
    unsigned int temp = num;

    while (temp != 0)
    {
        count++;
        temp = temp & (temp - 1);
    }

    printf("\nOriginal number: %u\n", num);
    printf("Number of set bits: %d\n", count);

    // Create bit mask
    mask = 1u << n;

    // 2. Set bit
    printf("After setting bit %u: %u\n", n, num | mask);

    // 3. Clear bit
    printf("After clearing bit %u: %u\n", n, num & ~mask);

    // 4. Toggle bit
    printf("After toggling bit %u: %u\n", n, num ^ mask);

    return 0;
}
