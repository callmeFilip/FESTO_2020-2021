#include "FunctionClass.h"
#include "FunctionHolder.h"

const int FUNC_TABLE_SIZE = 7;

// function table is used to get and push functions in holder
func_t func_table[FUNC_TABLE_SIZE] = {
    &FunctionClass::a,
    &FunctionClass::b,
    &FunctionClass::c,
    &FunctionClass::d,
    &FunctionClass::e,
    &FunctionClass::f,
    &FunctionClass::g,
};

int main()
{
    FunctionClass obj;
    FunctionHolder holder(obj);

    for (int i = 0; i < FUNC_TABLE_SIZE; i++)
    {
        holder.add(func_table[i]);
    }

    holder.run();

    std::cout << "Popping the last 2 elements.." << std::endl;

    holder.remove();
    holder.remove();

    holder.run();

    return 0;
}
