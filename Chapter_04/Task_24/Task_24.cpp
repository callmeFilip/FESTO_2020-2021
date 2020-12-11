#include <iostream>
#include "Header.h"
void createArray(LinkedList *ptr_element, int length)
{
    LinkedList *head = ptr_element;

    for (int i = 0; i < length; i++)
    {
        head->m_value = i;
        head->m_next = new LinkedList;
        head = head->m_next;
    }

    head->m_next = 0;
    head->m_value = length;
};

void printData(LinkedList *ptr_start)
{
    LinkedList *current_element = ptr_start;

    while (current_element->m_next != 0)
    {
        std::cout << current_element->m_value << std::endl;
        current_element = current_element->m_next;
    }

    delete current_element;
}

int main()
{
    LinkedList *start = new LinkedList;

    createArray(start, 5);
    printData(start);

    delete start;

    return 0;
}
