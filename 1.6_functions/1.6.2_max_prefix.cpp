#include <iostream>
#include <string>
#include <vector>

std::string CommonPrefix(const std::vector<std::string> &words)
{
    if (words.empty())
        return {};

    // find the shortest word
    std::string prefix = words[0];
    for (const auto &word : words)
    {
        if (word.size() < prefix.size())
            prefix = word;
    }

    // find the common prefix
    for (const auto &word : words)
    {
        for (size_t i = 0; i != prefix.size(); ++i)
        {
            if (prefix[i] != word[i])
                return prefix.substr(0, i);
        }
    }

    return prefix;
}

int main()
{
    std::vector<std::string> words = {"apple", "apricot", "application"};
    std::cout << CommonPrefix(words) << std::endl;
}
