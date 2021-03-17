#ifndef STRINGVECTOR_H
#define STRINGVECTOR_H

#include <vector>
#include <string>

class StringVector : public std::vector<void *>
{
private:
public:
    void push_back(std::string *obj)
    {
        std::vector<void *>::push_back(obj);
    }

    std::string *operator[](int index)
    {
        // takes the void* from vector and casts it to string*
        return static_cast<std::string *>(std::vector<void *>::operator[](index));
    }
};

#endif // STRINGVECTOR_H
