#ifndef DUMMY_H
#define DUMMY_H
#include <iostream>

class Dummy
{
private:
public:
    Dummy operator=(const Dummy &other, std::string str = "op= call");
};

Dummy Dummy::operator=(const Dummy &other, std::string str = "op= call")
{
    if (this == &other)
    {
        return *this;
    }
}
#endif // DUMMY_H
