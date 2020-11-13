#include <iostream>
#include <vector>
using namespace std;
void vectorPrint(vector<float> n_vector)
{
    for (int i = 0; i < n_vector.size(); i++)
    {
        cout << n_vector[i] << "\n";
    }

    cout << "\n"
            "\n"
            "\n";
}
int main()
{
    vector<float> m_vector;

    for (int i = 0; i < 25; i++)
    {
        m_vector.push_back(i * 2.2f);
    }
    vectorPrint(m_vector);

    for (int i = 0; i < 25; i++)
    {
        m_vector[i] = m_vector[i] * m_vector[i];
    }

    vectorPrint(m_vector);

    return 0;
}
