#ifndef HEADER_H
#define HEADER_H
class CharClass
{
private:
    static const int SIZE = 100;
    char storage[SIZE];

public:
    CharClass();

    void print();
};

#endif
