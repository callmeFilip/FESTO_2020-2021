//: C16:TStack2.h
// Templatized Stack with nested iterator
#ifndef TSTACK2_H
#define TSTACK2_H

template <class T>
class Stack
{
    struct Link
    {
        T *data;
        Link *next;
        bool ownership;
        Link(T *dat, Link *nxt, bool own)
            : data(dat), next(nxt), ownership(own) {}
    } * head;

public:
    Stack() : head(0) {}
    ~Stack();

    void push(T *dat, bool own)
    {
        head = new Link(dat, head, own);
    }

    T *peek() const { return head ? head->data : 0; }
    T *pop();

    // Nested iterator class:
    class iterator;        // Declaration required
    friend class iterator; // Make it a friend
    class iterator
    { // Now define it
        Stack::Link *p;

    public:
        iterator(const Stack<T> &tl) : p(tl.head) {}

        // Copy-constructor:
        iterator(const iterator &tl) : p(tl.p) {}

        // The end sentinel iterator:
        iterator() : p(0) {}

        // operator++ returns boolean indicating end:
        bool operator++()
        {
            if (p->next)
                p = p->next;
            else
                p = 0; // Indicates end of list
            return bool(p);
        }

        bool operator++(int) { return operator++(); }

        T *current() const
        {
            if (!p)
                return 0;

            return p->data;
        }

        // Pointer dereference operator:
        T *operator->() const
        {
            require(p != 0,
                    "PStack::iterator::operator->returns 0");
            return current();
        }

        T *operator*() const { return current(); }
        // bool conversion for conditional test:

        operator bool() const { return bool(p); }
        // Comparison to test for end:
        bool operator==(const iterator &) const { return p == 0; }
        bool operator!=(const iterator &) const { return p != 0; }
    };
    iterator begin() const { return iterator(*this); }
    iterator end() const { return iterator(); }

    void changeOwnershipTop(bool flag)
    {
        head->ownership = flag;
    }
};

template <class T>
Stack<T>::~Stack()
{
    while (head)
    {
        if (head->ownership)
        {
            delete pop();
        }
        else
        {
            pop();
        }
    }
}

template <class T>
T *Stack<T>::pop()
{
    if (head == 0)
        return 0;
    T *result = head->data;
    Link *oldHead = head;
    head = head->next;
    delete oldHead;

    return result;
}

#endif // TSTACK2_H ///:~