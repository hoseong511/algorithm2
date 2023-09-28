#include <iostream>
#include <string>
#include <sstream>
#include <limits.h>

using namespace std;

int main()
{
	int N, num, low = INT_MAX, high= INT_MIN;
	string str;
	scanf("%d\n", &N);
	getline(cin, str);
	stringstream ss(str);
	while (ss >> num) {
		if (low > num) low = num;
		if (high < num) high = num;
	}
	cout << low << ' ' << high << '\n';
	return 0;
}