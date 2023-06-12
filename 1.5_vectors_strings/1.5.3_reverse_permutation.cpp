/*
 * На мероприятие приглашены n гостей. Им предлагают занять места с номерами от 1 до n в зале.
 * Гости занимают эти места в произвольном порядке. Известно, на каком месте сел очередной гость.
 * Выпишите для каждого очередного места номер гостя, который на него сел.
 *
 * Пример 1:
 * 5
 * 1 2 3 5 4
 * => 1 2 3 5 4
 *
 * Пример 2:
 * 11
 * 11 6 8 2 10 9 4 7 3 1 5
 * => 10 4 9 7 11 2 8 3 6 5 1
 *
 * Если говорить математическим языком, то вам дана перестановка и для неё требуется вычислить обратную перестановку.
 */

#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    if (n < 1 || n > 20000)
    {
        std::cout << "n must be not greater than 20 000" << std::endl;
        return 1;
    }

    std::vector<int> guests(n);

    int seat;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> seat;
        guests[seat - 1] = i + 1;
    }

    for (int guest : guests)
    {
        std::cout << guest << " ";
    }
    std::cout << "\n";
}