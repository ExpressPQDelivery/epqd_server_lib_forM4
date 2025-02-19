#ifndef PQCLEAN_DILITHIUM5_CLEAN_API_H
#define PQCLEAN_DILITHIUM5_CLEAN_API_H

#include <stddef.h>
#include <stdint.h>

#define PQCLEAN_DILITHIUM5_CLEAN_CRYPTO_PUBLICKEYBYTES 2592
#define PQCLEAN_DILITHIUM5_CLEAN_CRYPTO_SECRETKEYBYTES 4864
#define PQCLEAN_DILITHIUM5_CLEAN_CRYPTO_BYTES 4595
#define PQCLEAN_DILITHIUM5_CLEAN_CRYPTO_ALGNAME "Dilithium5"

#define CRYPTO_PUBLICKEYBYTES 	PQCLEAN_DILITHIUM5_CLEAN_CRYPTO_PUBLICKEYBYTES
#define CRYPTO_SECRETKEYBYTES 	PQCLEAN_DILITHIUM5_CLEAN_CRYPTO_SECRETKEYBYTES
#define CRYPTO_BYTES 			PQCLEAN_DILITHIUM5_CLEAN_CRYPTO_BYTES

#define DILITHIUM_MODE 5

#define crypto_sign_signature(sig,siglen,m,mlen,sk) 	PQCLEAN_DILITHIUM5_CLEAN_crypto_sign_signature(sig,siglen,m,mlen,sk)
#define crypto_sign_verify(sig,siglen,m,mlen,pk) 		PQCLEAN_DILITHIUM5_CLEAN_crypto_sign_verify(sig,siglen,m,mlen,pk)

int PQCLEAN_DILITHIUM5_CLEAN_crypto_sign_keypair(uint8_t *pk, uint8_t *sk);

int PQCLEAN_DILITHIUM5_CLEAN_crypto_sign_signature(
    uint8_t *sig, size_t *siglen,
    const uint8_t *m, size_t mlen, const uint8_t *sk);

int PQCLEAN_DILITHIUM5_CLEAN_crypto_sign_verify(
    const uint8_t *sig, size_t siglen,
    const uint8_t *m, size_t mlen, const uint8_t *pk);

int PQCLEAN_DILITHIUM5_CLEAN_crypto_sign(
    uint8_t *sm, size_t *smlen,
    const uint8_t *m, size_t mlen, const uint8_t *sk);

int PQCLEAN_DILITHIUM5_CLEAN_crypto_sign_open(
    uint8_t *m, size_t *mlen,
    const uint8_t *sm, size_t smlen, const uint8_t *pk);

#endif
