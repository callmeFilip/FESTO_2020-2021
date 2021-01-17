#include <iostream>
#include "Color.h"

int main()
{
    Color ledColor(RED);

    std::cout << ledColor.getColor() << std::endl;

    ledColor.setColor(BLUE);

    std::cout << ledColor.getColor() << std::endl;

    return 0;
}
// I don't find any difference between
// Task 10 and Task 11
