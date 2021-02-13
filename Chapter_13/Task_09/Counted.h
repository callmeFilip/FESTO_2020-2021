#ifndef COUNTED_H
#define COUNTED_H
#include <iostream>

class Counted
{
private:
    int id;
    static int count;

public:
    Counted() : id(count++)
    {
        std::cout << "*Id: " << id << std::endl;
    }
    ~Counted()
    {
        std::cout << "~Id: " << id << std::endl;
    }
};

int Counted::count = 0;

#endif // COUNTED_H
