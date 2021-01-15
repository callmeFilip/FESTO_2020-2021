#ifndef MYSTRING_H
#define MYSTRING_H
#include <string>

class MyString
{
    const std::string buffer;

public:
    MyString(std::string = "");
    void print() const;
};

#endif