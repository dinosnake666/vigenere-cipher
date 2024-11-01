#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int *upper_key_num(char *user_key)
{
    int index;
    int *upper_key;

    upper_key = (int*)calloc(strlen(user_key), sizeof(int));
    index = 0;
    while (user_key[index])
    {
        if isupper(user_key[index])
            upper_key[index] = user_key[index] - 'A';
        index++;
    }
    return upper_key;
}

/*#include <stdio.h>

int main(void)
{
    char test[] = "abcXYZ";
    int len = strlen(test);
    int *key = (int*)calloc(len, sizeof(int));
    key = upper_key_num(test);

    int i = 0;
    while (i < len)
    {
        printf("%d, ", key[i]);
        i++;
    }

    free(key);
}*/