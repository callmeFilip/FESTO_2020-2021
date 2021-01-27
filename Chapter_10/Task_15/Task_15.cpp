int main()
{
    const int ITERATIONS = 1000;
    auto value = 0;
    register int counter = 0;

    for (int i = 0; i < ITERATIONS; i++)
    {
        counter++;
    }

    counter = value;

    return 0;
}
