#include <stdio.h>

int main()
{
    float array_1[10], array_2[10];
    int flag = 0;

    printf("Enter 10 numbers(floating point): ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f, ", &array_1[i]);
    }

    printf("Enter 10 more numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f, ", &array_2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array_1[i] < array_2[j])
            {
                flag++;
            }
        }
    }

    printf("%d elements of array 1 are smaller than any of the elements in array 2", flag);

    return 0;
}