#include <iostream>

void printSize(unsigned long long size)
{
    std::cout << size << std::endl;
}

int main()
{
    //creating variables from all the types
    char c;
    unsigned char cu;
    int i;
    unsigned int iu;
    short int is;
    short iis; // Same as short int
    unsigned short int isu;
    unsigned short iisu;
    long int il;
    long iil; // Same as long int
    unsigned long int ilu;
    unsigned long iilu;
    float f;
    double d;
    long double ld;

    //printing sizes
    printSize(sizeof(c));
    printSize(sizeof(cu));
    printSize(sizeof(i));
    printSize(sizeof(iu));
    printSize(sizeof(is));
    printSize(sizeof(iis));
    printSize(sizeof(isu));
    printSize(sizeof(iisu));
    printSize(sizeof(il));
    printSize(sizeof(iil));
    printSize(sizeof(ilu));
    printSize(sizeof(iilu));
    printSize(sizeof(f));
    printSize(sizeof(d));
    printSize(sizeof(ld));

    return 0;
}