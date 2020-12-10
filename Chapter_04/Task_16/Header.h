#ifndef HEADER_H
#define HEADER_H
#include <vector>

struct Stash
{
    /* data */
    int m_size;     //size of each element
    int m_quantity; // number of elements
    int m_next;     //next empty space

    std::vector<char> m_storage;

    //constructors and destructors

    Stash();    //default sets the type to char-size
    Stash(int); //sets the type to the size given
    ~Stash();   //cleanup

    //methods
    bool add(const void *element);
    void *at(int index);
    int length();
    bool inflate(int increase);
};

#endif