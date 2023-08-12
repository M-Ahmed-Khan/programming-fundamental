#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
    bool isPrime = true;

    printf("---------PRIME NUMBERS---------\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        isPrime = false;
    }

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    (isPrime) ? printf("%d is a prime number", number) : printf("%d is not a prime number", number);

    return 0;
}