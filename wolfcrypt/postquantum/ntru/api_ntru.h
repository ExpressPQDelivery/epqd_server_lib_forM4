/*
 * api_ntru.h
 *
 *  Created on: Jun 8, 2022
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_NTRU_API_NTRU_H_
#define WOLFCRYPT_POSTQUANTUM_NTRU_API_NTRU_H_

#include "wolfcrypt/postquantum/ntru/ntru_security.h"

#if NTRU_SECURITY_LEVEL==1
	#include "wolfcrypt/postquantum/ntru/ntru2048509/api.h"
#elif NTRU_SECURITY_LEVEL==3
	#include "wolfcrypt/postquantum/ntru/ntru2048677/api.h"
#else
	#include "wolfcrypt/postquantum/ntru/ntru4096821/api.h"
#endif /* NTRU_SECURITY_LEVEL */

#endif /* WOLFCRYPT_POSTQUANTUM_NTRU_API_NTRU_H_ */
