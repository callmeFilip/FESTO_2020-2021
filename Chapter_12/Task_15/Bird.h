#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include <string>

class Bird
{
private:
    std::string m_name;
    static int m_count;

public:
    Bird();
    Bird(const Bird &other);
    Bird &operator=(const Bird &other);

    friend std::ostream &operator<<(std::ostream &os, const Bird &obj);
};

#endif // BIRD_H
