#include <iostream>

int main()
{
#ifdef PRINT
    std::cout << "PRINT is defined" << std::endl;
#else
    std::cout << "PRINT is not defined" << std::endl;
#endif

    return 0;
}