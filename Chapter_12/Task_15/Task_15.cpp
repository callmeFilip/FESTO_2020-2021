#include "BirdHouse.h"

int main()
{
    Bird fb;
    Bird sb;

    BirdHouse fbh(fb, &fb, fb), sbh(sb, new Bird(), sb);

    // fbh = sbh; private whitin context

    // BirdHouse tbh(fbh); private whitin context

    std::cout
        << fb << "\n"
        << fbh << sbh << "\n"
        << sb << std::endl;

    return 0;
}
