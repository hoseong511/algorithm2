#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	if (a > 0 && b < 10)
		std::cout << a+b << std::endl;
	return 0;
}