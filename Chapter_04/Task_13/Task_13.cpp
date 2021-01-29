#include "Videotape.h"

int main()
{
    Videotape type1(1, "Titanik");

    type1.setRent(83, 3);

    type1.printVideoData();

    type1.returned();

    type1.printVideoData();

    type1.videotypeData();

    return 0;
}
