#ifndef BASE_H
#define BASE_H

class Base
{
private:
public:
    Base();
    virtual ~Base() {}

    virtual Base *clone()
    {
        return new Base();
    }
};

#endif // BASE_H
