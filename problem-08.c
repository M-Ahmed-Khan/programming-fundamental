#include <stdio.h>
// Takes a number as input and adds its digits

int main()
{
    int number, sum = 0, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (; number != 0; number /= 10)
    {
        lastDigit = number % 10;
        sum += lastDigit;
    }

    printf("The sum of its digits is %d", sum);

    return 0;
}