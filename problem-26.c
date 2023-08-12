#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("text-files/hello.txt", "w");
    fprintf(file, "Hello World");
    fclose(file);

    file = fopen("text-files/hello.txt", "r");

    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    int maxCharsToRead = 100;
    char line[maxCharsToRead];

    fgets(line, maxCharsToRead, file);

    printf("%s", line);
    fclose(file);

    return 0;
}