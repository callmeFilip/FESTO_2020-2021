//: C03:FileStatic.cpp
// File scope demonstration. Compiling and
// linking this file with FileStatic2.cpp
// will cause a linker error
// File scope means only available in this file:
static int fs;
/*

static means that the variable will be deleted when the global variables do, but
static means that the vaciable is local and can't be accessed by other files
so marking the same variable as extern generetes an error with meaning:
    - fs is already a local variable and you can't see it from other files no matter what.

*/


int main() {

    fs = 1;

    return 0;
    
} ///:~ 
