#include "../headers/key_crypt.h"

int main(int argc, char **argv)
{

    if (argc != 3)
    {
        printf("Error : this program takes 2 user arguments:\t ./EXE_NAME KEY \"PLAINTEXT\"\n");
        return -1;
    }

    printf("key : %s\tplaintext : %s\n", argv[1], argv[2]);
    int len = true_len(argv[2]);

    char *encrypted_message = argv[2];
    char *long_key = calloc(len + 1, sizeof(char));
    int *final_key = calloc(len, sizeof(int));

    final_key = keymaker(argv[2], argv[1], long_key, final_key);
    encrypted_message = ft_cipher(encrypted_message, final_key);

    printf("encrypted text : %s\n", encrypted_message);

    free(long_key);
    free(final_key);

    return 0;
}