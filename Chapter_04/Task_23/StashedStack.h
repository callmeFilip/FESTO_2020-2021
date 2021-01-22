#ifndef STASHEDSTACK_H
#define STASHEDSTACK_H
#include "Header.h"
#include "string"

struct StashedStack
{
    //members
    Stack m_stack;

    //constructors and destructors
    StashedStack();
    ~StashedStack();

    //methods
    void push(Stash *element);
    char *pop(void);
    void fillFromFile(std::string path);
};

#endif