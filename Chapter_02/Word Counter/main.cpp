#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream in("text.txt");
    int m_wordCounter = 0;
    std::string m_word;
    std::string m_wordToCount = "word";
    while (in >> m_word)
    {
        if (m_word == m_wordToCount)
        {
            m_wordCounter++;
        }
    }

    std::cout << m_wordCounter;
    return 0;
}
