#include <stdio.h>

// Uses parallel arrays to show names, roll numbers and percentages of 5 students

int main()
{
    const int numberOfStudents = 5;
    const int maxNameLength = 30;
    char names[numberOfStudents][maxNameLength];
    int rollNumbers[numberOfStudents];
    float percentages[numberOfStudents];

    printf("Enter data of %d students:\n", numberOfStudents);

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", &names[i]);

        printf("Roll Number: ");
        scanf("%d", &rollNumbers[i]);

        printf("Percentage: ");
        scanf("%f", &percentages[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nName: %s", names[i]);
        printf("\nRoll number: %d", rollNumbers[i]);
        printf("\nPercentage: %.2f", percentages[i]);
        printf("\n");
    }
    return 0;
}