#ifndef HEADER_H
#define HEADER_H

class Combinator
{
public:
#ifdef DEFAULT_VALUE
    int add(int = 0, int = 0, int = 0);
#else
    int add();
    int add(int);
    int add(int, int);
    int add(int, int, int);
#endif
};

#endif