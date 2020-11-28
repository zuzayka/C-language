#include <stdio.h>
#include <ctype.h>
#define N 80

int compute_vowel_count(const char *sentence);

int main(void) {

    char s[N];
    printf("Enter a sentence: ");
    fgets(s, N, stdin);
    printf("Your sentence contains %d vowels.\n", compute_vowel_count(s));
    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int numlet[26] = {0}, i, sumvow = 0;
    numlet[0] = numlet[4] = numlet[8] = numlet[14] = numlet[20] = numlet[24] = 1;
    while(*sentence != '\n')
    {
        i = toupper(*sentence) - 'A';
        if(i >= 0)
            sumvow += numlet[i];
        sentence++;
    }
    return sumvow;
}
