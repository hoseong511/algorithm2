#include <iostream>
#include <algorithm>
#include <vector>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef pair<int,int> pii;
int main()
{
	FAST;
	int N;
	vector<pii> a;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		a.push_back({n1, n2});
	}
	sort(a.begin(), a.end(), [](pii a, pii b) {
		if (a.first == b.first) return a.second < b.second;
		return a.first < b.first; });
	for (auto x : a)
	{
		cout << x.first << ' ' << x.second << '\n';
	}
	return 0;
}