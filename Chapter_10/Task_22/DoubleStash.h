#ifndef DOUBLESTASH_H
#define DOUBLESTASH_H

namespace DoubleStash
{
    class Stash
    {
    private:
        double m_storage;

    public:
        Stash(double value) : m_storage(value){};
        double getDouble() const { return m_storage; };
    };

} // namespace DoubleStash

#endif
