#include <stdio.h>
#include<string.h>

void get_extension(const char *file_name, char *extension);

int main()
{
    const char fn[] = {"memo.txt.html"};
    char ext[] = {""};
    get_extension(fn, ext);
    printf("Extension = %s\n", ext);
    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    int i = strlen(file_name);
    file_name = file_name + i;
    while(*file_name != '.')
        file_name--;
    file_name++;
    strcpy(extension, file_name);
}
