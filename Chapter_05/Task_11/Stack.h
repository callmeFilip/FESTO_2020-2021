//: C04:Stack.h
// Nested struct in linked list
#ifndef STACK_H
#define STACK_H
class Stack
{
    struct Link
    {
        void *data;
        Link *next;
        void initialize(void *dat, Link *nxt);
    } * head;

public:
    void initialize();
    void push(void *dat);
    void *peek();
    void *pop();
    void cleanup();
};
#endif // STACK_H ///:~
