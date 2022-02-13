#include "cryptopp/sha.h"
#include <iostream>

int main (int argc, char* argv[])
{
  CryptoPP::SHA256 hash;
  std::cout << "Name: " << hash.AlgorithmName() << std::endl;
  std::cout << "Digest size: " << hash.DigestSize() << std::endl;
  std::cout << "Block size: " << hash.BlockSize() << std::endl;

  return 0;
}
