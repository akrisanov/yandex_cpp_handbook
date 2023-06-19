#include <iostream>

// version with range-based for loop
// this version is a bit more efficient because compiler can optimize the if statement and CPU can predict the branch
template <typename Container>
void Print(const Container &container, const std::string &delimeter)
{
    bool first = true;
    for (const auto &item : container)
    {
        if (!first) // <- print delimeter before each item except the first one
        {
            std::cout << delimeter;
        }
        std::cout << item;
        first = false;
    }
    std::cout << std::endl;
}

// version with iterators
template <typename Container>
void PrintIt(const Container &container, const std::string &delimeter)
{
    for (auto it = std::begin(container); it != std::end(container); ++it)
    {
        std::cout << *it;
        if (std::next(it) != std::end(container)) // <- print delimeter after each item except the last one
        {
            std::cout << delimeter;
        }
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    Print(data, ", ");
    PrintIt(data, ", ");
}
