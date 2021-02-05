#ifndef TURTLE_H
#define TURTLE_H

class Turtle
{
private:
    int m_age;

public:
    Turtle(int age = 0);
    Turtle(const Turtle &other);
    int getAge() const { return m_age; }
};

#endif // TURTLE_H
