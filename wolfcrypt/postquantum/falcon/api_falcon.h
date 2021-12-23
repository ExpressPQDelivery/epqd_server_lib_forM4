/*
 * api_falcon.h
 *
 *  Created on: Oct 4, 2021
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_API_FALCON_H_
#define WOLFCRYPT_POSTQUANTUM_API_FALCON_H_

#include "falcon_security.h"

#if FALCON_SECURITY_LEVEL==1
	#include "wolfcrypt/postquantum/falcon/falcon512/api.h"
#else
	#include "wolfcrypt/postquantum/falcon/falcon1024/api.h"
#endif /* FALCON_SECURITY_LEVEL */



#endif /* WOLFCRYPT_POSTQUANTUM_API_FALCON_H_ */
