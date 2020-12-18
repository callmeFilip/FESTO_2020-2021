#ifndef INDENTIFIER_H
#define INDENTIFIER_H

class Indentifier
{
    int count;

public:
    Indentifier();

    friend void increase(Indentifier *obj);

    void print();
};

#endif