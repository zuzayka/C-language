#include <stdio.h>
#include <ctype.h> /* toupper */
#include <stdbool.h>

#define N 40

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char s1[N + 1] = {"\0"}, s2[N + 1] = {"\0"};

    printf("Enter first word: ");
    fgets(s1, N + 1, stdin);
    printf("Enter second word: ");
    fgets(s2, N + 1, stdin);
    if(are_anagrams(s1, s2))
    {
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;}


bool are_anagrams(const char *word1, const char *word2)
{
    int w1[26] = {0}, w2[26] = {0}, i, j, k = 0;
    while(*word1 != '\0' && *word2 != '\0' && k++ < N)
    {
        i = toupper(*word1) - 'A';
        w1[i]++;
        j = toupper(*word2) - 'A';
        w2[j]++;
        word1++;
        word2++;
    }
    for(i = 0; i < 26; i++)
    {
        if(w1[i] - w2[i] != 0)
            return false;
    }
    return true;
}
