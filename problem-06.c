#include <stdio.h>

int main()
{
    int number_1, number_2;

    printf("Enter the first number: ");
    scanf("%d", &number_1);

    printf("Enter the second number: ");
    scanf("%d", &number_2);

    for (int i = 1; i <= number_2; i++)
    {
        printf("%d x %d = %d\n", number_1, i, number_1 * i);
    }

    return 0;
}