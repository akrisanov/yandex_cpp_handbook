#include <iostream>

int main()
{
again: // метка — это произвольное имя с двоеточием

    std::cout << "How old are you?\n";
    int age;
    std::cin >> age;

    if (age < 0 || age >= 128)
    {
        std::cout << "Wrong age...\n";
        goto again; // безусловный прыжок в место, помеченное меткой
    }

    std::cout << "Your age is " << age << ".\n";

    // ...
}
