#include <stdio.h>

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

    file = fopen("binary-files/student-data.bin", "wb");

    fwrite(data, sizeof(Student), 5, file);

    fclose(file);

    file = fopen("binary-files/student-data.bin", "rb");
    if (file == NULL)
    {
        printf("Failed to open the file for reading.\n");
        return 1;
    }

    Student students[5];

    fread(students, sizeof(Student), 5, file);

    printf("Name   Roll no   %c\n", 37);

    for (int i = 0; i < 5; i++)
    {
        printf("%s\t %d      %.1f\n", students[i].name, students[i].roll_number, students[i].percentage);
    }

    fclose(file);

    return 0;
}