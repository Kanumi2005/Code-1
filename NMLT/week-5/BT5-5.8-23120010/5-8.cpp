#include <iostream>
#include <string>
#include <sstream>

int main() {
	
	int n;
	std::string line;
	std::stringstream buf;
	
	do {
		std::cout << "Nhap N = ";
		std::getline(std::cin, line);
		buf = static_cast<std::stringstream> (line);
	} while ( !( (buf >> n) && buf.eof() && n > 0) );
		
	int reverse_n = 0, digit = 10, temp_n = n;
	bool check_doi_xung = true, check_giam_dan = true;
	while (temp_n > 0) {
		if ( digit <= (temp_n % 10) )
			check_giam_dan = false;
		digit = temp_n % 10;
		reverse_n = reverse_n * 10 + digit;
		temp_n /= 10;
	}
	if (n != reverse_n)
		check_doi_xung = false;
	
	std::cout << "Cac chu so" << ( (check_giam_dan) ? "" : " khong" ) << " giam dan tu hang don vi." << "\n"
			  << "Cac chu so" << ( (check_doi_xung) ? "" : " khong" ) << " doi xung.";
	
	return 0;
}