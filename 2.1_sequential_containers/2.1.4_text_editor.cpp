#include <list>
#include <string>
#include <iostream>
#include <utility>

int main()
{
    std::list<std::string> lines;

    // read a file to edit
    while (true)
    {
        std::string line;
        std::getline(std::cin, line);

        if (line.empty())
        {
            break;
        }

        lines.push_back(line);
    }

    // define a cursor and the buffer
    auto current_line = lines.begin();
    std::string buffer;

    // read and execute commands
    std::string command;
    while (std::cin >> command)
    {
        if (command == "Down" && current_line != lines.end())
        {
            ++current_line;
        }
        if (command == "Up" && current_line != lines.begin())
        {
            --current_line;
        }
        if (command == "Ctrl+X" && current_line != lines.end())
        {
            buffer = std::move(*current_line);
            current_line = lines.erase(current_line);
        }
        if (command == "Ctrl+V" && !buffer.empty())
        {
            lines.insert(current_line, buffer);
        }
    }

    // print the edited file
    for (const auto &line : lines)
    {
        std::cout << line << std::endl;
    }
}
