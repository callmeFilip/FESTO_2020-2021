#include <cstring>
#include <assert.h>

#include "Stack_Of_Int.h"

#define STORAGESIZE 100

//StackImp declaration

struct Stack_Of_Int::Stack_Imp
{
    int data[STORAGESIZE];
    int topIndex;

public:
    void initialize();
    void push(int *n_data);
    int *peek();
    int *pop();
    void cleanup();
};

//Constructors and destructors for Stack_Of_Int
Stack_Of_Int::Stack_Of_Int()
{
    imp = new Stack_Imp;
    imp->initialize();
}

Stack_Of_Int::~Stack_Of_Int()
{
    imp->cleanup();
}

//Methods for Stack_Of_Int
void Stack_Of_Int::push(int *n_data)
{
    imp->push(n_data);
}

int *Stack_Of_Int::peek()
{
    return imp->peek();
}
int *Stack_Of_Int::pop()
{
    return imp->pop();
}

//Methods for Stack_Imp

void Stack_Of_Int::Stack_Imp::initialize()
{
    topIndex = 0;
    memset(data, 0, STORAGESIZE * sizeof(int));
}

void Stack_Of_Int::Stack_Imp::cleanup()
{
}

void Stack_Of_Int::Stack_Imp::push(int *n_data)
{
    data[topIndex] = *n_data;
    topIndex++;
}

int *Stack_Of_Int::Stack_Imp::peek()
{
    int *result = nullptr;

    assert(topIndex != 0);

    result = &data[topIndex - 1];

    return result;
}

int *Stack_Of_Int::Stack_Imp::pop()
{
    int *result = nullptr;

    assert(topIndex != 0);

    result = &data[topIndex - 1];

    topIndex--;

    return result;
}
