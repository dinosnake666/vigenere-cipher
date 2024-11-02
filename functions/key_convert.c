#include "../headers/ft_encrypt.h"

int *key_convert(char *user_key)
{
    int index;
    int key_index;//to ignore non-alphabetical char in the key
    int *key_num;

    key_num = calloc(ft_true_len(user_key), sizeof(int));//calloc allows simple parsing and returning
    index = 0;
    key_index = 0;
    while (user_key[index])//ties a numerical value to each letter of the key
    {
        if isupper(user_key[index])
        {
            key_num[key_index] = user_key[index] - 'A';
            key_index++;
        }
        if islower(user_key[index])
        {
            key_num[key_index] = user_key[index] - 'a';
            key_index++;
        }
        index++;
    }
    return key_num;
}

/*#include <stdio.h>

int main(int argc, char **argv)
{
    int len = ft_true_len(argv[1]);
    int *key = (int*)calloc(len, sizeof(int));
    key = key_convert(argv[1]);

    int i = 0;
    while (i < len)
    {
        printf("%d, ", key[i]);
        i++;
    }

    free(key);
}*/