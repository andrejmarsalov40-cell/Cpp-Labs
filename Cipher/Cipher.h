#ifndef CIPHER_H
#define CIPHER_H

#include <string>

std::string xorCipher(const std::string& message, char key);

void printBits(const std::string& label, const std::string& text);

#endif
