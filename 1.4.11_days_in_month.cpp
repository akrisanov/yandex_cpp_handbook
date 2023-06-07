/*
 * Напишите программу, выводящую количество дней в месяце по заданному номеру месяца и году.
 *
 * Формат ввода:
 *      На вход программе подается два целых положительных числа:
 *      номер месяца (от 1 до 12) и четырёхзначный год.
 * Формат вывода:
 *      Необходимо вывести одно число — количество дней в заданном месяце.
 */

#include <iostream>

/*
 * Checks whether the given year is a leap year.
 */
bool is_leap_year(int year)
{
    if (year % 400 == 0)
        return true;

    if (year % 100 == 0)
        return false;

    if (year % 4 == 0)
        return true;

    return false;
}

int main()
{
    int month, year;
    std::cin >> month >> year;

    int days_in_month = 31;

    switch (month)
    {
    case 2:
        days_in_month = is_leap_year(year) ? 29 : 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days_in_month = 30;
        break;
    }

    std::cout << days_in_month << "\n";
}
