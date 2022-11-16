/*
 * api_hqc.h
 *
 *  Created on: Jun 8, 2022
 *      Author: gtasop
 */

#ifndef WOLFCRYPT_POSTQUANTUM_HQC_API_HQC_H_
#define WOLFCRYPT_POSTQUANTUM_HQC_API_HQC_H_

#include "wolfcrypt/postquantum/hqc/hqc_security.h"

#if HQC_SECURITY_LEVEL==1
	#include "wolfcrypt/postquantum/hqc/hqc128/api.h"
#elif HQC_SECURITY_LEVEL==3
	#include "wolfcrypt/postquantum/hqc/hqc192/api.h"
#else
	#include "wolfcrypt/postquantum/hqc/hqc256/api.h"
#endif /* HQC_SECURITY_LEVEL */

#endif /* WOLFCRYPT_POSTQUANTUM_HQC_API_HQC_H_ */
