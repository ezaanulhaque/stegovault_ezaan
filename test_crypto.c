
#include <stdio.h>
#include <string.h>
#include "crypto.h"

int main(void)
{
    unsigned char message[] = "HELLO";
    unsigned char password[] = "KEY";

    size_t message_len = strlen((char *)message);
    size_t password_len = strlen((char *)password);

    printf("Original message: %s\n", message);

    xor_crypt(message, message_len, password, password_len);

    printf("Encrypted message: ");

    for (size_t i = 0; i < message_len; i++)
    {
        printf("%02X ", message[i]);
    }

    printf("\n");

    xor_crypt(message, message_len, password, password_len);

    printf("Decrypted message: %s\n", message);

    return 0;
}
