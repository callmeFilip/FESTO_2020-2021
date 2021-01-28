#ifndef STRINGHOLDER_H
#define STRINGHOLDER_H
#include <string>
#include <iostream>

class StringHolder
{
private:
    std::string m_storage;

public:
    StringHolder(std::string string_value = "default value") : m_storage(string_value) {}
    void print() const;
};

#endif // STRINGHOLDER_H
