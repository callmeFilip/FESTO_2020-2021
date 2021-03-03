#include "Derivatives.h"
#include <vector>

int main()
{
    std::vector<Rodent *> arr;

    arr.push_back(new GuineaPig);
    arr.push_back(new Gerbil);
    arr.push_back(new Hamster);
    arr.push_back(new Mouse);

    const size_t VSIZE = arr.size();

    for (size_t i = 0; i < VSIZE; i++)
    {
        arr[i]->eat();
        arr[i]->gnaw();
        std::cout << std::endl;
    }

    for (size_t i = 0; i < VSIZE; i++)
    {
        delete arr[i]; // i am not sure if the right object types will be deleted with delete[]
        arr[i] = 0;
    }

    arr.clear();
    arr.shrink_to_fit();

    return 0;
}
