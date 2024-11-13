#include <ctype.h>

int true_len(char *str) //returns amount of alphabetical char
{
    int index = 0;
    int true_len = 0;
    while (str[index])
    {
        if isalpha(str[index])
            true_len++;
        index++;
    }
    return true_len;
}