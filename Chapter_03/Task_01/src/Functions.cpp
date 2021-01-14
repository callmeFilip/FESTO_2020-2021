#include "Functions.h"
#include <iostream>
void functions::functionVoid(void)
{
	std::cout << "functionVoid takes void returns void" << std::endl;
}

char functions::functionChar(char)
{
	std::cout << "functionChar takes char returns char" << std::endl;

	return '0';
}

int functions::functionInt(int)
{
	std::cout << "functionInt takes int returns int" << std::endl;

	return 0;
}

float functions::functionFloat(float)
{
	std::cout << "functionFloat takes float returns float" << std::endl;

	return 0.0f;
}
