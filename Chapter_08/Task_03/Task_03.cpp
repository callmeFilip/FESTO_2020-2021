#include <iostream>
#define PRINT(VAR) \
    std::cout << #VAR " = " << VAR << std::endl;

int main()
{
    const char c = 'a';
    const unsigned char cu = 'd';
    const int i = 3;
    const unsigned int iu = 4;
    const short int is = 2;
    const short iis = 2; // Same as short int
    const unsigned short int isu = 8;
    const unsigned short iisu = 9;
    const long int il = 12;
    const long iil = 23; // Same as long int
    const unsigned long int ilu = 89;
    const unsigned long iilu = 9;
    const float f = 0.0f;
    const double d = 12.0;
    const long double ld = 2032.0;

    const char charSum = c + cu;
    PRINT(charSum)

    const int intSum = i + iu + is + iis + isu + iisu + il + iil + ilu + iilu;
    PRINT(intSum)

    PRINT(f)

    const double doubleSum = d + ld;
    PRINT(doubleSum)
    return 0;
}
