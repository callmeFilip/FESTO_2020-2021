#include <iostream>
#include <string>

int main() 
{
    int value = 0;
    std::string input;

    while (true) 
    {
        std::cin >> input;

        if (input.compare("programist") == 0)
        {
            value = 1;
        }
        else if (input == "Toma")
        {
            value = 2;
        }
        else if (input == "End")
        {
            break;
        }

        switch (value)
        {
        case 1:
            std::cout << "na fortran" << "\n";
            break;

        case 2:
            std::cout << "J 007" << "\n";
            break;

        default:
            break;
        }

        value = 0;

    }

    return 0;
}