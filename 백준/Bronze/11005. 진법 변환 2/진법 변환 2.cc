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
	int N, B;
	int c;
	vector<int> v;
	cin >> N >> B;
	while (N > 0) {
		c = N % B;
		v.push_back(c);
		N = N / B;
	}
	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] < 10) printf("%d", v[i]);
		else printf("%c", v[i] - 10 + 'A');
	}
	return 0;
}
