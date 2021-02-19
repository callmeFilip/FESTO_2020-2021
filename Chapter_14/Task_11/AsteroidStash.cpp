#include "AsteroidStash.h"

#ifdef COMPOSITION
int AsteroidStash::add(Asteroid *element)
{
    return m_storage.add(reinterpret_cast<void *>(element));
}

Asteroid *AsteroidStash::operator[](int index) const
{
    return reinterpret_cast<Asteroid *>(m_storage[index]);
}

Asteroid *AsteroidStash::remove(int index)
{
    return reinterpret_cast<Asteroid *>(m_storage.remove(index));
}
int AsteroidStash::count() const
{
    return m_storage.count();
}
#else
int AsteroidStash::add(Asteroid *element)
{
    return PStash::add(reinterpret_cast<void *>(element));
}

Asteroid *AsteroidStash::operator[](int index) const
{
    return reinterpret_cast<Asteroid *>(PStash::operator[](index));
}

Asteroid *AsteroidStash::remove(int index)
{
    return reinterpret_cast<Asteroid *>(PStash::remove(index));
}

#endif
