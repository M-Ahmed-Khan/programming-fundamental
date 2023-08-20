#include <stdio.h>
// Takes a number as input and reverses its digits

int main()
{
    int number, reversedNumber = 0, lastDigit;

    printf("---------Reverse digits of a number---------\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    int displayNumber = number;

    for (number; number != 0; number /= 10)
    {
        lastDigit = number % 10;
        reversedNumber = (reversedNumber * 10) + lastDigit;
    }

    printf("%d reversed is %d", displayNumber, reversedNumber);
    return 0;
}