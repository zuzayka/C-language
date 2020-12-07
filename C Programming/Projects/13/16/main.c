#include <stdio.h>

#define MSG_LEN 80     /* maximum length of message */

void reverse(char *message);

int main(void)
{
  char msg[MSG_LEN];

  printf("Enter a message: ");
  fgets(msg, MSG_LEN, stdin);
  reverse(msg);

  return 0;
}

void reverse(char *message)
{
    char *p = "Any symbols";
    p = message;

    while(*message != '\0')
        message++;
    message = message - 2;

    while(message != p)
    {
        printf("%c", *message);
        message--;
    }
    printf("%c\n", *p);
    return;
}
