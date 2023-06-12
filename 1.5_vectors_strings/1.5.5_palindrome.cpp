#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end()); // C++20 => std::erase(str, ' ');

    if (str.length() == 0)
    {
        std::cout << "String must not be empty.";
        return 1;
    }

    bool palindrome = true;

    int l = 0;
    int r = static_cast<int>(str.length()) - 1;

    while (l < r)
    {
        if (str[l] != str[r])
            palindrome = false;
        ++l;
        --r;
    }

    std::cout << (palindrome ? "YES" : "NO") << std::endl;
}
