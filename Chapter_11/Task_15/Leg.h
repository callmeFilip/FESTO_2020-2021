#ifndef LEG_H
#define LEG_H

class Leg
{
private:
    int m_count;

public:
    Leg(int count = 0);
    Leg(Leg &obj);
};

#endif // LEG_H
