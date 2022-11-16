/*
 * api_ntrulpr.h
 *
 *  Created on: Jun 8, 2022
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_NTRULPR_API_NTRULPR_H_
#define WOLFCRYPT_POSTQUANTUM_NTRULPR_API_NTRULPR_H_

#include "wolfcrypt/postquantum/ntrulpr/ntrulpr_security.h"

#if NTRULPR_SECURITY_LEVEL==1
	#include "wolfcrypt/postquantum/ntrulpr/ntrulpr653/api.h"
#elif NTRULPR_SECURITY_LEVEL==2
	#include "wolfcrypt/postquantum/ntrulpr/ntrulpr761/api.h"
#elif NTRULPR_SECURITY_LEVEL==3
	#include "wolfcrypt/postquantum/ntrulpr/ntrulpr857/api.h"
#else
	#include "wolfcrypt/postquantum/ntrulpr/ntrulpr1277/api.h"
#endif /* HQC_SECURITY_LEVEL */

#endif /* WOLFCRYPT_POSTQUANTUM_NTRULPR_API_NTRULPR_H_ */
