#include "Proxy.h"
#include "Implementation1.h"
#include "Implementation2.h"
#include <iostream>

int main()
{
    Implementation1 *imp1 = new Implementation1;
    Implementation2 *imp2 = new Implementation2;

    Proxy proxy(imp1);

    proxy.f();
    proxy.g();
    proxy.h();

    std::cout << "Chaning implementation.." << std::endl;

    proxy.changeSubj(imp2);

    proxy.f();
    proxy.g();
    proxy.h();

    return 0;
}
