#include <iostream>
#include <vector>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	FAST;
	int N;
	vector<int> a;
	cin >> N;
	a.assign(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end(), [](int a, int b) { return a < b; });
	for (auto x: a)
	{
		cout << x<< '\n';
	}
	return 0;
}