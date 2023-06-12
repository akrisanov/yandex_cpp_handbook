/*
 * Определите, является ли год високосным по григорианскому календарю:
 *      год, номер которого кратен 400, — високосный;
 *       остальные годы, номер которых кратен 100, — невисокосные (например, годы 1700, 1800, ...);
 *       остальные годы, номер которых кратен 4, — високосные.
 *       все остальные годы — невисокосные.
 *
 * Формат ввода:
 *      Вводится целое положительное четырёхзначное число — номер года.
 * Формат вывода:
 *      Программа выводит YES если год високосный и NO в противном случае.
 */

#include <iostream>

int main()
{
    short year;
    bool leap_year;
    std::cin >> year;

    if (year % 400 == 0)
    {
        leap_year = true;
    }
    else if (year % 100 == 0)
    {
        leap_year = false;
    }
    else if (year % 4 == 0)
    {
        leap_year = true;
    }
    else
    {
        leap_year = false;
    }

    // more consice version
    // => leap_year = ((year % 400 == 0 || year % 100 != 0) && year % 4 == 0);

    std::cout << (leap_year ? "YES" : "NO") << "\n";
}
