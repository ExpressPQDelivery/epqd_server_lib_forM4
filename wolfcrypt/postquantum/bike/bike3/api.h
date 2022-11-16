/* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0"
 *
 * Written by Nir Drucker and Shay Gueron
 * AWS Cryptographic Algorithms Group.
 */

#pragma once

#include "types.h"
#include "crypto_kem.h"

#undef CRYPTO_PUBLICKEYBYTES
#undef CRYPTO_SECRETKEYBYTES
#undef CRYPTO_BYTES

#define MUPQ_CRYPTO_ALGNAME                      "Bike-L3"

#define CRYPTO_SECRETKEYBYTES  sizeof(sk_t)
#define CRYPTO_PUBLICKEYBYTES  sizeof(pk_t)
#define CRYPTO_CIPHERTEXTBYTES sizeof(ct_t)
#define CRYPTO_BYTES           sizeof(ss_t)
