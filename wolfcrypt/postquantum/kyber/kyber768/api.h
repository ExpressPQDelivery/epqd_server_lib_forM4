#ifndef PQCLEAN_KYBER768_CLEAN_API_H
#define PQCLEAN_KYBER768_CLEAN_API_H

#include <stdint.h>

#define PQCLEAN_KYBER768_CLEAN_CRYPTO_SECRETKEYBYTES  2400
#define PQCLEAN_KYBER768_CLEAN_CRYPTO_PUBLICKEYBYTES  1184
#define PQCLEAN_KYBER768_CLEAN_CRYPTO_CIPHERTEXTBYTES 1088
#define PQCLEAN_KYBER768_CLEAN_CRYPTO_BYTES           32
#define PQCLEAN_KYBER768_CLEAN_CRYPTO_ALGNAME "Kyber768"

/* -------------- DIKA MOU ------------------ */
#undef CRYPTO_PUBLICKEYBYTES
#undef CRYPTO_SECRETKEYBYTES
#undef CRYPTO_BYTES

#define CRYPTO_SECRETKEYBYTES  PQCLEAN_KYBER768_CLEAN_CRYPTO_SECRETKEYBYTES
#define CRYPTO_PUBLICKEYBYTES  PQCLEAN_KYBER768_CLEAN_CRYPTO_PUBLICKEYBYTES
#define CRYPTO_CIPHERTEXTBYTES PQCLEAN_KYBER768_CLEAN_CRYPTO_CIPHERTEXTBYTES
#define CRYPTO_BYTES           PQCLEAN_KYBER768_CLEAN_CRYPTO_BYTES

#define crypto_kem_keypair(pk,sk)			PQCLEAN_KYBER768_CLEAN_crypto_kem_keypair((pk),(sk))
#define crypto_kem_enc(ct,ss,pk)			PQCLEAN_KYBER768_CLEAN_crypto_kem_enc(ct,ss,pk)
#define crypto_kem_dec(ss,ct,sk)			PQCLEAN_KYBER768_CLEAN_crypto_kem_dec(ss,ct,sk)
/* -------------- DIKA MOU MEXRI EDW ------------------ */

int PQCLEAN_KYBER768_CLEAN_crypto_kem_keypair(uint8_t *pk, uint8_t *sk);

int PQCLEAN_KYBER768_CLEAN_crypto_kem_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);

int PQCLEAN_KYBER768_CLEAN_crypto_kem_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);

#endif
