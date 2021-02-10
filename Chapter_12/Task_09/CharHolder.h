#ifndef CHARHOLDER_H
#define CHARHOLDER_H
#include <iostream>
class CharHolder
{
private:
    char m_storage;

public:
    CharHolder() : m_storage('a') {}
    friend std::ostream &operator<<(std::ostream &os, const CharHolder &obj);
    friend std::istream &operator>>(std::istream &is, CharHolder &obj);
};

#endif // CHARHOLDER_H
