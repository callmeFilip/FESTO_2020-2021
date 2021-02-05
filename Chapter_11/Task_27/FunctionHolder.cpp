#include "FunctionHolder.h"

void FunctionHolder::add(func_t function)
{
    m_storage.push_back(function);
}

void FunctionHolder::remove()
{
    m_storage.pop_back();
}

void FunctionHolder::run()
{
    size_t vSize = m_storage.size();
    for (size_t i = 0; i < vSize; i++)
    {
        m_storage.at(i)();
    }
}
