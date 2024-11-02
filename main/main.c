#include "../headers/ft_encrypt.h"

int main(int argc, char **argv)
{
    /*if (argc != 3)
    {
        printf("Error ! The syntax is : ./exe_name \"key\" \"plaintext\"");
        return -1;
    }*/
    
    int *key_num = calloc(ft_true_len(argv[1]), sizeof(int));
    key_num = key_convert(argv[1]);
    
    int *long_key = calloc(ft_true_len(argv[2]), sizeof(int));
    int lkey_index = 0;
    int skey_index;

    while (lkey_index < ft_true_len(argv[2]))
    {
        skey_index = 0;
        while (skey_index < ft_true_len(argv[1]))
        {
            long_key[lkey_index] = key_num[skey_index];
            skey_index++;
            lkey_index++;
        }
    }
    
    int i = 0;
    while (i < ft_true_len(argv[2]))
    {
        printf("%d, ", long_key[i]);
        i++;
    }
}