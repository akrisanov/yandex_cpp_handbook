#include <iostream>
#include <string>

int main()
{
    std::string line; // <- none ASCII characters are stored as multiple bytes
    std::getline(std::cin, line);

    for (char symbol : line)
    {
        std::cout << symbol << "\t" << static_cast<int>(symbol) << "\n";
    }
}
