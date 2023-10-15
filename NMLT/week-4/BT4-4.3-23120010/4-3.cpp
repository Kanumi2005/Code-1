#include <iostream>

int main()
{
	int thang, nam, ngay_trong_thang;
	
	std::cout << "Nhap thang va nam = ";
	std::cin >> thang >> nam;
	
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
		thang == 8 || thang == 10 || thang == 12)
		ngay_trong_thang = 31;
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		ngay_trong_thang = 30;
	else if ( (nam % 4 != 0) || (nam % 100 == 0 && nam % 400 != 0) )
		ngay_trong_thang = 28;
	else
		ngay_trong_thang = 29;
	std::cout << "Thang " << thang << " nam " << nam << " co "
			  << ngay_trong_thang << " ngay.";

	return 0;
}