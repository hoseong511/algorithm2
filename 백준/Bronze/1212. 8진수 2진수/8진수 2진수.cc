#include <iostream>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	FAST;
	string N;
	string v;
	cin >> N;
	int len = N.length();
	for (int i = 0; i < len; i++) {
		int c;
		int num = N[i] - '0';
		char bit[4] = "000";
		for (int j = 0; j < 3; j++) {
			c = num % 2;
			if (c) bit[2 - j] = '1';
			num = num / 2;
		}
		if (i == 0) v.append(to_string(atoi(bit)));
		else v.append(bit);
	}
	cout << v;
	return 0;
}
