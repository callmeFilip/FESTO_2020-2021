#include "Mirror.h"

Mirror::Mirror()
    : m_ptrMirror(0),
      m_flag(true)
{
}

Mirror::Mirror(Mirror *ptrMirror)
    : m_ptrMirror(ptrMirror),
      m_flag(false)
{
}

bool Mirror::test() const
{
    if (m_ptrMirror == 0)
    {
        return m_flag;
    }
    else
    {
        return this->test();
    }
}
