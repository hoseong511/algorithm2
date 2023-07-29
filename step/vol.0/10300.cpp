#include <iostream>

int main(void)
{
	size_t n;
	std::cin >> n;
	for (size_t i = 0; i < n; i++) {
		int farmer, area, animal, grade, sum = 0;
		std::cin >> farmer;
		for (int i = 0; i < farmer; i++)
		{
			std::cin >> area >> animal >> grade;
			sum += area * grade;
		}
		std::cout << sum << std::endl;
	}
}
