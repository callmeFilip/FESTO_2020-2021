#include <iostream>
#include "Calculator.h"
#include "Calculator2.h"
namespace Calc = Calculator;

int function1()
{
    int result;
    result = Calc::sum(1, 1) + Calc::substract(2, 2);

    return result;
}

int function2()
{
    using namespace Calc;

    int result;
    result = Calc::multiply(1, 1) + Calc::divide(2, 2);

    return result;
}

int main()
{
    std::cout << function1() << std::endl;
    std::cout << function2() << std::endl;

    return 0;
}
