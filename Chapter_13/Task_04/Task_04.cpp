#include <vector>
#include "Counted.h" // + iostream

int main()
{
    const int COUNTEDELEMENTS = 10;
    std::vector<Counted *> storage;

    for (int i = 0; i < COUNTEDELEMENTS; i++)
    {
        storage.push_back(new Counted());
    }

    for (int i = 0; i < COUNTEDELEMENTS; i++)
    {
        std::cout << storage[i] << std::endl;
    }

    for (int i = COUNTEDELEMENTS - 1; i >= 0; i--)
    {
        delete storage[i];
        storage[i] = 0;

        storage.pop_back();
    }

    storage.shrink_to_fit();

    return 0;
}
