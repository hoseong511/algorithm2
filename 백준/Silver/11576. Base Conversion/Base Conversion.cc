#include <iostream>
#include <algorithm>
#include <vector>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int to_decimal(vector<int> v, int base)
{
	int sep = 1;
	int res = 0;
	for (auto x : v) {
		res += x * sep;
		sep *= base;
	}
	return res;
}

void print_base(int num, int base)
{
	int c;
	char spac[2] = {0, 0};
	vector<int> res;
	while (num > 0) {
		c = num % base;
		res.push_back(c);
		num /= base;
	}
	reverse(res.begin(), res.end());
	for (auto x : res) {
		cout << spac << x;
		spac[0] = ' ';
	}
}

int main()
{
	FAST;
	int A, B, m;
	vector<int> v;
	cin >> A >> B >> m;
	v.resize(m);
	for (int i = m - 1; i >= 0; i--) {
		cin >> v[i];
	}
	int num = to_decimal(v, A);
	print_base(num, B);
	return 0;
}
