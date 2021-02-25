#ifndef PROXY_H
#define PROXY_H
#include "Subject.h"

class Proxy
{
private:
    Subject *m_subj;

public:
    Proxy(Subject *subj) : m_subj(subj) {}
    ~Proxy()
    {
        if (m_subj != 0)
        {
            m_subj = 0;
            delete m_subj;
        }
    }

    void changeSubj(Subject *subj)
    {
        m_subj = subj;
    }

    void f()
    {
        m_subj->f();
    }

    void g()
    {
        m_subj->g();
    }

    void h()
    {
        m_subj->h();
    }
};

#endif // ~PROXY_H
