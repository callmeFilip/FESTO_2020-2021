#include <iostream>
int main()
{
    char *charPtr = "This is some text"; //ISO C++ forbids converting a string constant to 'char*'

    charPtr[3] = 'e';

    return 0;
}
/*
No, gcc default configuration does not let char array literal to be changed
*/
