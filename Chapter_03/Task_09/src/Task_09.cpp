//: C03:Static.cpp
// Using a static variable in a function
#include <iostream>
using namespace std;
void func() 
{

    int i = 0;
    cout << "i = " << ++i << endl;

}

/*
whitout the static keyword, everytime the func() is called 
a new variable with the name "i" is declared and defined to be 0, then it is printing
*/

int main() 
{
    
    for (int x = 0; x < 10; x++) 
    {
        func();
    }
    
    return 0;

} ///:~ 
