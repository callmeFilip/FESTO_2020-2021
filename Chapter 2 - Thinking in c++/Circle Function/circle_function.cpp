#include <iostream>
void printCircle(double n_radius)
{
	n_radius *= (n_radius * 3.14);
	std::cout << n_radius << "\n";
}

void main(void)
{
	double r;

	std::cin >> r;

	printCircle(r);
}
