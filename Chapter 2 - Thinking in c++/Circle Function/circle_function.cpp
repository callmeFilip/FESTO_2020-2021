#include <iostream>
void printCircle(int n_radius)
{
	n_radius *= n_radius;
	std::cout << n_radius << "\n";
}

int main(void)
{
	int r = 5;

	printCircle(5);

	return 0;
}
