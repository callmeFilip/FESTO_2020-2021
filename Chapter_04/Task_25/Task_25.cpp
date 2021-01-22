#include <iostream>
#include "Header.h"

void LinkedList::printData()
{
    LinkedList *current_element = this;

    while (current_element->m_next != 0)
    {
        std::cout << (long)current_element
                  << " Have m_value = "
                  << current_element->m_value
                  << std::endl;
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

    // Cleanup
    LinkedList *current = start;
    LinkedList *previous;
    while (current != 0)
    {
        previous = current;
        current = current->m_next;

        delete previous;
    }

    return 0;
}
