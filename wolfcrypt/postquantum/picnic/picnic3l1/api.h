#ifndef PICNIC3_L1_FS_API_H
#define PICNIC3_L1_FS_API_H

 /* Modified by George Tasopoulos - ISI / Athena RC
  * in order to be used in TLS 1.3.
  */

#define CRYPTO_SECRETKEYBYTES (1 + 2 * 17 + 17)
#define CRYPTO_PUBLICKEYBYTES (1 + 2 * 17)
#define CRYPTO_BYTES (4 + 14608)
#define CRYPTO_ALGNAME "picnic3l1fs"
#define CRYPTO_DETERMINISTIC 1

#include <stddef.h>

int picnic_crypto_sign_keypair(unsigned char* pk, unsigned char* sk);
int picnic_crypto_sign(unsigned char* sm, size_t* smlen, const unsigned char* m,
                size_t mlen, const unsigned char* sk);
int picnic_crypto_sign_open(unsigned char* m, size_t* mlen, const unsigned char* sm,
                     size_t smlen, const unsigned char* pk);

/* ------------------------- ADDED EXTRA FUNCTIONS ----------------------- */

int picnic_crypto_sign_signature(
    unsigned char *sig, size_t *siglen,
    const unsigned char *m, size_t mlen, const unsigned char *sk);

int picnic_crypto_sign_verify(
    const unsigned char *sig, size_t siglen,
    const unsigned char *m, size_t mlen, const unsigned char *pk);

/* ----------------------------------------------------------------------- */

#endif
