#ifndef RANDOMBYTES_H
#define RANDOMBYTES_H
#include <stdint.h>

#ifdef _WIN32
#include <crtdefs.h>
#else
#include <unistd.h>
#endif

// Diko mou
int PQCLEAN_randombytes(uint8_t *buf, size_t n);

int randombytes(uint8_t *buf, size_t n);

#endif
