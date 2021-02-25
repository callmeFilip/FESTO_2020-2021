// : C14 : InheritStack2.cpp
// Composition vs. inheritance
#include "vector"
#include "require.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class StringStack
{
private:
    vector<string> m_storage;

public:
    // Embed instead of inherit public:
    void push(string *str)
    {
        m_storage.push_back(*str);
        delete str;
    }

    string peek() const
    {
        return m_storage.back();
    }

    string *pop()
    {
        if (m_storage.size() == 0)
        {
            return 0;
        }
        string *result = new string(m_storage.back());
        m_storage.pop_back();

        return result;
    }
};

int main()
{
    ifstream in("InheritStack2.cpp");

    assure(in, "InheritStack2.cpp");

    string line;

    StringStack textlines;

    while (getline(in, line))
    {
        textlines.push(new string(line));
    }

    string *s;

    while ((s = textlines.pop()) != 0)
    {
        // No cast!
        cout << *s << endl;
        delete s;
    }

    return 0;
} ///:~
