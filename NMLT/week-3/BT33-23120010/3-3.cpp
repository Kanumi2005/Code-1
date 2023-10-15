#include <iostream>

int main()
{
	float celcius, fahrenheit, kelvin;
	
	std::cout << "Do C = ";
	std::cin >> celcius;
	
	fahrenheit = celcius * 1.8 + 32;
	kelvin = celcius + 273;
	
	std::cout << "Do F = " << fahrenheit << "\n"
			  << "Do C = " << kelvin;
	
	return 0;
}