//: C14:Instrument.cpp
// Inheritance & upcasting
#include <iostream>

enum note
{
    middleC,
    Csharp,
    Cflat
}; // Etc.

class Instrument
{
public:
    virtual void play(note) const
    {
        std::cout << "Playing.." << std::endl;
    }
};

// Wind objects are Instruments
// because they have the same interface:
class Wind : public Instrument
{
    void play(note) const
    {
        std::cout << "Another thing.." << std::endl;
    }
};

void tune(Instrument &i)
{
    // ...
    i.play(middleC); // It is probably a poor design to overload a
                     // method and then cast it back to base class, to
                     // use it as before overloading.
}

int main()
{
    Wind flute;
    tune(flute); // Upcasting

    return 0;
} ///:~
