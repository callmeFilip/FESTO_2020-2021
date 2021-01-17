//: C09:Cpptime.cpp
// Testing a simple time class
#include "Cpptime.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    Time start;
    std::string lastInput;
    do
    {
        std::getline(std::cin, lastInput);
        if (lastInput.empty())
        {
            break;
        }
        else
        {
            lastInput = "";
        }

    } while (true);

    Time end;
    cout << endl;
    cout << "start = " << start.ascii();
    cout << "end = " << end.ascii();
    cout << "delta = " << end.delta(&start);
} ///:~