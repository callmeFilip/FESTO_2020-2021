#ifndef HEADER_H
#define HEADER_H

class Square
{
private:
    enum
    {
        ARRAYSIZE = 100
    };
    const int side;
    int array[ARRAYSIZE];

public:
    Square(const int = 0);
};

#endif