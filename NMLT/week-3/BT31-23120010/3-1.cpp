#include <iostream>
#include <string>

int main()
{
	int year_of_birth;
	std::string name;

	std::cout << "Ten = ";
	std::getline(std::cin, name);
	std::cout << "Nam sinh = ";
	std::cin >> year_of_birth;
	std::cout << "Chao ban " << name << ", nam nay ban " << 2023 - year_of_birth << " tuoi.";
	
	return 0;
}