#include <iostream>

int main()
{
    unsigned int a = 123456; // на 64-битной платформе sizeof(a) == 4

    // Произведение a * a не помещается в 4 байта, так как оно больше 2^32
    std::cout << a * a << "\n";
}
