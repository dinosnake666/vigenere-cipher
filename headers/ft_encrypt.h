#ifndef ft_encrypt
#define ft_encrypt

char     *ft_cipher(char *message, int key);
int *key_convert(char *user_key);
int ft_true_len(char *str);

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#endif