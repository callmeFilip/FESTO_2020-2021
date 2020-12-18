#include "Header.h"
#include <iostream>

//Human initializations
Human::Human()
{
    age = 0;
}

void Human::printInfo()
{
    std::cout << name << " is: " << age << " years old." << std::endl;
}

//Society initializations
void Society::setName(Human *object, std::string name)
{
    object->name = name;
}

//Time initializations

void Time::yearPass(Human *object)
{
    object->age++;
}

int main()
{
    Human n_01;
    Society group_01;
    Time time;

    group_01.setName(&n_01, "Peter");
    time.yearPass(&n_01);

    n_01.printInfo();

    return 0;
}