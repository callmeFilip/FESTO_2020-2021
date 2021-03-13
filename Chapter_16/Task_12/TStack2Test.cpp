//: C16:TStack2Test.cpp
#include "TStack2.h"
#include "require.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    std::ifstream file("TStack2Test.cpp");

    assure(file, "TStack2Test.cpp");

    Stack<string> textlines;

    // Read file and store lines in the Stack:
    string line;

    while (getline(file, line))
    {
        textlines.push(new string(line));
    }

    int i = 0;

    // Use iterator to print lines from the list:
    Stack<string>::iterator it = textlines.begin();
    Stack<string>::iterator *it2 = 0;

    std::cout << "da" << std::endl;

    while (it != textlines.end())
    {
        cout << it->c_str() << endl;
        it++;
        if (++i == 10) // Remember 10th line
        {
            std::cout << "i = 10" << it->c_str() << std::endl;
            it2 = new Stack<string>::iterator(it);
        }
    }

    cout << "10th row: " << (*it2)->c_str() << endl;

    delete it2;

    return 0;
} ///:~
