inline int function()
{
    return 0;
}

int main()
{
    function();
    return 0;
}

/*
// Inline functions can't be external.
// For a function to be external it needs a place
// to be referred to in the memory
// If such memory allocation is done this function isn't
// inline anymore, the compiler transformed it in
// normal function automatically
*/
