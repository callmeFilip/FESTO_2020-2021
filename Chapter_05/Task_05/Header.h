#ifndef HEADER_H
#define HEADER_H
#include <string>

class Society;
class Human;

class Time
{
public:
    void yearPass(Human *object);
};

class Human
{
    int age;
    std::string name;

public:
    Human();
    void printInfo();

    friend Society;
    friend void Time::yearPass(Human *object);
};

class Society
{
public:
    void setName(Human *object, std::string name);
};

#endif