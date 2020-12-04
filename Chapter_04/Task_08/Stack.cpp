//: C04:Stack.cpp {O}
// Linked list with nesting
#include "Stack.h"
using namespace std;

void Stack::Link::initialize(void *n_ptrDat, Link *n_ptrNext)
{
    data = n_ptrDat;
    next = n_ptrNext;
}

void Stack::initialize()
{
    head = 0;
}

void Stack::push(void *dat)
{
    Link *newLink = new Link;

    newLink->initialize(dat, head);

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
