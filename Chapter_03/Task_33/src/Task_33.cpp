#include <iostream>

float floatFunction(char n_symbol) 
{
	std::cout << 1.0f;

	return 1.0f;
}

float (*ptr_floatFunc) (char) intFunction(int n_number)
{
	float (*ptr_floatFunc) (char);

	ptr_floatFunc = floatFunction;

	return ptr_floatFunc;
}

int main()
{
	float* (*funcPtr)(int);

	funcPtr = intFunction;

}
