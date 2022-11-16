/*
 * api_frodo.h
 *
 *  Created on: Feb 23, 2022
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_FRODO_API_FRODO_H_
#define WOLFCRYPT_POSTQUANTUM_FRODO_API_FRODO_H_

#include "frodo_security.h"

#ifdef FRODO_SHAKE
	#include "wolfcrypt/postquantum/frodo/frodo640shake/api.h"
#elif defined (FRODO_AES)
	#include "wolfcrypt/postquantum/frodo/frodo640aes/api.h"
#endif

#endif /* WOLFCRYPT_POSTQUANTUM_FRODO_API_FRODO_H_ */
