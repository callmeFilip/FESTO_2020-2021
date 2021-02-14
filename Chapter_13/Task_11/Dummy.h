#ifndef DUMMY_H
#define DUMMY_H
#include <new>
class Dummy
{
private:
    int m_number;

public:
    Dummy(int = 0);
    ~Dummy();
    void *operator new(size_t) throw();
    void operator delete(void *obj);

    void *operator new[](size_t) throw();
    void operator delete[](void *obj);
};

#endif // DUMMY_H
