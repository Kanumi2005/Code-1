#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

int main() {
	
	int thang, nam, thu;
	std::string line;
	std::stringstream buf;
	do {
		std::cout << "Muon xem lich thang va nam nao? ";
		std::getline(std::cin, line);
		buf = static_cast<std::stringstream> (line);
	} while ( !( (buf >> thang >> nam) && buf.eof() &&thang >= 1 && thang <= 12 && nam > 0) );
	do {
		std::cout << "Ngay dau thang la thu may? ";
		std::getline(std::cin, line);
		buf = static_cast<std::stringstream> (line);
	} while ( !( (buf >> thu) && buf.eof() &&thu >= 2 && thu <= 8 ) );
	
	int ngay_trong_thang;
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7
		|| thang == 8 || thang == 10 || thang == 12)
		ngay_trong_thang = 31;
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		ngay_trong_thang = 30;
	else if ( nam % 4 != 0 || (nam % 100 == 0 && nam % 400 != 0) )
		ngay_trong_thang = 28;
	else
		ngay_trong_thang = 29;
	
	int col = thu - 1, ngay = 1;
	std::cout << "Mon Tue Wed Thu Fri Sat Sun\n"
			  << std::setw((thu - 2) * 4) << "";
	while (ngay <= ngay_trong_thang) {
		
		std::cout << std::setw(3) << ngay;
		++ngay;
		++col;
		if (col > 7) {
			std::cout << "\n";
			col = 1;
		}
		else
			std::cout << " ";
	}
	
	return 0;
}