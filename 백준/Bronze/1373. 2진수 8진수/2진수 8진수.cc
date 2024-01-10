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
	for (int i = len - 1; i >= 0; i-=3) {
		int base = 1;
		int res = 0;
		for (int j = 0; i - j >= 0 && j < 3; j++) {
			res += (N[i - j] - '0') * base;
			base *= 2;
		}
		v.push_back(res + '0');
	}
	reverse(v.begin(), v.end());
	cout << v;
	return 0;
}
