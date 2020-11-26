#include <iostream>
#include "../inc/printBinary.h" 

int main()
{
	float floatVar = 1;

	unsigned char charVar;

	charVar = reinterpret_cast<unsigned char>(&floatVar);

	unsigned char* ptr_UCVar;

	ptr_UCVar = & charVar;

	for (int i = 0; i < sizeof(float); i++)
	{
		printBinary(ptr_UCVar[i]);
	}

	return 0;
}
