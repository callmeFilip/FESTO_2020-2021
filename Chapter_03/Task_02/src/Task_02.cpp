#include <iostream>

int main()
{
	bool flag = true;
	for (int i = 2; i < 200; i++)
	{

		for (int j = 2; j <= sqrt(i) ; j++) 
		{
			if (i % j == 0) 
			{
				flag = false;
			}
		}

		if (flag) 
		{
			std::cout << i << "\n";
		}
		else
		{
			flag = true;
		}

	}

	return 0;
}
