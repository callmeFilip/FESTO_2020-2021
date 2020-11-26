#include <iostream>
#define ARRAYSIZE 5
int main()
{
	const double CD_Arr[ARRAYSIZE] { 0.0 };
	volatile double VD_Arr[ARRAYSIZE] { 0.0 };

	double* temp_ptr = nullptr;

	for (int i = 0; i < ARRAYSIZE; i++) 
	{
		temp_ptr = const_cast <double*> (&CD_Arr[i]);
		*temp_ptr = 1;

		temp_ptr = const_cast <double*> (&VD_Arr[i]);
		*temp_ptr = 1;
	
		std::cout << CD_Arr[i] << "\t" << VD_Arr[i] << "\n";
	}

	return 0;
}
