/*
 * api_dilithium.h
 *
 *  Created on: Oct 4, 2021
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_API_DILITHIUM_H_
#define WOLFCRYPT_POSTQUANTUM_API_DILITHIUM_H_

#include "dilithium_security.h"

#undef CRYPTO_PUBLICKEYBYTES
#undef CRYPTO_SECRETKEYBYTES
#undef CRYPTO_BYTES

#if DILITHIUM_SECURITY_LEVEL==1
	#include "wolfcrypt/postquantum/dilithium/dilithium2/api.h"
#elif DILITHIUM_SECURITY_LEVEL==3
	#include "wolfcrypt/postquantum/dilithium/dilithium3/api.h"
#else
	#include "wolfcrypt/postquantum/dilithium/dilithium5/api.h"
#endif /* DILITHIUM_SECURITY_LEVEL */

#endif /* WOLFCRYPT_POSTQUANTUM_API_DILITHIUM_H_ */
