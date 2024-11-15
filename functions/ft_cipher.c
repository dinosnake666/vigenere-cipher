#include <ctype.h>

char *ft_cipher(char *plaintext, int *key)
{

    int txt_index = 0;
    int key_index = 0;
    int value; //to go beyond ascii max value

    while (plaintext[txt_index])
    {
        if isupper(plaintext[txt_index])
        {
            value = plaintext[txt_index] + key[key_index];
            if  (value > 'Z')
                value -= 26; //goes back from after alphabeticals
            if  (value < 'A')
                value += 26; //goes back from before alphabeticals
            plaintext[txt_index] = value; //re-assign after correction
            key_index++;
        }
    
        if islower(plaintext[txt_index])
        {
            value = plaintext[txt_index] + key[key_index];
            if  (value > 'z')
                value -= 26; //goes back from after alphabeticals
            if  (value < 'a')
                value += 26; //goes back from before alphabeticals 
            plaintext[txt_index] = value; //re-assign after correction
            key_index++;
        }
        txt_index++;
    }
    
    return plaintext;
}