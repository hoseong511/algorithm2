#include <iostream>
 
int main()
{
	std::string input;
	std::cin >> input;
	if (input == "SONGDO")
		std::cout << "HIGHSCHOOL" << std::endl;
	else if (input == "CODE")
		std::cout << "MASTER" << std::endl;
	else if (input == "2023")
		std::cout << "0611" << std::endl;
	else if (input == "ALGORITHM")
		std::cout << "CONTEST" << std::endl;
	return 0;
}