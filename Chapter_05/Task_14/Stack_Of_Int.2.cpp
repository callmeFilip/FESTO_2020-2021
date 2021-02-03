//#define STACKOFINT1

#ifdef STACKOFINT1

#include <cstring>
#include <assert.h>
#include <vector>
#include "Stack_Of_Int.h"

#define STORAGESIZE 100

//StackImp declaration

struct Stack_Of_Int::Stack_Imp
{
    std::vector<int> data;

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
}

void Stack_Of_Int::Stack_Imp::cleanup()
{
    data.clear();
    data.shrink_to_fit();
}

void Stack_Of_Int::Stack_Imp::push(int *n_data)
{
    data.push_back(*n_data);
}

int *Stack_Of_Int::Stack_Imp::peek()
{
    int *result = nullptr;

    assert(!data.empty());

    result = &data.back();

    return result;
}

int *Stack_Of_Int::Stack_Imp::pop()
{
    int *result = nullptr;

    assert(!data.empty());

    result = &data.back();

    data.pop_back();

    return result;
}
#endif
