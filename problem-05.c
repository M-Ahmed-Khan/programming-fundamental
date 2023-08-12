#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        (i < 1) ? printf("%d", number) : printf("\n%d", number);
    }

    return 0;
}