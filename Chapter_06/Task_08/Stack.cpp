//: C04:Stack.cpp {O}
// Linked list with nesting
#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Link::Link(void *n_ptrDat, Link *n_ptrNext)
{
    data = n_ptrDat;
    next = n_ptrNext;
}

Stack::Stack()
{
    head = 0;
}
Stack::~Stack()
{
    if (head != 0)
    {
        cout << "Stack not empty" << endl;
    }
}

void Stack::push(void *dat)
{
    Link *newLink = new Link(dat, head);

    head = newLink;
}

void *Stack::peek()
{
    return head->data;
}

void *Stack::pop()
{
    if (head == 0)
    {
        return 0;
    }

    void *result = head->data;
    Link *oldHead = head;
    head = head->next;

    delete oldHead;

    return result;
}
