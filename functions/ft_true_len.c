#include <ctype.h>

int ft_true_len(char *str) //ignores non-alphabetical char in key to allocate exact size
{
    int index;
    int len;

    index = 0;
    len = 0;
    while (str[index])
    {
        if isalpha(str[index])
            len++;
        index++;
    }
    return len;
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
    printf("Amount of alphabetical characters in str : %d\n", ft_true_len(argv[1]));
    return 0;
}*/