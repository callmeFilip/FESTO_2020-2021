#ifndef BUILDING_H
#define BUILDING_H

class Building
{
private:
    int m_volume;

public:
    Building(int = 0);
    virtual ~Building();

    virtual int getVolume() const;
};

#endif // BUILDING_H
