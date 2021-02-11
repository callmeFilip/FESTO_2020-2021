#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include <string>

class Bird
{
private:
    std::string m_name;
    static int m_count;
    int m_num;

public:
    Bird(int num = 0);
    Bird(const Bird &other);

    void printNum() const;

    Bird &operator=(const Bird &other);

    friend const Bird operator+(const Bird &left, const Bird &right);
    friend const Bird operator-(const Bird &left, const Bird &right);
    friend const Bird operator*(const Bird &left, const Bird &right);
    friend const Bird operator/(const Bird &left, const Bird &right);

    friend std::ostream &operator<<(std::ostream &os, const Bird &obj);
};

#endif // BIRD_H
