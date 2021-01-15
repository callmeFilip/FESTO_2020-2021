#include <ctime>
#include <iostream>

int main()
{
    const time_t timeNow = time(0); //initialize
    std::cout << timeNow << std::endl;

    //timeNow = time(0); //compile-time error: timeNow is read-only variable
    std::cout << timeNow << std::endl;

    return 0;
}
