#include "Set.h"
#include <set>

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
    std::cout << "Stl: " << std::endl;
    std::set<int> stlSet;

    stlSet.insert(1);
    stlSet.insert(2);
    stlSet.insert(3);
    stlSet.insert(3);
    stlSet.insert(5);

    std::set<int>::iterator stlStart = stlSet.begin();

    std::set<int>::iterator stlEnd = stlSet.end();

    while (stlStart != stlEnd)
    {
        std::cout << *stlStart << std::endl;
        stlStart++;
    }

    return 0;
}
