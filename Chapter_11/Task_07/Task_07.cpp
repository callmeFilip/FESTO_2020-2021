#include <iostream>

void function(double **&ppr)
{
    *(*ppr) = 2.0;
}

int main()
{
    double price = 1.0;
    double *p = &price;
    double **pp = &p;
    function(pp);

    std::cout << price << std::endl;

    return 0;
}