#ifndef HEADER_H
#define HEADER_H

class Combinator
{
public:
    int add(int, int, int);
#ifndef DEFAULT_VALUE
    int add();
    int add(int);
    int add(int, int);
#endif
};

#endif