#include <stdio.h>

// Creates an array of 10 elements and assigns 0 to each element using a loop

int main()
{
    const int arrayLength = 10;
    int numbers[arrayLength] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < arrayLength; i++)
    {
        numbers[i] = 0;
    }

    return 0;
}