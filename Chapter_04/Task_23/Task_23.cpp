#include <iostream>
#include <assert.h>
#include <fstream>
#include <vector>
#include "StashedStack.h"
using namespace std;

//number of elements to increment every
//time new block is allocated
const int INCREMENT = 25;

Stash::Stash()
{
    m_size = 1;
    m_quantity = 0;
    m_storage = nullptr;
    m_next = 0;
}

Stash::Stash(int n_size)
{
    m_size = n_size;
    m_quantity = 0;
    m_storage = nullptr;
    m_next = 0;
}

Stash::~Stash()
{
    std::cout << "~" << std::endl;

    if (m_storage != 0)
    {
        std::cout << "freeing memory..." << std::endl;
        delete[] m_storage;
    }
}

unsigned int Stash::add(const void *element)
{
    static int counter = 0;
    //chech for avaidable space
    if (m_next >= m_quantity)
    {
        // copying the data to bigger block of memory
        inflate(INCREMENT);
    }

    //starting at next empty space
    int temp_startBytes = m_next * m_size;
    unsigned char *temp_element = (unsigned char *)element;

    for (int i = 0; i < m_size; i++)
    {
        m_storage[temp_startBytes + i] = temp_element[i];
        counter++;
    }

    m_next++;

    return counter;
}

void *Stash::at(int index)
{
    //check index out of bound
    assert(0 <= index);
    std::cout << &m_next << std::endl;

    if (index >= m_next)
    {
        std::cout << "wrong index" << std::endl;
        return 0;
    }

    //return address to the desired index
    return &(m_storage[index * m_size]);
}

bool Stash::inflate(int increase)
{
    //boundry check
    assert(increase > 0);

    //copying data
    int temp_newQuantity = m_quantity + increase;
    int temp_newBytes = temp_newQuantity * m_size;
    int temp_oldBytes = m_quantity * m_size;
    //creating buffer storage
    unsigned char *buffStorage = new unsigned char[temp_newBytes];

    //copying from old storage to the new one
    for (int i = 0; i < temp_oldBytes; i++)
    {
        buffStorage[i] = m_storage[i];
    }

    delete[] m_storage;

    m_storage = buffStorage;

    m_quantity = temp_newQuantity;

    return true;
}

int Stash::length()
{
    return m_next;
}

//stack

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

void Stack::cleanup()
{
    if (head != 0)
    {
        cout << "Stack not empty" << endl;
    }
}

int main()
{
    StashedStack storage;

    storage.fillFromFile("test.txt");

    //gets the element from Stack and saves it in temporary Stash * object
    char *result;

    //while the stack is not empty, pop last element, save it to result and print it
    while ((result = storage.pop()) != 0)
    {
        std::cout << result << std::endl;
        delete result;
    }

    return 0;
}
