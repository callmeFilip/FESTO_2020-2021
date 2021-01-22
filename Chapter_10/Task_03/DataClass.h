#ifndef DATACLASS_H
#define DATACLASS_H
class DataClass
{
private:
    static const int INT_ARRAY_SIZE = 20;
    int intArray[INT_ARRAY_SIZE];
    const int age;
    static int calls;
    static void printCalls();

public:
    DataClass(const int n_age = 0) : age(n_age)
    {
        for (int i = 0; i < INT_ARRAY_SIZE; i++)
        {
            intArray[i] = i;
        }
    }

    void print();
};

#endif