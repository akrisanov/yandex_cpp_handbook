#include <iostream>
#include <string>

int main()
{
    int a = 6, b = 4;
    double q;
    q = static_cast<double>(a) / b; // 1.5 or
    q = a * 1.0 / b;                // 1.5

    char c = 'A';
    c += 25;                // увеличиваем ASCII-код символа на 25
    std::cout << c << "\n"; // Z

    std::string h = "Hello, ";
    std::string w = " world!";
    std::string hw = h + w; // Hello, world!
}
