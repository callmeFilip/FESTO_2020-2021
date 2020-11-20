#include <iostream>
void ptrPassString(std::string* n_string) 
{
	*n_string = "Modification 1";
}

void refPassString(std::string& n_string)
{
	n_string = "HOUSE WORK (Froglicka Remix) e stranna pesen";
}


int main()
{
	std::string str = "Zabravih makaronite na kotlona za 45 minuti i te stanaha po-vkusno ot obiknoveno?!";

	std::cout << str << std::endl;

	ptrPassString(&str);
	std::cout << str << std::endl;


	refPassString(str);
	std::cout << str << std::endl;

	return 0;

}
