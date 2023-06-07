#include <iostream>

int main()
{
    // Например, на 64-битной Linux-системе компилятор clang++ использует такие размеры для типов:
    std::cout << "char: " << sizeof(char) << "\n";               //  1
    std::cout << "bool: " << sizeof(bool) << "\n";               //  1
    std::cout << "short int: " << sizeof(short int) << "\n";     //  2 (по стандарту >= 2)
    std::cout << "int: " << sizeof(int) << "\n";                 //  4 (по стандарту >= 2)
    std::cout << "long int: " << sizeof(long int) << "\n";       //  8 (по стандарту >= 4)
    std::cout << "long long int: " << sizeof(long long) << "\n"; //  8 (по стандарту >= 8)
    std::cout << "float: " << sizeof(float) << "\n";             //  4
    std::cout << "double: " << sizeof(double) << "\n";           //  8
    std::cout << "long double: " << sizeof(long double) << "\n"; // 16
}
