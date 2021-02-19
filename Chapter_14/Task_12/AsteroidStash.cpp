#include "AsteroidStash.h"

#ifdef COMPOSITION

void AsteroidStash::push_back(Asteroid *element)
{
    return m_storage.push_back(element);
}

Asteroid *AsteroidStash::operator[](int index) const
{
    return reinterpret_cast<Asteroid *>(m_storage[index]);
}

void AsteroidStash::pop_back()
{
    m_storage.pop_back();
}
size_t AsteroidStash::size() const
{
    return m_storage.size();
}

#else

void AsteroidStash::push_back(Asteroid *element)
{
    vector<void *>::push_back(element);
}

Asteroid *AsteroidStash::operator[](int index) const
{
    return (Asteroid *)vector<void *>::at(index);
}

void AsteroidStash::pop_back()
{
    vector<void *>::pop_back();
}

#endif
