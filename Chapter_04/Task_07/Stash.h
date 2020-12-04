#pragma once

struct Stash
{
    /* data */
    int m_size;     //size of each element
    int m_quantity; // number of elements
    int m_next;     //next empty space

    unsigned char *m_storage; //starting point of storage

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
