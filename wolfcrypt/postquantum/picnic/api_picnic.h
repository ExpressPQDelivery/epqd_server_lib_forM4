/*
 * api_picnic.h
 *
 *  Created on: Jun 15, 2022
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_PICNIC_API_PICNIC_H_
#define WOLFCRYPT_POSTQUANTUM_PICNIC_API_PICNIC_H_

#include "picnic_security.h"

#undef CRYPTO_PUBLICKEYBYTES
#undef CRYPTO_SECRETKEYBYTES
#undef CRYPTO_BYTES

#if PICNIC3_SECURITY_LEVEL==1
	#include "wolfcrypt/postquantum/picnic/picnic3l1/api.h"
#endif /* DILITHIUM_SECURITY_LEVEL */

#endif /* WOLFCRYPT_POSTQUANTUM_PICNIC_API_PICNIC_H_ */
