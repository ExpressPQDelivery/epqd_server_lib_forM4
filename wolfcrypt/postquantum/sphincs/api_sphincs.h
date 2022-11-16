/*
 * api_sphincs.h
 *
 *  Created on: Jun 17, 2022
 *      Author: gtasop
 */

#ifndef THIRD_PARTY_WOLFSSL_WOLFSSL_WOLFSSL_WOLFSSL_WOLFCRYPT_POSTQUANTUM_SPHINCS_API_SPHINCS_H_
#define THIRD_PARTY_WOLFSSL_WOLFSSL_WOLFSSL_WOLFSSL_WOLFCRYPT_POSTQUANTUM_SPHINCS_API_SPHINCS_H_

#include "sphincs_security.h"

#if SPHINCS_SECURITY_LEVEL==1

	#ifdef SPHINCS_VARIANT_FAST
		#include <wolfcrypt/postquantum/sphincs/128-fast/api.h>
	#else
		#include <wolfcrypt/postquantum/sphincs/128-small/api.h>
	#endif

#elif SPHINCS_SECURITY_LEVEL==3

	#ifdef SPHINCS_VARIANT_FAST
		#include <wolfcrypt/postquantum/sphincs/192-fast/api.h>
	#else
		#include <wolfcrypt/postquantum/sphincs/192-small/api.h>
	#endif

#else

	#ifdef SPHINCS_VARIANT_FAST
		#include <wolfcrypt/postquantum/sphincs/256-fast/api.h>
	#else
		#include <wolfcrypt/postquantum/sphincs/256-small/api.h>
	#endif

#endif /* SPHINCS_SECURITY_LEVEL */


#endif /* THIRD_PARTY_WOLFSSL_WOLFSSL_WOLFSSL_WOLFSSL_WOLFCRYPT_POSTQUANTUM_SPHINCS_API_SPHINCS_H_ */
