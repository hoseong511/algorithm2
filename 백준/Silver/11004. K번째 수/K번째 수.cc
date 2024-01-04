#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;
int main()
{
	FAST;
	int N, k;
	unordered_map<ll, int> a;
	vector<ll> v;
	cin >> N >> k;
	v.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cout << v[k - 1] << '\n';
	return 0;
}
