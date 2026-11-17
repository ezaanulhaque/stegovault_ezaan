
#ifndef CRYPTO_H
#define CRYPTO_H

#include <stddef.h>

void xor_crypt(
    unsigned char *data,
    size_t data_len,
    const unsigned char *password,
    size_t password_len
);

#endif
