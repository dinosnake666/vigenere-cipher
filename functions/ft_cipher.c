#include <ctype.h>

char     *ft_cipher(char *message, int key)
{
    int     i;
    int     value; //to go beyond ascii max value

    i = 0;
    key = key % 26;
    while (message[i])
    {
        if (isupper(message[i]))
        {
            value = message[i] + key;
            if  (value > 'Z')
                value -= 26; //goes back from below
            if  (value < 'A')
                value += 26; //goes back from above
            message[i] = value; //re-assign after correction
        }
        
        if (islower(message[i]))
        {
            value = message[i] + key;
            if  (value > 'z')
                value -= 26; //goes back from below
            if  (value < 'a')
                value += 26; //goes back from above 
            message[i] = value; //re-assign after correction
        }
        i++;
    }
    return (message);    
}