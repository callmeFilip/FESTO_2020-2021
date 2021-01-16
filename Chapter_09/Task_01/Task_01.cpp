#include <iostream>

#define F(x) (x + 1)
//#define F (x)(x + 1) //error 'x' was not declared in this scope
//expands to (x) (x + 1)
int main()
{
    std::cout << F(1) << std::endl;
    std::cout << F(1) << std::endl;
    return 0;
}
