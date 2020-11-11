void get_extention(const char *file_name, char *extention)
{
    int i = strlen(file_name);
    file_name = file_name + i;
    while(*file_name != '.')
        file_name--;
    file_name++;
    strcpy(extention, file_name);
}
