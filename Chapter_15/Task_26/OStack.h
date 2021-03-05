//: C15:OStack.h
// Using a singly-rooted hierarchy
#ifndef OSTACK_H
#define OSTACK_H

class Object
{
public:
    virtual ~Object() = 0;
};
// Required definition:
inline Object::~Object() {}

class Base
{
private:
public:
    virtual ~Base() = 0;
};

inline Base::~Base() {}

class Derived : public Object, public Base
{
private:
public:
    ~Derived() {}
};

class Stack
{
    struct Link
    {
        Derived *data;
        Link *next;
        Link(Derived *dat, Link *nxt) : data(dat), next(nxt) {}
    } * head;

public:
    Stack() : head(0) {}

    ~Stack()
    {
        while (head)
            delete pop();
    }

    void push(Derived *dat)
    {
        head = new Link(dat, head);
    }

    Derived *peek() const
    {
        return head ? head->data : 0;
    }

    Derived *pop()
    {
        if (head == 0)
            return 0;
        Derived *result = head->data;
        Link *oldHead = head;
        head = head->next;
        delete oldHead;
        return result;
    }
};

#endif // OSTACK_H ///:~