#ifndef INTSTASH_H
#define INTSTASH_H
namespace IntStash
{
    class Stash
    {
    private:
        int m_storage;

    public:
        Stash(int value) : m_storage(value){};
        int getInt() const { return m_storage; };
    };

} // namespace IntStash

#endif