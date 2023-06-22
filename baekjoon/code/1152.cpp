#include <iostream>

int main()
{
	std::string input;
	std::string needle(" ");
	std::getline(std::cin, input);
	size_t pos = input.find(needle);
	int sp_cnt = 0;
	while (pos != std::string::npos)
	{
		if (pos != 0 && pos != input.size() - 1)
			sp_cnt++;
		pos = input.find(needle, pos + 1);
	}
	if (input != " ")
		std::cout << sp_cnt + 1 << std::endl;
	else
		std::cout << 0 << std::endl;
	return 0;
}
