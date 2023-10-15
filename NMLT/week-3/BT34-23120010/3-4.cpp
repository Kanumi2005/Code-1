#include <iostream>

int main()
{
	int t1_h, t1_m, t1_s,
		t2_h, t2_m, t2_s;
	int T1, T2;
	
	std::cout << "Thoi diem T1 (h m s) = ";
	std::cin >> t1_h >> t1_m >> t1_s;
	std::cout << "Thoi diem T2 (h m s) = ";
	std::cin >> t2_h >> t2_m >> t2_s;
	
	T1 = t1_h * 3600 + t1_m * 60 + t1_s;
	T2 = t2_h * 3600 + t2_m * 60 + t2_s;
	
	std::cout << "Khoang cach = " << ( (T1 < T2) ? T2 - T1 : T1 - T2 );
	
	return 0;
}