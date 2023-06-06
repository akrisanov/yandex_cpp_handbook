#include <iostream>
#include <string>

int main()
{
    std::string name;
    while (std::getline(std::cin, name))
    {
        std::cout << "Hello, " << name << "!\n";
    }
}
