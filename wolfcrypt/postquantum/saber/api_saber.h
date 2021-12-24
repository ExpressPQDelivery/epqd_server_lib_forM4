/*
 * api_saber.h
 *
 *  Created on: Oct 4, 2021
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_API_SABER_H_
#define WOLFCRYPT_POSTQUANTUM_API_SABER_H_

#include "saber_security.h"

#if SABER_SECURITY_LEVEL==1
	#include "wolfcrypt/postquantum/saber/lightsaber/api.h"
#elif SABER_SECURITY_LEVEL==3
	#include "wolfcrypt/postquantum/saber/saber_/api.h"
#else
	#include "wolfcrypt/postquantum/saber/firesaber/api.h"
#endif /* SABER_SECURITY_LEVEL */


#endif /* WOLFCRYPT_POSTQUANTUM_API_SABER_H_ */
