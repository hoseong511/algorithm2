#include <iostream>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	string input;
	int a[26] = {0, };
	cin >> input;
	for (auto x : input) {
		a[x - 'a'] += 1;
	}
	char sp[2] = {0, 0};
	for (auto x : a) {
		cout << sp << x;
		sp[0] = ' ';
	}
	return 0;
}
