#include <stdio.h>
// Takes a number as input and prints its table upto 10

int main()
{
    int number;

    printf("Enter the number whose table is to be printed: ");
    scanf("%d", &number);

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}