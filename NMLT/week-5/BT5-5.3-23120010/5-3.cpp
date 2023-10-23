#include <iostream>
#include <sstream>
#include <string>
#include <climits>

int main() {
	
	std::string line;
	int a, cnt = 1, max = 0, min = INT_MAX;
	bool check_input;
	
	do {
		std::cout << "So thu " << cnt << " = ";
		std::getline(std::cin, line);
		std::stringstream buf(line);
		check_input = ( (buf >> a) && buf.eof() && a >= 0 );
		if (check_input) {
			++cnt;
			if (a > max)
				max = a;
			
			if (a < min && a > 0)
				min = a;
		}
	} while (! (check_input && a == 0) );
	
	std::cout << "So lon nhat = " << max << "\n"
			  << "So nho nhat = " << min;	
	
	return 0;
}