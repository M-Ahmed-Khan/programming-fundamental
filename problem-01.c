#include <stdio.h>
// Takes two numbers as input and adds them

int main()
{
    int number_1, number_2;

    printf("Enter the first number: ");
    scanf("%d", &number_1);

    printf("Enter the second number: ");
    scanf("%d", &number_2);

    printf("The sum of %d and %d is %d", number_1, number_2, number_1 + number_2);

    return 0;
}