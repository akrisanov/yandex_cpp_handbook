/*
 * Напишите программу, печатающую на экране первые строчки со страницы Бьярне Страуструпа про C++:
 * C++ is a general-purpose programming language with a bias towards systems programming that
 *   - is a better C
 *   - supports data abstraction
 *   - supports object-oriented programming
 *   - supports generic programming.
 * Не потеряйте парные пробелы в начале строк и переносы в конце строк.
 */

#include <iostream>

int main()
{
    std::cout
        << "C++ is a general-purpose programming language with a bias towards systems programming that\n"
        << "  - is a better C\n"
        << "  - supports data abstraction\n"
        << "  - supports object-oriented programming\n"
        << "  - supports generic programming.\n";
}
