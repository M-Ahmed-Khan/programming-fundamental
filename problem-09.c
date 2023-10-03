#include <stdio.h>

// Prints fibonacci series of a given length

int main()
{
    int length, sum, firstNum = 0, secondNum = 1;

    printf("---------FIBONACCI SERIES---------\n");

    printf("Enter the length of fibonacci series: ");
    scanf("%d", &length);

    if (length == 0)
    {
        return 0;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d", firstNum);
        if (i != length - 1)
        {
            printf(", ");
        }

        sum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = sum;
    }

    return 0;
}