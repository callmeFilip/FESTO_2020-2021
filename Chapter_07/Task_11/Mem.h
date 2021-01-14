//: C07:Mem.h
#ifndef MEM_H
#define MEM_H

typedef unsigned char byte;

class Mem
{
    byte *mem;
    byte *originAlloc;
    int size;
    void ensureMinSize(int minSize);

public:
    Mem(int sz = 0);
    ~Mem();
    int msize();
    byte *pointer(int minSize = 0);
    bool moved();
};
#endif // MEM_H ///:~