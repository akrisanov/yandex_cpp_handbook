/*
 * Вам даны строки текстового файла.
 * Отсортируйте набор этих строк по убыванию.
 *
 * Есть несколько способов сделать сортировку и вывод в нужном порядке:
 *      строки можно напечатать в обратном порядке;
 *      можно передать в std::sort обратные итераторы;
 *      можно передать в std::sort свою функцию сравнения;
 *      можно передать в std::sort уже готовый компаратор std::greater<std::string>().
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::vector<std::string> lines;

    std::string l;
    while (std::getline(std::cin, l))
    {
        lines.push_back(l);
    }

    std::sort(lines.rbegin(), lines.rend());

    for (std::string line : lines)
    {
        std::cout << line << "\n";
    }
}
