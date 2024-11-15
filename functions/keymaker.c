#include "../headers/key_crypt.h"

int *keymaker(char *plaintext, char *user_key, char *long_key, int *final_key) //makes the final_key to encrypt plaintext
{
  int final_size = true_len(plaintext);

  int long_index = 0;
  int user_index = 0;
  while (long_index < final_size) //creates the long_key and ignores non-alpha char in user_key and plaintext
  {
    if isalpha(user_key[user_index])
    {
      long_key[long_index] = user_key[user_index];
      long_index++;
    }

    user_index++;

    if (!(user_key[user_index]))
      user_index = 0;
  }
  
  int final_index = 0;
  while (final_index < final_size) //creates the final_key
  {
    if isupper(long_key[final_index])
      final_key[final_index] = long_key[final_index] - 'A';
    if islower(long_key[final_index])
      final_key[final_index] = long_key[final_index] - 'a';
    final_index++;
  }
  

  return final_key;
}


/*// ! don't forget to calloc in main/main.c !

int main(void)
{
  char user_key[] = "z  3ea3k";

  char plaintext[] = "B2323km er A m";

  char *long_key = calloc(true_len(plaintext) + 1, sizeof(char));
  int *final_key = calloc(true_len(plaintext), sizeof(int));

  //printf("user_key : %s\tlong_key : %s\n", user_key, keymaker(plaintext, user_key, long_key, final_key));

  final_key = keymaker(plaintext, user_key, long_key, final_key);
  int i = 0;
  while (i < true_len(plaintext))
  {
    printf("%d, ", final_key[i]);
    i++;
  }
  printf("\nnºelem plaintext : %d\t nºelem final_key : %d\n", true_len(plaintext), i);

  free(long_key);
  free(final_key);

  return 0;
}*/