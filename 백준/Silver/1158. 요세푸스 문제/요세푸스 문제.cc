#include <iostream>
#include <vector>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	FAST;
	vector<int> mem;
	vector<int> v;
	int N, K, idx;
	char comm[3] = {0, ' ', 0};
	cin >> N >> K;
	mem.assign(N, 0);
	idx = K - 1;
	int j = 0;
	mem[idx] = 1;
	v.push_back(idx + 1);
	while (v.size() != (size_t)N) {
		idx++;
		idx %= N;
		if (mem[idx] != 1) {
			j++;
			if (j == K) {
				j = 0;
				v.push_back(idx + 1);
				mem[idx] = 1;
			}
		}
	}
	cout << '<';
	for (auto x : v) {
		cout << comm << x;
		comm[0] = ',';
	}
	cout << '>';
	return 0;
}
