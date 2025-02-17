# ExᴘʀᴇssPQDᴇʟɪᴠᴇʀʏ based on WolfSSL 4.7.0 with Post-Quantum Algorithms for PC (Server)

## Description
This is a library that implements ExᴘʀᴇssPQDᴇʟɪᴠᴇʀʏ based on WolfSSL, designed to run on a server. The version we are using is [WolfSSL 4.7.0](https://github.com/wolfSSL/wolfssl/releases/tag/v4.7.0-stable) and the postquantum algorithms are from [PQClean](https://github.com/PQClean/PQClean). The postquantum algorithms that are supported are:


### Key Encapsualtion Mechanisms (KEMs)

- [x] CRYSTALS-Kyber


### Digital Signature Algorithms

- [x] CRYSTALS-Dilithium

- [x] Falcon


## System Requirements

This version is targeting theoretically any Linux system and it requires: `git` `autoconf` `automake` `libtool` and possibly other, more common packages like `gcc` or `make`. 

Install the requirements:
```
sudo apt update
sudo apt install make autoconf automake libtool git
```

The only thing on this project that is system specific is the **PQClean crypto libraries**. 

Below we have included a script that takes care of the installation of the necessary libraries from PQClean.


## Installation

### Ubuntu (Debian based)

1. Clone this repository on your local system:

```
git clone https://gitlab.com/g_tasop/pq-wolfssl-for-pc
```

2. Clone the PQClean library on the same directory as this project:

```
git clone https://github.com/PQClean/PQClean.git
git reset --hard e11209a9f1808e23132b0559c795c2b716fb0d3d
```

3. Cd in the clone repository and run the auto generation script:

```
cd pq-wolfssl-for-pc
./autogen.sh
```

autogen.sh will take care of everything your systems needs for the installation _**and also**_ will build the PQClean libraries for your system and copy them on the wolfSSL project.

4. Now run the configure script with only TLS 1.3 enabled and the creation of libraries disabled:

```
./configure --enable-tls13 --disable-tlsv12 --disable-oldtls --disable-shared --disable-static
```
(For debug purposes you should pass the `--enable-debug` option too)

5. Before we build the project we must edit the `config.h` file and add these lines on the top:
```
/* ----------------------------------------------------------------------------------*/
/* Post-quantum TLS 1.3 Benchmark */
/* ----------------------------------------------------------------------------------*/


	#define HAVE_POSTQUANTUM	// Enables post-quantum in TLS 1.3
	/* ------------------------------------------------------------------------------*/
	#define HAVE_DILITHIUM		// 		choose
//	#define HAVE_FALCON			// 	authentication
//	#define HAVE_PICNIC			// 		method
//	#define HAVE_SPHINCS		//
	/* ------------------------------------------------------------------------------*/
	#define HAVE_KYBER			//
//	#define HAVE_SABER			//
//	#define HAVE_FRODO			//		choose
//	#define HAVE_BIKE			//		key
//	#define HAVE_SIKE			//	 	exchange
//	#define HAVE_HQC			//		method
//	#define HAVE_NTRULPR		//
//	#define HAVE_NTRU_PQM4		//
	/* ------------------------------------------------------------------------------*/
//	#define HAVE_TRADITIONAL	// Enable to have TLS with RSA sign (regardless of HAVE_POSTQUANTUM)
//	#define MY_HAVE_ECC			// Enable to have TLS with ECC sign
	/* ------------------------------------------------------------------------------*/
	#define HAVE_MUTUAL_AUTH	// Enable to have mutual authentication


 /*
  * To control the *security levels* of each PQ algorithm you must go to the
  * corresponding security file. For example for Kyber:
  *
  * Go to <wolfcrypt/postquantum/kyber/kyber_security.h> and enable one of
  * the defines for the security levels.
  *
  * For Dilithium the path is <wolfcrypt/postquantum/dilithium/dilithium_security.h>
  * and so on...
  *
  */



```
6. Now we are ready to build the whole project:

```
make
```
** **NOTICE:** ** there is a problem with newer distibutions (i.e Ubuntu 21.10) that use gcc-11 by default. Fallback to a previous version, i.e gcc-10, by running:

```
make CC=gcc-10
```

Optionally we can install the library on the system for using PQ WolfSSL on programs with a simple library call (-lwolfssl).

**_(Not recommended yet)_**

```
sudo make install
```

Additionally, one can pass harware optimization flags to the compiler to make use of _Intel assembly_ and _aesni_ options. Keep in mind that some things may **NOT** be working properly with these flags. Use it on your own risk.

```
./configure --enable-tls13 --disable-tlsv12 --disable-oldtls --disable-shared --disable-static --enable-intelasm --enable-aesni --enable-sp --enable-sp-asm
```

## Test

To test the correct functionality of the project we can run some examples. These examples use the "examples/benchmark/tls_bench" program that offers a lot of functionality. You can check it by running:

```
./examples/benchmark/tls_bench -?
```


### Troubleshooting

If the benchmark shows an error like this:

```
ERROR: failed to connect
Client Error: -1 (unknown error number)
```

try re-running the benchmark OR try debugging it with an IDE, if `--enable-debug` flag is passed.

## Usage

This will run a local server on verbose mode (-sv), set the port number (-P 12400) and set the cipher suite (-l "TLS13-AES256-GCM-SHA384").

Set up a server to run on the local machine:

```
./examples/benchmark/tls_bench -sv -P 12400 -l "TLS13-AES256-GCM-SHA384"
```


## Tested

This project's build and usage has been tested successfully on the following platform:

- [x] Ubuntu 22.04 with Intel Xeon E5 CPU (2.30GHz) and 1 GB RAM.


## License
For all the licenses of the components of this project, see file ``Third-party-licenses.txt`.


---
