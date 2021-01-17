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
