#include <stdio.h>

int main()
{
    int numbers[10];
    int temp;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", numbers[i]);
    }

    return 0;
}