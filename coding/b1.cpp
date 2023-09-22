#include <iostream>

int main()
{
	std::string str;
	int n;
	std::cin >> str;
	std::cin >> n;
	std::cout << str[n - 1] << std::endl;
}