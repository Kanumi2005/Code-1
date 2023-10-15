#include <iostream>

int main()
{
	int so_xe, so_nut = 0;
	
	std::cout << "So xe = ";
	std::cin >> so_xe;
	
	while (so_xe > 0)
	{
		so_nut += so_xe % 10;
		so_xe /= 10;
	}
	so_nut %= 10;
	
	std::cout << "So nut = " << so_nut;
	
	return 0;
}