#include "Stash.h"
#include "require.h"

#include <iostream>
#include <assert.h>
#include <cstring>

//initialize Stash

//number of elements to increment every
//time new block is allocated

Stash::Stash(int n_size, int initQuantity)
{
    m_size = n_size;
    m_quantity = 0;
    m_storage = new Mem(n_size * initQuantity);
}

Stash::~Stash()
{
    delete m_storage;
}

void Stash::add(const void *element)
{
    if (m_storage->msize() < m_size * (m_quantity + 1))
    {
        m_storage->pointer(m_storage->msize() * 2);
    }
    memcpy(m_storage->pointer() + (m_quantity * m_size), element, m_size);
    m_quantity++;
}

void *Stash::fetch(int index)
{
    //check index out of bound
    if (index > m_quantity || index < 0)
    {
        std::cout << "Invalid index!" << std::endl;
        return nullptr;
    }

    //return address to the desired index
    return &(m_storage->pointer()[index * m_size]);
}

int Stash::count()
{
    return m_quantity;
}

int main()
{
    using namespace std;
    Stash intStash(sizeof(int));

    for (int i = 0; i < 100; i++)
        intStash.add(&i);

    for (int j = 0; j < intStash.count(); j++)
        cout << "intStash.fetch(" << j << ") = "
             << *(int *)intStash.fetch(j)
             << endl;

    const int bufsize = 80;
    Stash stringStash(sizeof(char) * bufsize, 100);

    ifstream in("Task_10.cpp");

    assure(in, "Task_10.cpp");
    string line;

    while (getline(in, line))
        stringStash.add((char *)line.c_str());
    int k = 0;
    char *cp;

    while ((cp = (char *)stringStash.fetch(k++)) != 0)
        cout << "stringStash.fetch(" << k << ") = "
             << cp << endl;

    return 0;
}
