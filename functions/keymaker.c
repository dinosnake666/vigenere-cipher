#include "../headers/key_crypt.h"
#include <string.h>
#include <ctype.h>

char *keymaker(char *message, char *user_key, char *final_key) //makes a long key to use with message
{
  int user_size = strlen(user_key);
  int final_size = true_len(message);

  int final_index = 0;
  int user_index = 0;

  while (final_index < final_size)
  {
    final_key[final_index] = user_key[user_index];
    final_index++;
    user_index++;
    if (!(user_key[user_index]))
      user_index = 0;
  }
  
  return final_key;
}


/*#include <stdio.h>
#include <stdlib.h> // ! don't forget to calloc in main !

int main(void)
{
  char user_key[] = "za";

  char message[] = "B";

  char *final_key = calloc(true_len(message) + 1, sizeof(char));

  printf("user_key : %s\tfinal_key : %s\n", user_key, keymaker(message, user_key, final_key));
  printf("nºelem message : %lu\t nºelem final_key : %lu\n", true_len(message), strlen(final_key));

  free(final_key);
  return 0;
}*/