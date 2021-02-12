#include <cstdlib>
#include <iostream>

using namespace std;

void printBinary(const unsigned char val, int charStart = 7, int charEnd = 0)
{
    for (int i = charStart; i >= charEnd; i--)
    {
        if (val & (1 << i))
        {
            std::cout << "1";
        }
        else
        {
            std::cout << "0";
        }
    }

} ///:~

void exponentPrint(unsigned char *cp)
{
    std::cout << "\nExponent Field: \n";
    printBinary(cp[7], 6, 0);
    printBinary(cp[6], 7, 4);
    std::cout << std::endl;
}

void significandPrint(unsigned char *cp)
{
    std::cout << "\nSignificand Field: \n";

    printBinary(cp[6], 3, 0);
    for (int i = 5; i >= 0; i--)
    {
        printBinary(cp[i]);
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Must provide a number" << endl;
        exit(1);
    }

    double d = atof(argv[1]);

    unsigned char *cp = reinterpret_cast<unsigned char *>(&d);

    // Print the whole number in binary
    for (int i = sizeof(double) - 1; i >= 0; i--)
    {
        printBinary(cp[i]);
        std::cout << " ";
    }
    std::cout << std::endl;

    // Print Sign
    if ((cp[7] & (1 << 7)) == 128)
    {
        std::cout << "Sign bit = 1" << std::endl;
    }
    else
    {
        std::cout << "Sign bit = 0" << std::endl;
    }

    exponentPrint(cp); // Print Exponent

    significandPrint(cp); // Print fraction field

    return 0;
} ///:~
