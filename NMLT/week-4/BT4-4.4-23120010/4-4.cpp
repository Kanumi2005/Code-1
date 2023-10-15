#include <iostream>

int main()
{
	int n;
	long long factorial_n = 1, S_n = 0;
	double ln2_n = 0, PI_n = 0;
	
	std::cout << "Nhap N = ";
	std::cin >> n;
	
	for (int i = 1; i <= n; ++i)
	{
		factorial_n *= i;
		if (i % 2 == 0)
		{
			ln2_n -= 1.0 / i;
			PI_n += 1.0 / (2 * i + 1);
		}
		else
		{
			ln2_n += 1.0 / i;
			PI_n -= 1.0 / (2 * i + 1);
		}
	}
	PI_n = 4 * ( PI_n + 1);
	for (int i = 1; i * i <= n; ++i)
	{
		S_n += i * i;
	}
	std::cout << "N! = "    << factorial_n << "\n"
			  << "ln(2) = " << ln2_n       << "\n"
			  << "PI = "    << PI_n        << "\n"
			  << "S = "     << S_n;
	
	return 0;
}