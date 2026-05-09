#include <iostream>
#include <windows.h>
#include "Cipher.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::string Ronnie = "Radke";
    char secretKey = 42;

    std::cout << "--- Оригiнал ---\n";
    std::cout << "Текст: " << Ronnie << "\n";
    printBits("Бiти", Ronnie);

    std::string encrypted = xorCipher(Ronnie, secretKey);
    std::cout << "\n--- Зашифровано (XOR) ---\n";
    std::cout << "Текст: " << encrypted << "\n";
    printBits("Бiти", encrypted);

    std::string decrypted = xorCipher(encrypted, secretKey);
    std::cout << "\n--- Розшифровано ---\n";
    std::cout << "Текст: " << decrypted << "\n";

    return 0;
}