#include <stdio.h>

typedef struct
{
    char *name;
    int roll_number;
    float percentage;
} Student;

int main()
{
    Student students[5];

    printf("Enter data of 5 students:\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", &students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    printf("Name   Roll no   %c\n", 37); // 37 in ASCII = %

    for (int i = 0; i < 5; i++)
    {
        printf("%s\t %d      %.1f\n", students[i].name, students[i].roll_number, students[i].percentage);
    }

    return 0;
}
