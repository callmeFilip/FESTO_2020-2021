#ifndef HEADER_H
#define HEADER_H

class MathStuff
{
private:
    float fNum;
    const float cfNum;

public:
    MathStuff(float fNum = 0.0f, float cfNum = 0.0f);
    void printData();
};

#endif