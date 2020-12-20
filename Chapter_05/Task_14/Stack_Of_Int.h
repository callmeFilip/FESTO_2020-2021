#ifndef STACK_OF_INT_H
#define STACK_OF_INT_H

class Stack_Of_Int
{
    struct Stack_Imp;
    Stack_Imp *imp;

public:
    Stack_Of_Int();
    void push(int *n_data);
    int *peek();
    int *pop();
    ~Stack_Of_Int();
};

#endif