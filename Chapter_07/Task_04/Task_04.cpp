#include <iostream>
#include "Header.h"

#ifndef DEFAULT_VALUE
int Combinator::add()
{
    return 0;
}
int Combinator::add(int first_number)
{
    return first_number;
}
int Combinator::add(int first_number, int second_number)
{
    return first_number + second_number;
}
int Combinator::add(int first_number, int second_number, int third_number)
{
    return first_number + second_number + third_number;
}

#else

int Combinator::add(int first_number = 0, int second_number = 0, int third_number = 0)
{
    return first_number + second_number + third_number;
}

#endif
int main()
{
    Combinator obj;
    std::cout << obj.add() << std::endl;
    std::cout << obj.add(2) << std::endl;
    std::cout << obj.add(3, 4) << std::endl;
    std::cout << obj.add(5, 6, 7) << std::endl;

    return 0;
}
/*
With defaulth value
F:\Festo\FESTO_2020-2021\Chapter_07\Task_04>g++ Task_04.cpp -D DEFAULT_VALUE

F:\Festo\FESTO_2020-2021\Chapter_07\Task_04>a.exe
0
2
7
18

Without defaulth value
F:\Festo\FESTO_2020-2021\Chapter_07\Task_04>g++ Task_04.cpp

F:\Festo\FESTO_2020-2021\Chapter_07\Task_04>a.exe
0
2
7
18
*/