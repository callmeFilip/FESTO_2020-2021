#ifndef ASTEROIS_H
#define ASTEROIS_H
#include <iostream>

class Asteroid
{
private:
    static int m_count;
    int id;

public:
    Asteroid()
    {
        id = m_count++;
    }
    void print() const
    {
        std::cout << "Asteroid #" << id << std::endl;
    }
};

#endif // ASTEROIS_H
