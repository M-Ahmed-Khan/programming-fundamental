#include <stdio.h>

// Takes a number as input and determines whether it is an Armstrong number or not

/**
 * Raises a given number to a given power.
 *
 * This function takes two integers as input, raises the number to the power,
 * and returns the result as an integer. It performs basic exponentiation and
 * does not handle overflow or error cases.
 *
 * @param number The number which is to be raised to the power.
 * @param power The power to which the number is raised .
 *
 * @return The number raised to the power.
 */
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
    int number, sum = 0, digitsCount = 0;

    printf("---------ARMSTRONG NUMBERS---------\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNum = number;

    // Calculating the number of digits
    for (int num = number; num > 0; num /= 10)
    {
        digitsCount++; 
    }

    for (number; number != 0; number /= 10)
    {
        int digit = number % 10;
        sum += exponent(digit, digitsCount);
    }

    sum == originalNum ? printf("%d is an Armstrong number", originalNum) : printf("%d is not an Armstrong number", originalNum);

    return 0;
}