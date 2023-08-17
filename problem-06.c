#include <stdio.h>
// Takes two numbers as input and prints the table of the first number upto the second number

int main()
{
    int number_1, number_2;

    printf("Enter the first number: ");
    scanf("%d", &number_1);

    printf("Enter the second number: ");
    scanf("%d", &number_2);

    for (int i = 0; i < number_2; i++)
    {
        printf("%d x %d = %d\n", number_1, i, number_1 * i);
    }

    return 0;
}