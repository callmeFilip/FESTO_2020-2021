#ifndef HOLDER_H
#define HOLDER_H
#include <vector>
#include <string>

class Holder
{
private:
public:
    static std::vector<std::string> m_storage;

    void *operator new(size_t size, std::string text)
    {
        void *res = std::malloc(size);

        if (!res)
        {
            throw std::bad_alloc();
        }

        m_storage.push_back(text);

        return res;
    }
};

std::vector<std::string> Holder::m_storage;

#endif // HOLDER_H
