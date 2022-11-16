/*
 * api_bike.h
 *
 *  Created on: Jun 8, 2022
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_BIKE_API_BIKE_H_
#define WOLFCRYPT_POSTQUANTUM_BIKE_API_BIKE_H_

#include "wolfcrypt/postquantum/bike/bike_security.h"

#if BIKE_SECURITY_LEVEL==1
	#include "wolfcrypt/postquantum/bike/bike1/api.h"
#else
	#include "wolfcrypt/postquantum/bike/bike3/api.h"
#endif /* BIKE_SECURITY_LEVEL */

#endif /* WOLFCRYPT_POSTQUANTUM_BIKE_API_BIKE_H_ */
