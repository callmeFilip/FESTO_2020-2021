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
    void play(note) const {}
    void prepare()
    {
        std::cout << "preparing.." << std::endl;
    }
};

// Wind objects are Instruments
// because they have the same interface:
class Wind : public Instrument
{
};

void tune(Instrument &i)
{
    // ...
    i.play(middleC);
    i.prepare();
}

int main()
{
    Wind flute;
    tune(flute); // Upcasting

    return 0;
} ///:~
