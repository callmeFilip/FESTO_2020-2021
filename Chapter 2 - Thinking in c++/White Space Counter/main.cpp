#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream in("Test.txt");
    int counter = 0;
    std::string word;

    while (in >> word)
    {
        counter++;
    };
    std::cout << counter;
    return 0;
}
