#ifndef SET_H
#define SET_H

#include <vector>
#include <cassert>
#include <iostream>

// typedef int T;
template <class T>
class Set
{
private:
    std::vector<T> m_storage;
    bool compare(const T &left, const T &right) { return left == right; }

public:
    class iterator;
    friend std::ostream &operator<<(std::ostream &os, const Set<T>::iterator &obj);
    friend class iterator;
    class iterator
    {
    private:
        Set &s;
        size_t index;

    public:
        iterator(Set &st) : s(st), index(0) {}
        iterator(Set &st, bool) : s(st), index(st.size()) {}

        iterator(const iterator &it) : s(it.s), index(it.index) {}

        T &operator*() const
        {
            return s.m_storage[index];
        }

        iterator &operator=(const iterator &other)
        {
            if (this == &other)
            {
                return *this;
            }
            s = other.s;
            index = other.index;

            return *this;
        }

        bool operator==(const iterator &other) const { return index == other.index; }
        bool operator!=(const iterator &other) const { return index != other.index; }

        iterator &operator++()
        {
            assert(++index <= s.m_storage.size());

            return *this;
        }

        const iterator operator++(int)
        {
            iterator res(*this);

            assert(++index <= s.m_storage.size());

            return res;
        }
        friend std::ostream &operator<<(std::ostream &os, const Set<T>::iterator &obj)
        {
            return os << obj.s.m_storage[obj.index];
        }
    };

    void insert(const T &obj)
    {
        for (size_t i = 0; i < m_storage.size(); i++)
        {
            if (compare(m_storage[i], obj)) // already added
            {
                return;
            }
        }

        m_storage.push_back(obj);
    }

    T &erase(const iterator &it)
    {
        T *result;
        for (size_t i = 0; i < m_storage.size(); i++)
        {
            if (&(*it) == &m_storage[i])
            {
                result = &m_storage[i];
                m_storage.erase(m_storage.begin() + i);
            }
        }

        return *result;
    }

    iterator begin() { return iterator(*this); }
    iterator end() { return iterator(*this, true); }
    size_t size() { return m_storage.size(); }
};

#endif // SET_H
