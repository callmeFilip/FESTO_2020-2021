#include <iostream>
int function(double n_number) 
{
    return 12;
}

int main()
{
    int (*ptr_func) (double) = function;

    std::cout << (*ptr_func)(2.4);

    return 0;

}
