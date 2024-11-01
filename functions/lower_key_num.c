#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int *lower_key_num(char *user_key)
{
    int index;
    int *lower_key;

    lower_key = (int*)calloc(strlen(user_key), sizeof(int));
    index = 0;
    while (user_key[index])
    {
        if islower(user_key[index])
            lower_key[index] = user_key[index] - 'a';
        index++;
    }
    return lower_key;
}

/*#include <stdio.h>

int main(void)
{
    char test[] = "abcXYZ";
    int len = strlen(test);
    int *key = (int*)calloc(len, sizeof(int));
    key = lower_key_num(test);

    int i = 0;
    while (i < len)
    {
        printf("%d, ", key[i]);
        i++;
    }

    free(key);
}*/