#include <iostream>
#include <algorithm>

int main()
{
	int arr[3];
	while (true) {
		std::cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] + arr[1] + arr[2] == 0)
			break ;
		std::sort(arr, arr+3);
		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
			std::cout << "right";
		else
			std::cout << "wrong";
		std::cout << std::endl;
	}
	return 0;
}
