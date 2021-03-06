//: C15:Instrument4.cpp
// Extensibility in OOP
#include <iostream>
using namespace std;

enum note
{
    middleC,
    Csharp,
    Cflat
}; // Etc.

enum typeInstrument
{
    t_wind,
    t_percussion,
    t_stringed,
    t_brass,
    t_woodwind,
    t_size
}; // type of instrument

class Instrument
{
public:
    virtual ~Instrument() {}
    void play(note) const
    {
        cout << "Instrument::play" << endl;
    }

    const char *what() const
    {
        return "Instrument";
    }

    // Assume this will modify the object:
    void adjust(int) {}
};

class Wind : public Instrument
{
public:
    void play(note) const
    {
        cout << "Wind::play" << endl;
    }

    const char *what() const { return "Wind"; }

    void adjust(int) {}
};

class Percussion : public Instrument
{
public:
    void play(note) const
    {
        cout << "Percussion::play" << endl;
    }

    const char *what() const { return "Percussion"; }

    void adjust(int) {}
};

class Stringed : public Instrument
{
public:
    void play(note) const
    {
        cout << "Stringed::play" << endl;
    }

    const char *what() const { return "Stringed"; }

    void adjust(int) {}
};

class Brass : public Wind
{
public:
    void play(note) const
    {
        cout << "Brass::play" << endl;
    }

    const char *what() const { return "Brass"; }
};

class Woodwind : public Wind
{
public:
    void play(note) const
    {
        cout << "Woodwind::play" << endl;
    }

    const char *what() const { return "Woodwind"; }
};

// Identical function from before:
void tune(Instrument &i, typeInstrument type)
{
    Wind *wPtr = 0;
    Percussion *pPtr = 0;
    Stringed *sPtr = 0;
    Brass *bPtr = 0;
    Woodwind *wwPtr = 0;

    switch (type)
    {
    case t_wind:
        wPtr = dynamic_cast<Wind *>(&i);
        wPtr->play(middleC);
        break;

    case t_percussion:
        pPtr = dynamic_cast<Percussion *>(&i);
        pPtr->play(middleC);
        break;

    case t_stringed:
        sPtr = dynamic_cast<Stringed *>(&i);
        sPtr->play(middleC);
        break;

    case t_brass:
        bPtr = dynamic_cast<Brass *>(&i);
        bPtr->play(middleC);
        break;

    case t_woodwind:
        wwPtr = dynamic_cast<Woodwind *>(&i);
        wwPtr->play(middleC);
        break;

    default:
        i.play(middleC);
        break;
    }
}

// New function:
void f(Instrument &i, typeInstrument type)
{
    Wind *wPtr = 0;
    Percussion *pPtr = 0;
    Stringed *sPtr = 0;
    Brass *bPtr = 0;
    Woodwind *wwPtr = 0;

    switch (type)
    {
    case t_wind:
        wPtr = dynamic_cast<Wind *>(&i);
        wPtr->adjust(1);
        break;

    case t_percussion:
        pPtr = dynamic_cast<Percussion *>(&i);
        pPtr->adjust(1);
        break;

    case t_stringed:
        sPtr = dynamic_cast<Stringed *>(&i);
        sPtr->adjust(1);
        break;

    case t_brass:
        bPtr = dynamic_cast<Brass *>(&i);
        bPtr->adjust(1);
        break;

    case t_woodwind:
        wwPtr = dynamic_cast<Woodwind *>(&i);
        wwPtr->adjust(1);
        break;

    default:
        i.adjust(1);
        break;
    }
}

// Upcasting during array initialization:
Instrument *A[] = {
    new Wind,
    new Percussion,
    new Stringed,
    new Brass,
};

int main()
{
    Wind flute;
    Percussion drum;
    Stringed violin;
    Brass flugelhorn;
    Woodwind recorder;
    tune(flute, t_wind);
    tune(drum, t_percussion);
    tune(violin, t_stringed);
    tune(flugelhorn, t_brass);
    tune(recorder, t_woodwind);

    f(flugelhorn, t_brass);

    return 0;
} ///:~

/**
 * This code is really hard to write and maintain.
 * It is confusing and really inefficient.
*/
