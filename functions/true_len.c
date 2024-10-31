#include <ctype.h>

int true_len(char *key_user)
{
    int index = 0;
    int true_len = 0;
    while (key_user[index])
    {
        if isalpha(key_user[index])
            true_len++;
        index++;
    }
    return true_len;
}