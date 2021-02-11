#ifndef DUMMY_H
#define DUMMY_H
#include <iostream>

class Dummy
{
private:
    std::string m_str;
    char m_ch;

public:
    Dummy(std::string str = "op= call", char ch = 'a') : m_str(str), m_ch(ch) {}

    void print() const;

    Dummy &operator=(const Dummy &other);
};

#endif // DUMMY_H
