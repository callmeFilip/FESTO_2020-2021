#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float> m_firstVector, m_secondVector, m_sumVector;

    for (int i = 0; i < 25; i++)
    {
        m_firstVector.push_back(i * 2.2f);
        m_secondVector.push_back(i * 1.3f);
        m_sumVector.push_back(m_firstVector[i] + m_secondVector[i]);
    }

    for (int i = 0; i < m_sumVector.size(); i++)
    {
        cout << m_sumVector[i] << "\n";
    }

    return 0;
}
