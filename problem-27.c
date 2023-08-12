#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char data[] = "Hello World";
    int maxCharsToRead = 100;
    char *line;

    file = fopen("binary-files/hello.bin", "wb");
    fwrite(data, sizeof(data), 11, file);
    fclose(file);

    file = fopen("binary-files/hello.bin", "rb");

    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    line = (char *)malloc(sizeof(char) * 11);

    fread(line, sizeof(char), 11, file);

    printf("%s", line);

    fclose(file);

    return 0;
}