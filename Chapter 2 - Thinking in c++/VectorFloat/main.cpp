#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float> m_vector;

    for (int i = 0; i < 25; i++)
    {
        m_vector.push_back(i * 2.2f);
    }
    for (int i = 0; i < m_vector.size(); i++)
    {
        cout << m_vector[i] << "\n";
    }

    return 0;
}
