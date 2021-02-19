#include "BusinessTraveler.h"

int main()
{
    BusinessTraveler bt1("1"); // constructor with arguments
    BusinessTraveler bt2(bt1); // copy-constructor
    BusinessTraveler bt3;      // default constructor
    bt3 = bt2;                 // operator=

    bt3.print(); // if result is two "1" => everything copied succesfully

    return 0;
}
