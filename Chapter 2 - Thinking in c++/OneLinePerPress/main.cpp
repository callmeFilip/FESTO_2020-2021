#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    ifstream in("test.txt");

    string input, line;
    while (getline(in, line))
    {
        cout << line << "\n";
        cin.get();
    }
    return 0;
}
