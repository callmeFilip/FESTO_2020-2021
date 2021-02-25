#ifndef FRAMIS_H
#define FRAMIS_H
#include <fstream>
extern std::ofstream out;

class Framis
{
private:
    enum
    {
        sz = 10
    };
    char c[sz]; // To take up space, not used
protected:
    static unsigned char pool[];
    static bool alloc_map[];

public:
    enum
    {
        psize = 100
    }; // frami allowed
    Framis() { out << "Framis()\n"; }
    ~Framis() { out << "~Framis() ... "; }
    void *operator new(size_t) throw(std::bad_alloc);
    void operator delete(void *);
};

#endif // ~FRAMIS_H
