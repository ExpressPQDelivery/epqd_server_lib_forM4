/*
 * api_sike.h
 *
 *  Created on: Jun 9, 2022
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_SIKE_API_SIKE_H_
#define WOLFCRYPT_POSTQUANTUM_SIKE_API_SIKE_H_

#include "wolfcrypt/postquantum/sike/sike_security.h"

#if SIKE_SECURITY_LEVEL == 1
	#include "wolfcrypt/postquantum/sike/sikep434/api.h"
#elif SIKE_SECURITY_LEVEL == 2
	#include "wolfcrypt/postquantum/sike/sikep503/api.h"
#elif SIKE_SECURITY_LEVEL == 3
	#include "wolfcrypt/postquantum/sike/sikep610/api.h"
#else
	#include "wolfcrypt/postquantum/sike/sikep751/api.h"
#endif /* SIKE_SECURITY_LEVEL */

#endif /* WOLFCRYPT_POSTQUANTUM_SIKE_API_SIKE_H_ */
