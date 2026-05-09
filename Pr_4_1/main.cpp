#include <iostream>
#include <iomanip>
#include "structures.h"

int main() {
    std::cout << std::left << std::setw(40) << "Data Type / Structure" << "Size (in bytes)" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

    std::cout << std::setw(40) << "bool" << sizeof(bool) << std::endl;
    std::cout << std::setw(40) << "char" << sizeof(char) << std::endl;
    std::cout << std::setw(40) << "short" << sizeof(short) << std::endl;
    std::cout << std::setw(40) << "int" << sizeof(int) << std::endl;
    std::cout << std::setw(40) << "long" << sizeof(long) << std::endl;
    std::cout << std::setw(40) << "long long" << sizeof(long long) << std::endl;
    std::cout << std::setw(40) << "float" << sizeof(float) << std::endl;
    std::cout << std::setw(40) << "double" << sizeof(double) << std::endl;

    std::cout << "--------------------------------------------------------" << std::endl;

    std::cout << std::setw(40) << "SimpleStruct" << sizeof(SimpleStruct) << std::endl;
    std::cout << std::setw(40) << "ExpandedStruct" << sizeof(ExpandedStruct) << std::endl;

    std::cout << "--------------------------------------------------------" << std::endl;

    SimpleStruct* myPointer = nullptr;
    std::cout << std::setw(40) << "SimpleStruct pointer" << sizeof(myPointer) << std::endl;

    std::cout << "--------------------------------------------------------" << std::endl;

    std::cout << std::setw(40) << "PointerStruct" << sizeof(PointerStruct) << std::endl;

    return 0;
}