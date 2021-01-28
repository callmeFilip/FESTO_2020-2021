#include "StaticStringHolder.h"

const StringHolder StaticStringHolder::cArr[StaticStringHolder::ARRAYSIZE];
StringHolder StaticStringHolder::Arr[StaticStringHolder::ARRAYSIZE];

void StaticStringHolder::print_cArr()
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        cArr[i].print();
    }
}
void StaticStringHolder::print_Arr()
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        Arr[i].print();
    }
}
