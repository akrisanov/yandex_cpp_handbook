#include <iostream>
#include <limits> // необходимо для numeric_limits

int main()
{
    // посчитаем для типа int:
    std::cout << "minimum value: " << std::numeric_limits<int>::min() << "\n"
              << "maximum value: " << std::numeric_limits<int>::max() << "\n";
}
