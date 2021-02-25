#include <iostream>
#include "Header.h"

void printElement(LinkedList *current_element)
{
    std::cout << (long)current_element
              << " Have m_value = "
              << current_element->m_value
              << std::endl;
}

void LinkedList::printData()
{
    LinkedList *current_element = this;

    while (current_element->m_next != 0)
    {
        printElement(current_element);
        current_element = current_element->m_next;
    }

    printElement(current_element);
}

void LinkedList::createArray(int length)
{
    LinkedList *head = this;

    int i;
    for (i = 0; i < length - 1; i++)
    {
        head->m_value = i;
        head->m_next = new LinkedList;
        head = head->m_next;
    }

    head->m_next = 0;
    head->m_value = i;
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
