#include "Header.h"

#include <iostream>

bool Bird::checkName(Fish *object)
{
    if (m_name == object->m_name)
    {
        return true;
    }
    return false;
}

bool Fish::checkName(Bird *object)
{
    if (m_name == object->m_name)
    {
        return true;
    }
    return false;
}

int main()
{

    Bird willow;
    Fish mackerel;

    std::cout << willow.checkName(&mackerel) << std::endl;
    std::cout << mackerel.checkName(&willow) << std::endl;

    return 0;
}