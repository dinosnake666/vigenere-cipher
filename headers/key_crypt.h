#ifndef key_crypt
#define key_crypt

int *keymaker(char *plaintext, char *user_key, char *long_key, int *final_key);
int true_len(char *str);
char *ft_cipher(char *plaintext, int *key);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#endif