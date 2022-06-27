#include <stdio.h>

int main()
{
    int c;
    int res[52] = {0};
    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
        {
            res[c - 'A']++;
        }
        if (c >= 'a' && c <= 'z')
        {
            res[c - 'a' + 26]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (res[i] != 0)
        {
            printf("%c: %d\n", i + 'A', res[i]);
        }
    }
    for (int i = 26; i < 52; i++)
    {
        if (res[i] != 0)
        {
            printf("%c: %d\n", i + 'a' - 26, res[i]);
        }
    }
    return 0;
