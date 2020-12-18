#ifndef HEADER_H
#define HEADER_H

class Bird;

class Fish
{
private:
    /* data */
public:
    char m_name = 'a';

    bool checkName(Bird *object);
};

class Bird
{
private:
    /* data */
public:
    char m_name = 'b';

    bool checkName(Fish *object);
};

#endif