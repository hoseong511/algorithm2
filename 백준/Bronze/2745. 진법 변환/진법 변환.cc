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
	int B;
	cin >> N >> B;
	int base = 1;
	int len = N.length();
	int res = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (isdigit(N[i])) res += (N[i] - '0') * base;
		else res += (N[i] - 'A' + 10) * base;
		base *= B;
	}
	cout << res << '\n';
	return 0;
}
