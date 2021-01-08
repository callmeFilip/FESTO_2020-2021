//: C06:Stack3.cpp {O}
// Constructors/destructors
#include "Stack3.h"
#include <iostream>

Stack::Link::Link(void *dat, Link *nxt)
{
    data = dat;
    next = nxt;
}

Stack::Link::~Link() {}

Stack::Stack() { head = 0; }
Stack::Stack(void *arr[], int size)
{
    if (size > 0)
    {
        for (int i = 0; i < size; i++)
        {
            push(arr[i]);
        }
    }
}

void Stack::push(void *dat)
{
    head = new Link(dat, head);
}

void *Stack::peek()
{
    if (head == 0)
    {
        std::cout << "Stack empty" << std::endl;
        return 0;
    }
    else
    {
        return head->data;
    }
}

void *Stack::pop()
{
    if (head == 0)
        return 0;
    void *result = head->data;
    Link *oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}

Stack::~Stack()
{
    if (head != 0)
    {
        std::cout << "Stack not empty" << std::endl;
    }
} ///:~
