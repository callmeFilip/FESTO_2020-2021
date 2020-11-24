#include <iostream>

enum Colors 
{
    red, blue, green, yellow
};

int main()
{

    Colors colorPallet;

    for (int i = 0; i < sizeof(colorPallet);i++) 
    {
        std::cout << i << std::endl;
    }

    return 0;

}
