/*
 * Напишите программу для перевода сантиметров в дюймы. В одном дюйме 2.54 сантиметра.
 * Формат ввода:
 *  На вход поступает длина в сантиметрах. Значение может быть дробным.
 *  Используйте тип double для его хранения.
 * Формат вывода:
 *  Напечатайте эту длину в дюймах. Округление не требуется.
 *  Достаточно использовать стандартную точность вывода до 6 знаков после запятой, которая установлена по умолчанию.
 */

#include <iostream>

const double INCH = 2.54;

int main()
{
    double cm;
    std::cin >> cm;

    double inches = cm / INCH;
    std::cout << inches << "\n";
}