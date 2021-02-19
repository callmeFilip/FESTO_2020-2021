#include <iostream>
#include "StringVector.h"
//#define VOIDPTR

int main()
{
    StringVector storage;
    std::string *str1 = new std::string("str1");
    std::string *str2 = new std::string("str2");
    std::string *str3 = new std::string("str3");

#ifdef VOIDPTR
    void *vp = 0;
    storage.push_back(vp); // error invalid conversion from 'void*' to 'std::string*'
#endif

    storage.push_back(str1);
    storage.push_back(str2);
    storage.push_back(str3);
    //! storage.push_back(vp); // error invalid conversion from 'void*' to 'std::string*'

    size_t size = storage.size();
    for (size_t i = 0; i < size; i++)
    {
        std::cout << *storage[i] << std::endl;
    }

    for (size_t i = size - 1; i < size; i--) // i < size => because if size is less than 0 it becomes INT_MAX
    {
        delete storage[i];
    }

    storage.clear();
    storage.shrink_to_fit();

    return 0;
}
