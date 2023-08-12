#include <stdio.h>

int exponent(int number, int power)
{
    int exp = 1;
    for (int i = 0; i < power; i++)
    {
        exp *= number;
    }
    return exp;
}

int main()
{
    int number, sum = 0, numberOfDigits = 0;

    printf("---------ARMSTRONG NUMBERS---------\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNum = number;

    for (int copyOfNum = number; copyOfNum > 0; copyOfNum /= 10)
    {
        numberOfDigits++; // Calculating the number of digits
    }

    for (number; number != 0; number /= 10)
    {
        int digit = number % 10;
        sum += exponent(digit, numberOfDigits);
    }

    (sum == originalNum) ? printf("%d is an Armstrong number", originalNum) : printf("%d is not an Armstrong number", originalNum);

    return 0;
}