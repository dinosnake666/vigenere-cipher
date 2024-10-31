#include <stdlib.h>
#include <stdio.h>
//#include <string.h>

int main(void)
{
    char *key_alphabet[2];
    int filler;
    char upper, lower;

    key_alphabet[0] = (char*)calloc(27, sizeof(char));
    key_alphabet[1] = (char*)calloc(27, sizeof(char));

    filler = 0;
    upper = 'A';
    while (filler < 26)
    {
        key_alphabet[0][filler] = upper;
        upper++;
        filler++;
    }
    
    filler = 0;
    lower = 'a';
    while (filler < 26)
    {
        key_alphabet[1][filler] = lower;
        lower++;
        filler++;
    }

    printf("Uppercase : %s\n", key_alphabet[0]);
    printf("Lowercase : %s\n", key_alphabet[1]);

    free(key_alphabet[0]);
    free(key_alphabet[1]);
    return 0;
}