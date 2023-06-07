#include <iostream>
#include <string>

int main()
{
    std::string name;
    // cin reads a stream of characters until it encounters a whitespace character
    // to read a whole line, use getline(cin, name) from the <string> header
    std::cout << "Enter your full name again:\n";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";
}
