#include <iostream>
#include "Header.h"
void createArray(LinkedList *ptr_element, int length)
{
    LinkedList *head = ptr_element;
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

void printData(LinkedList *ptr_start)
{
    LinkedList *current_element = ptr_start;

    while (current_element->m_next != 0)
    {
        std::cout << (long)current_element
                  << " Have m_value = "
                  << current_element->m_value
                  << std::endl;
        current_element = current_element->m_next;
    }

    std::cout << (long)current_element
              << " Have m_value = "
              << current_element->m_value
              << std::endl;
}

int main()
{
    LinkedList *start = new LinkedList;

    createArray(start, 5);
    printData(start);

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
