#ifndef ASTEROIDSTASH_H
#define ASTEROIDSTASH_H
#include "PStash.h"
#include "Asteroid.h"

#define COMPOSITION

class AsteroidStash
#ifndef COMPOSITION
    : public PStash
#endif
{
private:
#ifdef COMPOSITION
    PStash m_storage;
#endif
public:
#ifdef COMPOSITION
    AsteroidStash() : m_storage()
    {
    }
#else
    AsteroidStash() : PStash()
    {
    }
#endif
    int add(Asteroid *element);
    Asteroid *operator[](int index) const; // Fetch
    // Remove the reference from this PStash:
    Asteroid *remove(int index);
#ifdef COMPOSITION
    // Number of elements in Stash:
    int count() const;
#endif
};

#endif // ASTEROIDSTASH_H
