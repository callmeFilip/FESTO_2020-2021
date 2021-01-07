#ifndef STACK_H
#define STACK_H
struct Stack
{
    struct Link
    {
        void *data;
        Link *next;
        Link(void *dat, Link *nxt);
    } * head;

    Stack();
    ~Stack();

    void push(void *dat);
    void *peek();
    void *pop();
};

#endif
