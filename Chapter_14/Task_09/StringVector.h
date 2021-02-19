#ifndef STRINGVECTOR_H
#define STRINGVECTOR_H

#include <vector>
#include <string>

class StringVector : public std::vector<void *>
{
private:
public:
    StringVector() : std::vector<void *>() {}

    void push_back(std::string *);

    std::string *operator[](int) const;
};

void StringVector::push_back(std::string *ptr)
{
    std::vector<void *>::push_back(reinterpret_cast<void *>(ptr));
}

std::string *StringVector::operator[](int index) const
{
    if (index < 0)
    {
        return new std::string("wrong index");
    }

    return reinterpret_cast<std::string *>(std::vector<void *>::operator[](index));
}

#endif // STRINGVECTOR_H
