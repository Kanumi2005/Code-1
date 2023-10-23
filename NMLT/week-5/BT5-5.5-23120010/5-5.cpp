#include <iostream>
#include <string>
#include <sstream>

int main() {
	
	int a, b, gcd, lcm;
	std::string line;
	std::stringstream buf;
	
	do {
		std::cout << "Nhap 2 so nguyen duong a, b = ";
		std::getline(std::cin, line);
		buf = static_cast<std::stringstream> (line);
	} while ( !( (buf >> a >> b) && buf.eof() && a > 0 && b > 0 ) ) ;
	
	lcm = a * b;
	do {
		gcd = b;
		b =  a % b;
		a = gcd;
	} while (b != 0);
	lcm /= gcd;
	
	std::cout << "UCLN = " << gcd << "\n"
			  << "BCNN = " << lcm;
	
	return 0;
}
