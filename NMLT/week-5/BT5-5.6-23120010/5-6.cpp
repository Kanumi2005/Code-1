#include <iostream>

int main() {
	int n, m;
	
	std::cout << "Nhap N, M = ";
	std::cin >> n >> m;
	
	long long bit = 1 << (m - 1);
	std::cout << m << " bit dau tien cua " << n << ": ";
	while(bit > 0) {
		std::cout << (n & bit) / bit;
		bit >>= 1;
	}
	
	return 0;
}