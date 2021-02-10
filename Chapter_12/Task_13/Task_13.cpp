#include "Storage.h"
int main()
{
    Storage st1(new int(20));
    Storage st2;
    st2 = st1;

    std::cout << "The addresses that the pointers are pointing to: " << std::endl;
    std::cout << st1 << std::endl;
    std::cout << st2 << std::endl;

    return 0;
}
