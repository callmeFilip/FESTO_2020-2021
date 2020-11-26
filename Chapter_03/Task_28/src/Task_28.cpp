#include <iostream>

#define ARRAYSIZE 5

void function(double* n_doubleArr, size_t n_size) 
{
	for (int i = 0; i < n_size; i++)
	{
		std::cout << n_doubleArr[i];
	}
}


int main()
{

	double doubleArray[ARRAYSIZE] { 0.0 };

}
