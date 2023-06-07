#include <iostream>

int main()
{
    int x;
    std::cout << x << "\n"; // undefined behavior
    int y;
    std::cin >> y; // works fine
}
