

## Exercise 13.12
__Write the following function:__

```c
void get_extension(const char *file_name, char *extension);
```
`file_name` points to a string containing a file name. The function should store the extension on the file name in the string pointed to by extension. For example, if the file name is `"memo.txt"`, the function will store `"txt"` in the string pointed to by extension. If the file name doesn't have an extension, the function should store an empty string (a single null character) in the string pointed to by extension. Keep the function as simple as possible by having it use the strlen and strcpy functions.ull character) in the string pointed to by extension. Keep the function as simple as possible by having it use the strlen and strcpy functions.
	
```c
	  
void get_extention(const char *file_name, char *extension)
{
    int i = strlen(file_name);
    file_name = file_name + i;
    while(*file_name != '.')
        file_name--;
    file_name++;
    strcpy(extension, file_name);
}
```
