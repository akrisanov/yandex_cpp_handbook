#include <iostream>
#include <cctype>

void soundex(std::string &word)
{
    // step 1: save the first letter
    for (size_t i = 1; i != word.size(); ++i)
    {
        char c = std::tolower(word[i]);

        // step 2: remove all occurrences of a, e, h, i, o, u, w, y
        if (c == 'a' || c == 'e' || c == 'h' || c == 'i' || c == 'o' || c == 'u' || c == 'w' || c == 'y')
        {
            word.erase(i, 1);
            --i;
        }

        // step 3: replace all consonants (include the first letter) with digits
        short int code = 0;

        if (c == 'b' || c == 'f' || c == 'p' || c == 'v')
            code = 1;
        if (c == 'c' || c == 'g' || c == 'j' || c == 'k' || c == 'q' || c == 's' || c == 'x' || c == 'z')
            code = 2;
        if (c == 'd' || c == 't')
            code = 3;
        if (c == 'l')
            code = 4;
        if (c == 'm' || c == 'n')
            code = 5;
        if (c == 'r')
            code = 6;

        if (code != 0)
        {
            word.replace(i, 1, std::to_string(code));
        }
    }
    // step 4: remove all adjacent same digits
    for (size_t i = 1; i != word.size(); ++i)
    {
        char c = word[i];

        if (!std::isdigit(c))
            continue;

        if (c == word[i + 1])
        {
            word.erase(i + 1, 1);
            --i;
        }
    }
    // step 5: cut the word to 4 characters
    if (word.size() > 4)
    {
        word.erase(4);
    }
    // step 6: add zeros to the end if the word is too short
    while (word.size() < 4)
    {
        word += '0';
    }
}

int main()
{
    std::string word;
    std::cin >> word;

    if (word.size() > 20)
    {
        std::cout << "The word is too long" << std::endl;
        return 0;
    }

    soundex(word);
    std::cout << word << std::endl;
}
