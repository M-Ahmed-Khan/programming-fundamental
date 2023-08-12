#include <stdio.h>

int main()
{
    int number, lastDigit, reversedNumber = 0;

    printf("---------PALINDROME NUMBERS---------\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNumber = number;

    for (number; number != 0; number /= 10)
    {
        lastDigit = number % 10;
        reversedNumber = (reversedNumber * 10) + lastDigit;
    }

    (reversedNumber == originalNumber) ? printf("%d is a palindrome number", originalNumber) : printf("%d is not a palindrome number", originalNumber);

    return 0;
}