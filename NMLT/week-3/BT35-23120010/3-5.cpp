#include <iostream>
#include <cmath>

int main()
{
	float p, q, x;
	
	std::cout << "Nhap p, q = ";
	std::cin >> p >> q;
	
	x = std::cbrt( std::sqrt( std::pow(p, 6) / 27 + q * q / 4 ) - q / 2 )
		- std::cbrt( std::sqrt( std::pow(p, 6) / 27 + q * q / 4 ) + q /2 );
	
	std::cout << "Nghiem x = " << x;
	
	return 0;
}