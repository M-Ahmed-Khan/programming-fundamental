#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    int sizeOfArray, numberToSearch;
    int *array;
    bool flag = false;

    printf("Enter the size of array: ");
    scanf("%d", &sizeOfArray);

    array = (int *)malloc(sizeOfArray * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < sizeOfArray; i++)
    {
        array[i] = rand() % 10;
    }

    printf("Putting random values in array...\n");

    printf("What to search in array: ");
    scanf("%d", &numberToSearch);

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (array[i] == numberToSearch)
        {
            printf("Element number %d is %d\n", i + 1, numberToSearch);
            flag = true;
        }
    }

    if (!flag)
    {
        printf("%d does not exist in array", numberToSearch);
    }

    free(array);

    return 0;
}