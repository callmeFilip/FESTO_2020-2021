#ifndef BUILDING_H
#define BUILDING_H

class Building
{
private:
    int m_height;

public:
    Building(int height_value = 0);

    void setHight(int height_value);
    void print();
};

#endif
