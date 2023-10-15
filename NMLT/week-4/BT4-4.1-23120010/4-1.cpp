#include <iostream>

int main()
{
	int a, b;
	float ket_qua;
	char buf[50], phep_tinh;
	
	std::cout << "Nhap a, b = ";
	std::cin >> a >> b;
	std::cin.getline(buf, 49);
	std::cout << "Nhap phep tinh (+,-,*,/,%) = ";
	std::cin >> phep_tinh;
	
	if ( b == 0 && (phep_tinh == '/' || phep_tinh == '%') )
		std::cout << "Loi chia 0!";
	else
	{
		switch(phep_tinh)
		{
			case '+':
				ket_qua = a + b;
				break;
			case '-':
				ket_qua = a - b;
				break;
			case '*':
				ket_qua = a * b;
				break;
			case '/':
				ket_qua = static_cast<float> (a) / b;
				break;
			case '%':
				ket_qua = a % b;
		}
		std::cout << "Ket qua = " << ket_qua;
	}
	
	return 0;
}