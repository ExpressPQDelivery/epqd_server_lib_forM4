/*
 * api_kyber.h
 *
 *  Created on: Oct 4, 2021
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_API_KYBER_H_
#define WOLFCRYPT_POSTQUANTUM_API_KYBER_H_

#include "kyber_security.h"

#if KYBER_SECURITY_LEVEL==2
	#include "wolfcrypt/postquantum/kyber/kyber512/api.h"
#elif KYBER_SECURITY_LEVEL==3
	#include "wolfcrypt/postquantum/kyber/kyber768/api.h"
#else
	#include "wolfcrypt/postquantum/kyber/kyber1024/api.h"
#endif /* KYBER_SECURITY_LEVEL */


#endif /* WOLFCRYPT_POSTQUANTUM_API_KYBER_H_ */
