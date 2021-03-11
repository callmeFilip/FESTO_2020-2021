#include "TPStash.h"
#include <iostream>

int main()
{

    PStash<int, 5> istash;
    istash.add(new int(2));
    std::cout << istash.quantity << std::endl;

    istash.add(new int(3));
    istash.add(new int(4));
    istash.add(new int(5));
    istash.add(new int(3));
    istash.add(new int(4));
    std::cout << istash.quantity << std::endl;
    // inflate call

    istash.changeInflateSize(2);

    istash.add(new int(5));
    istash.add(new int(3));
    istash.add(new int(4));
    istash.add(new int(3));
    istash.add(new int(4));
    istash.add(new int(5));
    istash.add(new int(3));
    istash.add(new int(4));
    std::cout << istash.quantity << std::endl;

    istash.add(new int(5));
    istash.add(new int(3));
    istash.add(new int(4));

    std::cout << istash.quantity << std::endl;

    istash.add(new int(5));
    istash.add(new int(3));
    istash.add(new int(4));
    istash.add(new int(5));
    istash.add(new int(3));
    istash.add(new int(4));
    istash.add(new int(5));

    istash.changeInflateSize(3);
    istash.add(new int(3));
    istash.add(new int(4));
    istash.add(new int(5));
    istash.add(new int(3));
    istash.add(new int(4));
    istash.add(new int(5));
    istash.add(new int(3));
    istash.add(new int(4));
    istash.add(new int(5));

    std::cout << istash.quantity << std::endl;

    return 0;
}
