#include <stdio.h>

int main()
{
    int array[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter element %d of row %d: ", j + 1, i + 1);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j] > 10)
            {
                printf("%d  ", array[i][j]);
            }

            else
            {
                printf(" %d  ", array[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}