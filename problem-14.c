#include <stdio.h>

int main()
{
    int size, i, j;

    printf("---------DIAMOND FROM ASTERISKS---------\n");

    printf("Enter the size of diamond: ");
    scanf("%d", &size);

    int gap = size - 1;

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= gap; j++)
        {
            printf(" ");
        }

        gap--;

        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    gap = 1;

    for (i = size - 1; i > 0; i--)
    {
        for (j = 0; j < gap; j++)
        {
            printf(" ");
        }

        gap++;

        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}