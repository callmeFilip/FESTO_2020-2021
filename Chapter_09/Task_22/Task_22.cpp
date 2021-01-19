int function()
{
    int a = 5;
    a++;
    return a;
}

int main(int argc, char const *argv[])
{
    function();

    return 0;
}

// Why is the function with inline modificator still called in main?
