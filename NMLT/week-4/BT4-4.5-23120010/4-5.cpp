#include <iostream>

int main()
{
	int cnt = 1;
	
	for (int i = 100; i < 1000; ++i)
	{
		if (i / 100 + i % 10 - ( (i / 10) % 10 ) == 0)
		{
				std::cout << cnt << ": " << i << "\n";
				++cnt;
		}
	}
	std::cout << "Co tat ca " << --cnt << " so thoa tinh chat.";
	
	return 0;
}