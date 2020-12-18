//: C04:StackTest.cpp
//{L} Stack
//{T} StackTest.cpp
// Test of nested linked list
#include <iostream>
#include "Stack.h"
#include "Hen.h"

using namespace std;

const int CHICKENCOUNT = 4;

void Hen::display()
{
    std::cout << "Hen" << std::endl;
}

void Hen::Nest::display()
{
    std::cout << "Nest" << std::endl;
}

void Hen::Nest::Egg::display()
{
    std::cout << "Egg" << std::endl;
}

int main()
{
    //declare and initialize
    Stack chickenCoop;
    chickenCoop.initialize();

    for (int i = 0; i < CHICKENCOUNT; i++)
    {
        chickenCoop.push(new Hen);
    }

    //empty and print
    Hen *tempHen;
    while ((tempHen = (Hen *)chickenCoop.pop()) != 0)
    {
        tempHen->display();
        delete tempHen;
    }

    //cleanup
    chickenCoop.peek();
    chickenCoop.cleanup();

} ///:~