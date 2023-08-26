#include <stdio.h>
// Uses parallel arrays to show names, roll numbers and percentages of 5 students

int main()
{
    char names[5][30];
    int roll_numbers[5];
    float percentages[5];

    printf("Enter data of 5 students:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", &names[i]);

        printf("Roll Number: ");
        scanf("%d", &roll_numbers[i]);

        printf("Percentage: ");
        scanf("%f", &percentages[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nName: %s", names[i]);
        printf("\nRoll number: %d", roll_numbers[i]);
        printf("\nPercentage: %.2f\n", percentages[i]); // A \n at the end so the data of 1 student is spaced from the other
    }
    return 0;
}