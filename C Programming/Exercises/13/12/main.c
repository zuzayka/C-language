#include <stdio.h>
#include<string.h>

void get_extention(const char *file_name, char *extention);

int main()
{
    const char fn[] = {"memo.txt.html"};
    char ext[] = {""};
    get_extention(fn, ext);
    printf("Extention = %s\n", ext);
    return 0;
}

void get_extention(const char *file_name, char *extention)
{
    int i = strlen(file_name);
    file_name = file_name + i;
    while(*file_name != '.')
        file_name--;
    file_name++;
    strcpy(extention, file_name);
}
