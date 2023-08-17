#include <stdio.h>
// Takes a number as input and prints its factorial

int factorial(int number)
{
    int fact = 1;
    for (int i = number; i > 0; i--)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The factorial of %d is %d", number, factorial(number));

    return 0;
}