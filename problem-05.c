#include <stdio.h>
// Takes a number as input and prints it that many times

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        printf("%d\n", number);
    }

    return 0;
}