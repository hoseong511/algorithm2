#include <iostream>
#include <vector>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	string inp;
	vector<string> v;
	cin >> inp;
	for (size_t i = 0, j = inp.length(); i < inp.length(); i++) {
		v.push_back(string(inp, i, j - i));
	}
	sort(v.begin(), v.end());
	for (auto x : v) {
		cout << x << '\n';
	}
	return 0;
}
