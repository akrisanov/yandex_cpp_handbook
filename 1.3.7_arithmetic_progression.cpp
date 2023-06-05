/*
 * Перед вами программа, которая считает сумму первых n натуральных чисел
 * по формуле суммы арифметической прогрессии:
 *
 * #include <iostream>
 * int main() {
 *   int n;
 *   std::cin >> n;
 *   std::cout << n * (n + 1) / 2 << "\n";
 * }
 *
 * Программа должна работать для всех n ≤ 4 000 000 000, но оказывается, что для некоторых
 * n она работает неправильно. Найдите причину проблемы и исправьте программу.
 */

#include <iostream>

int main()
{
    unsigned long n;
    std::cin >> n;
    std::cout << n * (n + 1) / 2 << "\n"; // <- signed integer overflow: 2147483647 + 1 cannot be represented in type 'int'
}
