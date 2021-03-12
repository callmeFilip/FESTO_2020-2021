#include "Set.h"

int main()
{
    Set<int> set;
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(3);
    set.insert(5);

    Set<int>::iterator start = set.begin();

    Set<int>::iterator end = set.end();

    while (start != end)
    {
        std::cout << start++ << std::endl;
    }

    return 0;
}
