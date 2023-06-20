#include <deque>
#include <iostream>

void MakeTrain()
{
    std::deque<int> train;

    std::string command;
    size_t n; // wagon number or number of wagons

    while (std::cin >> command >> n)
    {
        if (command == "+left")
        {
            train.push_front(n);
        }
        if (command == "+right")
        {
            train.push_back(n);
        }
        if (command == "-left")
        {
            auto end = n > static_cast<int>(train.size()) ? train.end() : train.begin() + n;
            train.erase(train.begin(), end);
        }
        if (command == "-right")
        {
            auto begin = n > static_cast<int>(train.size()) ? train.begin() : train.end() - n;
            train.erase(begin, train.end());
        }
    }

    for (size_t i = 0; i != train.size(); ++i)
    {
        std::cout << train[i];
        if (i + 1 < train.size())
            std::cout << " ";
    }
    std::cout << std::endl;
}
