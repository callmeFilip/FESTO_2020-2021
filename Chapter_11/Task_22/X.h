#ifndef X_H
#define X_H

class X
{
private:
    int m_value;

    X(X &);

public:
    X() : m_value(0){};
    X *clone() const;

    void print();
};

#endif // X_H
