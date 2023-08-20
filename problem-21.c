#include <stdio.h>
// Uses parallel arrays to show names, roll numbers and percentages of 5 students

int main()
{
    char names[5][30];
    int roll_numbers[5];
    float percentages[5];

    printf("Enter data of 5 students:\n\n");

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

    printf("Name   Roll no   %c\n", 37);

    for (int i = 0; i < 5; i++)
    {
        printf("%s\t %d      %.1f\n", names[i], roll_numbers[i], percentages[i]);
    }
    return 0;
}