#include <iostream>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef pair<int,int> pii;
int main()
{
	FAST;
	int N;
	pii a[100001];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		a[i] = {n1, n2};
	}
	sort(a, a + N, [](pii a, pii b){
		if (a.second == b.second) return a.first < b.first;
		return a.second < b.second; }
	);
	for (int i = 0; i < N; i++)
	{
		cout << a[i].first << ' ' << a[i].second << '\n';
	}
	return 0;
}