#include "../headers/functions.h"

int *key_processing(char *key_user)
{
    int index, key_index;
    int len = true_len(key_user);
    int *key_number = (int*)malloc(len * sizeof(int));

    index = 0;
    key_index = 0;
    while (key_user[index])
    {
        if islower(key_user[index])
        {
            key_number[key_index] = key_user[index] - 'a';
            key_index++;
        }
        if isupper(key_user[index])
        {
            key_number[key_index] = key_user[index] - 'A';
            key_index++;
        }
        index++;
    }
    
    return key_number;
}

int main(void)
{
    char test[] = "AbcD";
    int *array = key_processing(test);
    free(array);
    return 0;
}