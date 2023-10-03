#include <stdio.h>

// Takes 10 inputs from user and stores them in array and prints them

int main()
{
    const int arrayLength = 10;
    int numbers[arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        printf("Enter a number(Element #%d): ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d\t", numbers[i]);
    }

    return 0;
}