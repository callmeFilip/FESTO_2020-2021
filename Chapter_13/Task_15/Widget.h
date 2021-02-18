#ifndef WIDGET_H
#define WIDGET_H

#include <new> // Size_t definition
#include <fstream>
#include <vector>
#include <iostream>

extern std::ofstream trace;

class Widget
{
    enum
    {
        sz = 10
    };
    int i[sz];

public:
    static std::vector<Widget *> m_ptrStorage;

    Widget() { trace << "*"; }
    ~Widget() { trace << "~"; }

    void *operator new(size_t sz)
    {
        trace << "Widget::new: "
              << sz << " bytes" << std::endl;

        void *res = ::new char[sz];

        m_ptrStorage.push_back((Widget *)res);

        return res;
    }

    void operator delete(void *ptr)
    {
        trace << "Widget::delete" << std::endl;

        for (size_t i = 0; i < m_ptrStorage.size(); i++)
        {
            if (m_ptrStorage.at(i) == ptr)
            {
                m_ptrStorage.erase(i + m_ptrStorage.begin());
                break;
            }
        }

        ::delete ptr;
    }

    void *operator new[](size_t sz)
    {
        trace << "Widget::new[]: "
              << sz << " bytes" << std::endl;
        return ::new char[sz];
    }

    void operator delete[](void *ptr)
    {
        trace << "Widget::delete[]" << std::endl;

        ::delete[] ptr;
    }
};

std::vector<Widget *> Widget::m_ptrStorage;

#endif // WIDGET_H
