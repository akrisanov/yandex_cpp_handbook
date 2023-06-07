/*
 * Пароль от некоторого сервиса должен удовлетворять таким ограничениям:
 *       состоять из символов таблицы ASCII с кодами от 33 до 126;
 *       быть не короче 8 символов и не длиннее 14;
 *       из 4 классов символов — большие буквы, маленькие буквы, цифры,
 *       прочие символы — в пароле должны присутствовать не менее трёх любых.
 *
 * Напишите программу, которая проверит, что введённый пароль подходит под эти ограничения.
 *
 * Формат входных:
 *      На входе дана одна строка с паролем.
 * Формат выходных:
 *      Выведите YES, если пароль удовлетворяет требованиям, и NO в противном случае.
 */

#include <iostream>
#include <cctype>

int main()
{
    std::string password;
    std::getline(std::cin, password);

    bool is_valid = true;
    int upper = 0, lower = 0, digit = 0, other = 0;

    if (password.size() < 8 || password.size() > 14)
        is_valid = false;

    for (char c : password)
    {
        if (c < 33 || c > 126)
        {
            is_valid = false;
            break;
        }

        if (std::isupper(c))
            upper = 1;
        else if (std::islower(c))
            lower = 1;
        else if (std::isdigit(c))
            digit = 1;
        else
            other = 1;
    }

    if (upper + lower + digit + other < 3)
        is_valid = false;

    std::cout << (is_valid ? "YES" : "NO") << std::endl;
}
