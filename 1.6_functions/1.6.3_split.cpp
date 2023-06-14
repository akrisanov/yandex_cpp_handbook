#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> Split(const std::string &str, char delimiter)
{
    std::vector<std::string> words;

    size_t start = 0;
    for (size_t i = 0; i != str.size(); ++i)
    {
        if (str[i] == delimiter)
        {
            int len = i - start;
            words.push_back(str.substr(start, len));
            start = i + 1;
        }
    }
    words.push_back(str.substr(start));

    return words;
}

int main()
{
    std::string str;
    std::getline(std::cin, str);

    char delimiter;
    std::cin >> delimiter;

    std::vector<std::string> words = Split(str, delimiter);

    for (const auto &word : words)
        std::cout << word << std::endl;
}
