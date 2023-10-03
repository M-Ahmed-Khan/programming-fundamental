#include <stdio.h>

// Prints a diamond made of asterisks(*) of a specified size

int main()
{
    int size;

    printf("---------DIAMOND FROM ASTERISKS---------\n");

    printf("Enter the size of diamond: ");
    scanf("%d", &size);

    // a variable that keeps track of the gaps need to be inserted
    int gap = size - 1;

    // Making the upper half of the diamond
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= gap; j++)
        {
            printf(" ");
        }

        gap--;

        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // now setting the gap to 1 and it will increase iteratively
    gap = 1;

    // Making the lower half of the diamond
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < gap; j++)
        {
            printf(" ");
        }

        gap++;

        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}