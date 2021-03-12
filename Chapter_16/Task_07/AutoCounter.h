//: C16:AutoCounter.h
#ifndef AUTOCOUNTER_H
#define AUTOCOUNTER_H
#include "require.h"
#include <iostream>
#include <set> // Standard C++ Library container
#include <string>
class AutoCounter
{
    static int m_count;
    int m_id;
    const char *m_name;

    class CleanupCheck
    {
        std::set<AutoCounter *> trace;

    public:
        void add(AutoCounter *ap)
        {
            trace.insert(ap);
        }

        void remove(AutoCounter *ap)
        {
            require(trace.erase(ap) == 1,
                    "Attempt to delete AutoCounter twice");
        }

        ~CleanupCheck()
        {
            std::cout << "~CleanupCheck()" << std::endl;
            require(trace.size() == 0,
                    "All AutoCounter objects not cleaned up");
        }
    };

    static CleanupCheck verifier;

    AutoCounter(const char *name) : m_id(m_count++), m_name(name)
    {
        verifier.add(this); // Register itself
        std::cout << "created[" << m_id << "]"
                  << std::endl;
    }

    // Prevent assignment and copy-construction:
    AutoCounter(const AutoCounter &);
    void operator=(const AutoCounter &);

public:
    // You can only create objects with this:
    static AutoCounter *create(const char *name)
    {
        return new AutoCounter(name);
    }

    ~AutoCounter()
    {
        std::cout << "destroying[" << m_id
                  << "]" << std::endl;
        verifier.remove(this);
    }

    // Print both objects and pointers:
    friend std::ostream &operator<<(
        std::ostream &os, const AutoCounter &ac)
    {
        return os << "AutoCounter of " << ac.m_name << ac.m_id;
    }

    friend std::ostream &operator<<(
        std::ostream &os, const AutoCounter *ac)
    {
        return os << "AutoCounter " << ac->m_name << ac->m_id;
    }
};

#endif // AUTOCOUNTER_H ///:~