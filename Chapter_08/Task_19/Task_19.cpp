#include "Header.h"
#include <iostream>
MathStuff::MathStuff(float fNum, float cfNum)
    : fNum(fNum),
      cfNum(cfNum)
{
}
void MathStuff::printData()
{
    std::cout << fNum << "\n"
              << cfNum << std::endl;
}
int main()
{
    MathStuff obj;
    obj.printData();

    return 0;
}
