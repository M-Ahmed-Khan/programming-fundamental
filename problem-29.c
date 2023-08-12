#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int roll_number;
    float percentage;
} Student;

int main()
{
    FILE *file;
    Student data[5];

    printf("Enter data of 5 students:\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", &data[i].name);

        printf("Roll Number: ");
        scanf("%d", &data[i].roll_number);

        printf("Percentage: ");
        scanf("%f", &data[i].percentage);
    }

    file = fopen("text-files/student-data.txt", "w");

    for (int i = 0; i < 5; i++)
    {
        fprintf(file, "%s %d %.1f\n", data[i].name, data[i].roll_number, data[i].percentage);
    }

    fclose(file);

    file = fopen("text-files/student-data.txt", "r");

    if (file == NULL)
    {
        printf("Failed to open file");
        return 1;
    }

    Student students[5];

    for (int i = 0; i < 5; i++)
    {
        students[i].name = malloc(50 * sizeof(char));
        fscanf(file, "%s %d %f", students[i].name, &(students[i].roll_number), &(students[i].percentage));
    }

    printf("Name   Roll no   %c\n", 37);

    for (int i = 0; i < 5; i++)
    {
        printf("%s\t %d      %.1f\n", students[i].name, students[i].roll_number, students[i].percentage);
    }

    fclose(file);

    return 0;
}