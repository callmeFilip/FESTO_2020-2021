#ifndef ASTEROIDSTASH_H
#define ASTEROIDSTASH_H
#include "Asteroid.h"
#include "vector"
#define COMPOSITION

class AsteroidStash
#ifndef COMPOSITION
    : public std::vector<void *>
#endif
{
private:
#ifdef COMPOSITION
    std::vector<void *> m_storage;
#endif
public:
#ifdef COMPOSITION

    AsteroidStash() : m_storage()
    {
    }

    ~AsteroidStash()
    {
        m_storage.clear();
        m_storage.shrink_to_fit();
    }

#else

    AsteroidStash() : std::vector<void *>()
    {
    }
    ~AsteroidStash()
    {
        clear();
        shrink_to_fit();
    }

#endif

    void push_back(Asteroid *element);
    Asteroid *operator[](int index) const; // Fetch
    // Remove the reference from this PStash:
    void pop_back();

#ifdef COMPOSITION

    // Number of elements in Stash:
    size_t size() const;

#endif
};

#endif // ASTEROIDSTASH_H
