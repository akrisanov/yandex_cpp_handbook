#include <deque>
#include <iostream>

int main()
{
    int n_students;
    std::cin >> n_students;

    std::deque<std::string> homeworks;

    for (int i = 0; i < n_students; ++i)
    {
        std::string last_name, position;
        std::cin >> last_name >> position;

        if (position == "top")
            homeworks.push_front(last_name);
        if (position == "bottom")
            homeworks.push_back(last_name);
    }

    int m_works;
    std::cin >> m_works;

    for (int i = 0; i < m_works; ++i)
    {
        int position;
        std::cin >> position;
        std::cout << homeworks[position - 1] << std::endl;
    }
}
