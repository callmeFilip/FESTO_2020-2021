#include "Edelweiss.h"
#include "Impatiens_Walleriana.h"
#include "Greenhouse.h"
#include <iostream>

int main()
{
    Greenhouse gh(356);

    Plant *arr[] = {new Impatiens_Walleriana("Impatiens Walleriana"),
                    new Edelweiss("White edelweiss")};

    std::cout << "Volume: " << gh.getVolume() << std::endl;

    // Adding
    gh.addPlant(arr[0]);
    gh.addPlant(arr[1]);

    delete gh.popPlant();

    // Test if everything is correct
    gh[0]->photosynthesis();
    gh[0]->grow();

    return 0;
}