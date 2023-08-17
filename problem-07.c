#include <stdio.h>

int factorial(int number)
{
    int fact = 1;

    for (int i = number; i > 0; i--)
    {
        fact *= i;
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The factorial of %d is %d", number, factorial(number));

    return 0;
}