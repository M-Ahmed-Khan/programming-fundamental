#include <stdio.h>

int main()
{
    int length, next, firstNum = 0, secondNum = 1;

    printf("---------FIBONACCI SERIES---------\n");

    printf("Enter the lentgh of fibonacci series: ");
    scanf("%d", &length);

    if (length == 0)
    {
        return 0;
    }

    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
        {
            printf("%d", firstNum);
        }
        else
        {
            printf("%d, ", firstNum);
        }

        next = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = next;
    }

    return 0;
}