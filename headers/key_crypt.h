#ifndef key_crypt
#define key_crypt

char *keymaker(char *message, char *user_key, char *final_key);
int true_len(char *key_user);
char *ft_cipher(char *message, int key);

#endif