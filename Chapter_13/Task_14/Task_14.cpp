#include <iostream>
#include "Holder.h"
int main()
{
    Holder *obj = new ("Created at line: " + std::to_string(__LINE__)) Holder();
    std::cout << obj->m_storage.back() << std::endl;

    Holder *obj2 = new ("Created at line: " + std::to_string(__LINE__)) Holder();
    std::cout << obj->m_storage.back() << std::endl;

    Holder *obj3 = new ("Created at line: " + std::to_string(__LINE__)) Holder();
    std::cout << obj->m_storage.back() << std::endl;

    Holder *obj4 = new ("Created at line: " + std::to_string(__LINE__)) Holder();
    std::cout << obj->m_storage.back() << std::endl;

    delete obj;
    delete obj2;
    delete obj3;
    delete obj4;

    return 0;
}
