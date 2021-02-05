#ifndef FUNCTION_HOLDER_H
#define FUNCTION_HOLDER_H
#include <vector>

typedef void (*func_t)();

class FunctionHolder
{
private:
    std::vector<func_t> m_storage;

public:
    void add(func_t function);
    void remove();
    void run();
};

#endif // FUNCTION_HOLDER_H
