#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d", number);
    }

    return 0;
}