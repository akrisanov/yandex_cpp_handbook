#include <iostream>
#include <vector>
#include <string>

std::string Join(const std::vector<std::string> &tokens, char delimiter)
{
    if (tokens.empty())
        return "";

    std::string result;
    for (size_t i = 0; i != tokens.size(); ++i)
    {
        result += tokens[i];
        if (i + 1 != tokens.size())
            result += delimiter;
    }

    return result;
}

int main()
{
    std::cout << Join({"What", "is", "your", "name?"}, '_') << std::endl;
}
