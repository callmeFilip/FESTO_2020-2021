#include <sstream>
#include <fstream>

#include "CharHolder.h"

int main()
{
    CharHolder obj;

    // sstream test
    std::stringstream testInput("J");
    testInput >> obj;
    std::cout << obj << std::endl;

    // fstream input test
    std::ifstream inFileStream("dummy.txt");
    inFileStream >> obj;
    std::cout << obj << std::endl;

    // cin/cout test
    std::cout << "Input character" << std::endl;
    std::cin >> obj;
    std::cout << obj << std::endl;

    return 0;
}
