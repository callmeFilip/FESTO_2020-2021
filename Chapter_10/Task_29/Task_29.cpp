#include "StringHolder.h"
#include "StaticStringHolder.h"

void StringHolder::print() const
{
    std::cout << m_storage << std::endl;
}

int main()
{
    StaticStringHolder::print_Arr();
    StaticStringHolder::print_cArr();

    return 0;
}
