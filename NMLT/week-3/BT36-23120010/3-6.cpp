#include <iostream>

int main()
{
	int money, number_20000, number_10000, number_5000, number_1000;
	
	std::cout << "So tien can doi = ";
	std::cin >> money;
	
	number_20000 = money / 20'000;
	money -= number_20000 * 20'000;
	
	number_10000 = money / 10'000;
	money -= number_10000 * 10'000;
	
	number_5000 = money / 5'000;
	money-= number_5000 * 5'000;
	
	number_1000 = money / 1'000;
	money -= number_1000 * 1'000;
	
	
	std::cout << "So to 20000: " << number_20000 << "\n"
			  << "So to 10000: " << number_10000 << "\n"
			  << "So to  5000: " << number_5000 << "\n"
			  << "So to  1000: " << number_1000 << "\n"
			  << "So tien du = " << money;
	
	return 0;
}