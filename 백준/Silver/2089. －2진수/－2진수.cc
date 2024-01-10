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
	int N;
	string v;
	cin >> N;
	if (N == 0) {
		cout << "0";
		return 0;
	}
	while (N != 0) {
		if (N%-2 == 0) {
			v.push_back('0');
			N /= -2;
		} else {
			v.push_back('1');
			N = (N - 1) / -2;
		}
	}
	reverse(v.begin(), v.end());
	cout << v;
	return 0;
}