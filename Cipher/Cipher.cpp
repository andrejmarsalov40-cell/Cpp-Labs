#include "Cipher.h"
#include <iostream>
#include <bitset>

std::string xorCipher(const std::string& message, char key) {
    std::string result = message;
    for (char& c : result) {
        c ^= key;
    }
    return result;
}

void printBits(const std::string& label, const std::string& text) {
    std::cout << label << ": ";
    for (char c : text) {
        std::cout << std::bitset<8>(c) << " ";
    }
    std::cout << "\n";
}