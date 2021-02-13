#include "Counted.h" // + iostream
#include "Stack4.h"

int main()
{
    const int COUNTEDELEMENTS = 5;
    Stack storage;

    for (int i = 0; i < COUNTEDELEMENTS; i++)
    {
        storage.push(new Counted());
    }

    for (int i = 0; i < COUNTEDELEMENTS; i++)
    {
        Counted *element = (Counted *)storage.pop();
        element->print();
        delete element;
    }

    return 0;
}
