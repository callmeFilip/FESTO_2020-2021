#ifndef DOUBLECLASS_H
#define DOUBLECLASS_H

#define FIX

class DoubleClass
{
private:
    double *m_storage;

public:
    DoubleClass(double);
    ~DoubleClass();

#ifdef FIX

    DoubleClass(DoubleClass &other);

#endif

    void doSomething();
};

#endif // DOUBLECLASS_H
