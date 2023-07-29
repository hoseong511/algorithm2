#include <iostream>

int main(void)
{
	long long our, other;
	while (std::cin >> our >> other) {
		std::cout << std::max(our, other) - std::min(our, other) << "\n";
	}
	return 0;
}

