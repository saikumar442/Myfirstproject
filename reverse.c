// Program to reverse a string
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    scanf("%99s", str);

    // Find string length manually
    for (i = 0; str[i] != '\0'; i++);

    // Reverse the string in place
    i = 0;
    j = j = 0;
    while (str[j] != '\0')
    {
        j++;
    }
    j--;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}