#include <iostream>
#include <list>
#include <string>
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
    std::list<std::string> buffer;

    bool shift_pressed = false;
    int shift_offset = 0;
    auto shift_line = lines.begin();

    // read and execute commands
    std::string command;
    while (std::cin >> command)
    {
        if (command == "Shift")
        {
            shift_pressed = true;
        }
        if (command == "Up")
        {
            if (current_line == lines.begin())
            {
                continue;
            }

            --current_line;
            if (!shift_pressed)
            {
                shift_line = current_line;
            }
            else
            {
                --shift_offset;
            }
        }
        if (command == "Down")
        {
            if (current_line == lines.end())
            {
                continue;
            }

            ++current_line;
            if (!shift_pressed)
            {
                shift_line = current_line;
            }
            else
            {
                ++shift_offset;
            }
        }
        if (command == "Ctrl+X")
        {
            if (shift_line == current_line && current_line == lines.end())
            {
                continue;
            }

            buffer.clear();

            if (shift_line == current_line)
            {
                auto to_splice = current_line;
                current_line = std::next(current_line);
                buffer.splice(buffer.begin(), lines, to_splice);
            }
            else if (shift_offset < 0)
            {
                buffer.splice(buffer.begin(), lines, current_line, shift_line);
                current_line = shift_line;
            }
            else
            {
                buffer.splice(buffer.begin(), lines, shift_line, current_line);
            }

            shift_pressed = false;
            shift_line = current_line;
            shift_offset = 0;
        }
        if (command == "Ctrl+V")
        {
            if (buffer.empty())
            {
                continue;
            }

            if (shift_offset < 0)
            {
                current_line = lines.erase(current_line, shift_line);
            }
            else if (shift_offset > 0)
            {
                current_line = lines.erase(shift_line, current_line);
            }

            lines.insert(current_line, buffer.begin(), buffer.end());

            shift_pressed = false;
            shift_line = current_line;
            shift_offset = 0;
        }
    }

    // print the edited file
    for (const auto &line : lines)
    {
        std::cout << line << std::endl;
    }
}
