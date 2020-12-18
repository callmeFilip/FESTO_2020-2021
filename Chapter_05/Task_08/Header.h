#ifndef HEADER_H
#define HEADER_H
#include <string>

class Tiger
{
    std::string name;

protected:
    std::string color;

public:
    std::string kennel;
    void printMap();

private:
    int age;

public:
    int speed;

protected:
    int horsepower;
};

#endif