#include <stdio.h>

#define MAX_VALUE 80

void encript(char *message, int shift);

int main(void)
{

    char sentence[MAX_VALUE] = {0};
    int n;

    printf("Enter message to be encrypted: ");
    fgets(sentence, MAX_VALUE, stdin);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);
    printf("Encrypted message: ");
    encript(sentence, n);
    puts(sentence);
    return 0;
}

void encript(char *message, int shift)
{
    while(*message != '\0')
    {
        if(*message >= 'A'  && *message <= 'Z')
            *message = (*message  - 'A' + shift) % 26 + 'A';
        if(*message >= 'a'  && *message <= 'z')
            *message = (*message  - 'a' + shift) % 26 + 'a';
        message++;
    }
    *message = '\0';
}
