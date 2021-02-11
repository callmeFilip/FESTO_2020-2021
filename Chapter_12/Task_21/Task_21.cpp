#include "Dummy.h"

void function(Dummy &obj1, Dummy &obj2)
{
    obj1.print();
    obj2.print();

    std::cout << "After assignment: " << std::endl;
    obj1 = obj2;

    obj1.print();
    obj2.print();
}

int main()
{
    Dummy obj1;
    Dummy obj2("aaaaaaaa!");

    function(obj1, obj2);

    return 0;
}