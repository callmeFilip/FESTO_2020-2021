//: C16:ValueStackTest.cpp
//{L} SelfCounter
#include <vector>
#include <iostream>

class Integer
{
private:
    int number;

public:
    Integer(int num) : number(num)
    {
        std::cout << "*" << std::endl;
    }
    Integer(const Integer &other) : number(other.number)
    {
        std::cout << "cpy" << std::endl;
    }
    ~Integer()
    {
        std::cout << "~" << std::endl;
    }
    void print() const { std::cout << number << std::endl; }
};

using namespace std;
int main()
{
    const int COUNT = 10;
    vector<Integer> sc;
    for (int i = 0; i < COUNT; i++)
    {
        sc.push_back(Integer(i));
    }
    std::cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaa!!!!!!!!" << std::endl;
    // OK to peek(), result is a temporary:
    for (int k = 0; k < COUNT; k++)
    {
        sc.back().print();
        sc.pop_back();
    }

    return 0;
} ///:~
