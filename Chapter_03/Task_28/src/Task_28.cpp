#include <iostream>

#define ARRAYSIZE 5

void printArr(double* n_doubleArr, size_t n_size)
{
	for (int i = 0; i < n_size; i++)
	{
		std::cout << n_doubleArr[i] << std::endl;
	}
}


int main()
{
	double doubleArray[ARRAYSIZE] { 0.0 };

	printArr(doubleArray, ARRAYSIZE);
	
	unsigned char* UCPtr = reinterpret_cast <unsigned char*> (doubleArray);;

	for (int i = 0; i < sizeof(double)*ARRAYSIZE; i++)
	{
		UCPtr[i] = 1.0;
	}

	printArr(doubleArray, ARRAYSIZE);

	return 0;
}

	/*
	* Why do you think each element was not set to the value 1.0?
	* 
	* Vseki byte e setnat na stoinostta 1, no edin double ot 8 byte-a
	* sus stoinost 11111111 ne oznachava che ima stoinost 1.0.
	* Vsushnost kogato vsichki byte-ove sa setnati na 1, toi zaema maksimalnata
	* si stoinost i tq biva otpechatana na konzolata.
	*/
	