
int recursion(int i)
{
    i--;
    if (i == 0)
    {
        return 0;
    }
    return recursion(i);
}

int main()
{
    recursion(10);
    return 0;
}
