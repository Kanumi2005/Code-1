#include <iostream>
#include <cmath>

int main()
{
	int a, b, c;
	int delta;
	
	std::cout << "Nhap he so a, b, c = ";
	std::cin >> a >> b >> c;
	
	delta = b * b - 4 * a * c;
	
	if (delta > 0)
		std::cout << "Nghiem 1 = " << (-b + std::sqrt(delta) ) / (2 * a) << "\n"
				  << "Nghiem 2 = " << (-b - std::sqrt(delta) ) / (2 * a);
	else if (delta == 0)
		std::cout << "Nghiem kep = " << static_cast<float> (-b) / (2 * a);
	else
		std::cout << "Phuong trinh vo nghiem!";
	
	return 0;
}