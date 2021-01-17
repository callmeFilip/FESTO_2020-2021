#include <string>
#include <iostream>
#define DEBUG(x) std::cout << #x " = " << x << std::endl

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        std::cout << "Wrong input!" << std::endl;
        exit(1);
    }

    std::string input = argv[1]; //input as argument
    DEBUG(input);

    size_t iterator = input.length() - 1;

    for (size_t i = 0; i < iterator; i++)
    {
        input.pop_back();
        DEBUG(input);
    }

    return 0;
}
