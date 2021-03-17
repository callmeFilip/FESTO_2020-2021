#ifndef OCONTAINER_H
#define OCONTAINER_H

#include <vector>
#include <string>

template <class T>
class OContainer : public std::vector<void *>
{
private:
public:
    void push_back(T *obj)
    {
        std::vector<void *>::push_back(obj);
    }

    T *operator[](int index)
    {
        // takes the void* from vector and casts it to string*
        return static_cast<T *>(std::vector<void *>::operator[](index));
    }
};

#endif // OCONTAINER_H
