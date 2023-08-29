#include <stdio.h>
/* Declares two arrays of float type of size 10, takes input from user in both arrays
and determines if there is any element in array 1 which has smaller value than any
 of the element in array 2 */

int main()
{
    float array_1[10], array_2[10];
    int no_of_elements_smaller = 0;

    printf("Enter 10 numbers(floating point): \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number(Element #%d): ", i + 1);
        scanf("%f", &array_1[i]);
    }

    printf("\nEnter 10 more numbers: ");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number(Element #%d): ", i + 1);
        scanf("%f, ", &array_2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array_1[i] < array_2[j])
            {
                no_of_elements_smaller++;
                break;
            }
        }
    }

    printf("%d elements of array 1 are smaller than any of the elements in array 2", no_of_elements_smaller);

    return 0;
}