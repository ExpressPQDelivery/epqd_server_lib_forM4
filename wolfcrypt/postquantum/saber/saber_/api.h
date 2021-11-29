#ifndef PQCLEAN_SABER_CLEAN_API_H
#define PQCLEAN_SABER_CLEAN_API_H


#define PQCLEAN_SABER_CLEAN_CRYPTO_ALGNAME "Saber"
#define PQCLEAN_SABER_CLEAN_CRYPTO_BYTES 32
#define PQCLEAN_SABER_CLEAN_CRYPTO_CIPHERTEXTBYTES 1088
#define PQCLEAN_SABER_CLEAN_CRYPTO_PUBLICKEYBYTES 992
#define PQCLEAN_SABER_CLEAN_CRYPTO_SECRETKEYBYTES 2304

/* -------------- DIKA MOU ------------------ */
#undef CRYPTO_PUBLICKEYBYTES
#undef CRYPTO_SECRETKEYBYTES
#undef CRYPTO_BYTES

#define CRYPTO_SECRETKEYBYTES  PQCLEAN_SABER_CLEAN_CRYPTO_SECRETKEYBYTES
#define CRYPTO_PUBLICKEYBYTES  PQCLEAN_SABER_CLEAN_CRYPTO_PUBLICKEYBYTES
#define CRYPTO_CIPHERTEXTBYTES PQCLEAN_SABER_CLEAN_CRYPTO_CIPHERTEXTBYTES
#define CRYPTO_BYTES           PQCLEAN_SABER_CLEAN_CRYPTO_BYTES

#define crypto_kem_keypair(pk,sk)			PQCLEAN_SABER_CLEAN_crypto_kem_keypair((pk),(sk))
#define crypto_kem_enc(ct,ss,pk)			PQCLEAN_SABER_CLEAN_crypto_kem_enc(ct,ss,pk)
#define crypto_kem_dec(ss,ct,sk)			PQCLEAN_SABER_CLEAN_crypto_kem_dec(ss,ct,sk)
/* -------------- DIKA MOU MEXRI EDW ------------------ */

int PQCLEAN_SABER_CLEAN_crypto_kem_keypair(unsigned char *pk, unsigned char *sk);

int PQCLEAN_SABER_CLEAN_crypto_kem_enc(unsigned char *ct, unsigned char *k, const unsigned char *pk);

int PQCLEAN_SABER_CLEAN_crypto_kem_dec(unsigned char *k, const unsigned char *ct, const unsigned char *sk);


#endif /* PQCLEAN_SABER_CLEAN_API_H */
