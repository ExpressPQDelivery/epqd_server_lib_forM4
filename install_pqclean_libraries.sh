#!/bin/bash

dir=${PWD}

cd ..

echo "Making and copying all signature libraries..."

cd PQClean
cd crypto_sign/dilithium2/clean && make && cp *.a $dir/wolfcrypt/postquantum/dilithium/dilithium2
cd ../../dilithium3/clean && make && cp *.a $dir/wolfcrypt/postquantum/dilithium/dilithium3
cd ../../dilithium5/clean && make && cp *.a $dir/wolfcrypt/postquantum/dilithium/dilithium5
cd ../../falcon-512/clean && make && cp *.a $dir/wolfcrypt/postquantum/falcon/falcon512
cd ../../falcon-1024/clean && make && cp *.a $dir/wolfcrypt/postquantum/falcon/falcon1024
cd ../../..


echo "Making and copying all KEM libraries..."

cd crypto_kem/kyber512/clean && make && cp *.a $dir/wolfcrypt/postquantum/kyber/kyber512
cd ../../kyber768/clean && make && cp *.a $dir/wolfcrypt/postquantum/kyber/kyber768
cd ../../kyber1024/clean && make && cp *.a $dir/wolfcrypt/postquantum/kyber/kyber1024
cd ../../../..

echo "Done..."