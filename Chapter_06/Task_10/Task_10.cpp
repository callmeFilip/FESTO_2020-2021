#include "Header.h"

Building::Building(int initValue)
{
    width = initValue;
}

int main()
{
    Building house;

    return 0;
}

//When you manually create a constructor or destructor, a default one isn't getting created

/*
Task_10.cpp:10:14: error: no matching function for call to 'Building::Building()'
   10 |     Building house;
      |              ^~~~~
Task_10.cpp:3:1: note: candidate: 'Building::Building(int)'
    3 | Building::Building(int initValue)
      | ^~~~~~~~
Task_10.cpp:3:1: note:   candidate expects 1 argument, 0 provided
In file included from Task_10.cpp:1:
Header.h:4:7: note: candidate: 'constexpr Building::Building(const Building&)'
    4 | class Building
      |       ^~~~~~~~
Header.h:4:7: note:   candidate expects 1 argument, 0 provided
Header.h:4:7: note: candidate: 'constexpr Building::Building(Building&&)'
Header.h:4:7: note:   candidate expects 1 argument, 0 provided
*/
