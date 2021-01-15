int main()
{
    int number = 5;

    const int *const numberPtr = &number;

    //numberPtr++; //error: increment of read-only variable 'numberPtr'

    //*numberPtr++; //error: increment of read-only variable 'numberPtr'

    return 0;
}
