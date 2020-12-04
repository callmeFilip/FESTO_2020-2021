#ifndef CAR_H
#define CAR_H

class Car
{
    //variables
    int m_speed;
    int m_horsePower;

public:
    //constructors
    Car();
    Car(int, int);

    //methods
    void printData(void);
};

#endif