#include "Monitor.h"
#include <iostream>

void callerCopy(Monitor obj)
{
    obj.setId(1);
    std::cout << obj.getId() << std::endl;
}

void callerRef(Monitor &obj)
{
    obj.setId(2);
    std::cout << obj.getId() << std::endl;
}
void callerCREF(const Monitor &obj)
{
    // obj.setId(3); // generates error because setId is non-const called on const object
    std::cout << obj.getId() << std::endl;
}

int main()
{
    Monitor monitor(65);

    callerCopy(monitor);
    callerRef(monitor);
    callerCREF(monitor);

    return 0;
}