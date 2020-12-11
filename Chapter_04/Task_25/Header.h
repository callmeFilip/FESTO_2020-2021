#ifndef HEADER_H
#define HEADER_H
struct LinkedList
{
    int m_value;
    LinkedList *m_next;

    void printData();
    void createArray(int length);
};

#endif
