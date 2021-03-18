#include "TStack2.h"
#include <iostream>
class Obj
{
private:
public:
    Obj();
    ~Obj();
};

Obj::Obj()
{
    std::cout << "*Obj" << std::endl;
}

Obj::~Obj()
{
    std::cout << "~Obj" << std::endl;
}

int main()
{
    const int SIZE = 5;

    Obj *arr[SIZE] = {new Obj(), new Obj(), new Obj(), new Obj(), new Obj()};

    {
        Stack<Obj> storage;

        Obj *arr[SIZE] = {new Obj(), new Obj(), new Obj(), new Obj(), new Obj()};

        for (int i = 0; i < SIZE; i++)
        {
            storage.push(arr[i], true);
        }

        std::cout << "5 Objects were created but for will get deleted, because of ownership" << std::endl;
        storage.changeOwnershipTop(false);
    }

    std::cout << "Now after the destructor finished its job i manually delete 5th element" << std::endl;

    delete arr[SIZE - 1];

    return 0;
}
