#include "BirdHouse.h"

int main()
{
    Bird fb, sb(2); // First and second bird

    BirdHouse fbh(fb, &fb, fb); // First Birdhouse

    // fbh = sbh; private whitin context
    // BirdHouse tbh(fbh); private whitin context

    BirdHouse sbh(2); // second birdhouse for aritmetic test
    BirdHouse tbh(3); // third birdhouse for aritmetic test

    ((fb + sb) * (sb - fb) / sb).printNum();      // test Bird operators
    (((sbh + tbh) * tbh / tbh) - sbh).printNum(); // test BirdHouse operators

    return 0;
}
