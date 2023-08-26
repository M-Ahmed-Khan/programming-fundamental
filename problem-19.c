#include <stdio.h>
// Takes 10 inputs from user and computes highest, lowest and average

int main()
{
    int numbers[10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number(Element #%d): ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // ------------Highest------------

    int greatest = numbers[0];

    for (int i = 0; i < 10; i++)
    {
        if (greatest < numbers[i])
        {
            greatest = numbers[i];
        }
    }

    printf("The greatest number is %d\n", greatest);

    // ------------Lowest------------

    int lowest = numbers[0];

    for (int i = 0; i < 10; i++)
    {
        if (lowest > numbers[i])
        {
            lowest = numbers[i];
        }
    }

    printf("The lowest number is %d\n", lowest);

    // ------------Average------------
    for (int i = 0; i < 10; i++)
    {
        sum += numbers[i];
    }

    printf("The average is %d", sum / 10);

    return 0;
}