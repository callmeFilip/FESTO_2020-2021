//: C14:Car.cpp
// Public composition
#include "Vehicle.h"

class Engine
{
public:
    void start() const {}
    void rev() const {}
    void stop() const {}
};
class Wheel
{
public:
    void inflate(int) const {}
};
class Window
{
public:
    void rollup() const {}
    void rolldown() const {}
};
class Door
{
public:
    Window window;
    void open() const {}
    void close() const {}
};
class Car : public Vehicle
{
public:
    Car() : Vehicle(5) {}
    Engine engine;
    Wheel wheel[4];
    Door left, right; // 2-door
};
int main()
{
    Car car;
    car.turnOn();
    car.drive();
    car.turnOff();

    return 0;
} ///:~

/**
 * The antivirus program is closing my 
 * application and i can't test it.
*/
