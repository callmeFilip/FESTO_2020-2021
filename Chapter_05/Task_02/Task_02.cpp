#include <iostream>
#include "Lib.h"
#include "Libc.h"

//definitions of Libc methods
void Libc::setA(std::string input)
{
    s[0] = input;
}

void Libc::setB(std::string input)
{
    s[1] = input;
}

void Libc::setC(std::string input)
{
    s[2] = input;
}

std::string Libc::getA() { return s[0]; }
std::string Libc::getB() { return s[1]; }
std::string Libc::getC() { return s[2]; }

int main()
{
    /*
    Lib x;
    x.a = " 1 ";
    x.b = " 2 ";
    x.c = " 3 ";

    std::cout << x.a << x.b << x.c << std::endl;

    */

    Libc x;
    x.setA(" 1 ");
    x.setB(" 2 ");
    x.setC(" 3 ");

    std::cout << x.getA() << x.getB() << x.getC() << std::endl;

    return 0;
}