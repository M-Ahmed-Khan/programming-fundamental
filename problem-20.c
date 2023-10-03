#include <stdio.h>

/* 
 * Declares two arrays of float type of size 10, takes input from user in both arrays
 * and determines if there is any element in array 1 which has smaller value than any
 * of the element in array 2 
 */

/**
 * Takes input in a float array.
 *
 * This function takes an address to a float array and the array length as input
 * and captures user input in each of the array indices.It does not handle overflow
 * or error cases.
 *
 * @param array The address to the array in which the input has to be stored.
 * @param length The length of the array which is to be populated with input.
 *
 * @return void.
 */
void inputFloatArray(float *array, int length) 
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter a number(Element #%d): ", i + 1);
        scanf("%f", &array[i]);
    }
}

int main()
{
    const int arrayLength = 10;
    float array1[arrayLength], array2[arrayLength];
    int noOfElementsSmaller = 0;

    printf("Enter 10 numbers(floating point): \n");
    inputFloatArray(array1, arrayLength);

    printf("\nEnter 10 more numbers: ");
    inputFloatArray(array2, arrayLength);

    for (int i = 0; i < arrayLength; i++)
    {
        for (int j = 0; j < arrayLength; j++)
        {
            if (array1[i] < array2[j])
            {
                noOfElementsSmaller++;
                break;
            }
        }
    }

    printf("%d elements of array 1 are smaller than any of the elements in array 2", noOfElementsSmaller);

    return 0;
}