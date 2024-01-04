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
typedef pair<ll, int> plli;
int main()
{
	FAST;
	int N;
	ll k;
	unordered_map<ll, int> a;
	vector<plli> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> k;
		a[k] += 1;
	}
	for (auto x : a) {
		v.push_back(x);
	}
	sort(v.begin(), v.end(), [](plli a, plli b) {
		if (a.second ^ b.second) return a.second > b.second;
		return a.first < b.first;
	});
	cout << v[0].first << '\n';
	return 0;
}
