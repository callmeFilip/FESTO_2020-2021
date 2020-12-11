#include <iostream>
#include "Header.h"

void LinkedList::printData()
{
    LinkedList *current_element = this;

    while (current_element->m_next != 0)
    {
        std::cout << current_element->m_value << std::endl;
        current_element = current_element->m_next;
    }

    delete current_element;
}

void LinkedList::createArray(int length)
{
    LinkedList *head = this;

    for (int i = 0; i < length; i++)
    {
        head->m_value = i;
        head->m_next = new LinkedList;
        head = head->m_next;
    }

    head->m_next = 0;
    head->m_value = length;
};

int main()
{
    LinkedList *start = new LinkedList;

    start->createArray(5);
    start->printData();

    delete start;

    return 0;
}
