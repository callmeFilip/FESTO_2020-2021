#include "Rock.h"
#include "vector"

// #define BYVALUE
// #define BYADDRESS
// #define BYREFERENCE

int main()
{
    const int ROCKS = 5;

#ifdef BYVALUE

    std::vector<Rock> storage;

    for (int i = 0; i < ROCKS; i++)
    {
        Rock obj;
        storage.push_back(obj); // Objects are created and deleted because of vector expanding and moving.
    }

#endif

#ifdef BYADDRESS

    std::vector<Rock *> storage;

    for (int i = 0; i < ROCKS; i++)
    {
        Rock *obj = new Rock();
        storage.push_back(obj);
    }

    for (int i = 0; i < ROCKS; i++)
    {
        delete storage[i];
    }

    storage.clear();
    storage.shrink_to_fit();

#endif

#ifdef BYREFERENCE

    std::vector<Rock &> storage; // no, vector class does not allow this

    for (int i = 0; i < ROCKS; i++)
    {
        Rock obj;
        storage.push_back(obj);
    }

    storage.clear();
    storage.shrink_to_fit();

#endif

    return 0;
}
