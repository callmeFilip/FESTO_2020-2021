/*
//#define FLOOR(x, b) x >= b ? 0 : 1
//This will work incorrectly due to operator priority.
//& have lower priority than >=
//and will produce a bug.
//
//Parentheses will implicitly
//fix the operation order
*/
#define FLOOR(x, b) (((x) >= (b)) ? (0) : (1))

int main()
{
    int a = 5;

    if (FLOOR(a & 0x0f, 0x07))
    {
        return 1;
    }
    else
    {
        return 2;
    }

    return 0;
}
