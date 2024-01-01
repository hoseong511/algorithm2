#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

inline int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	FAST;
	int N;
	int arr[100001] = {0, };
	int p[100001] = {0, };
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	p[1] = arr[1];
	int res = p[1];
	for (int i = 2; i <= N; i++)
	{
		p[i] = max(arr[i], p[i-1] + arr[i]);
		res = max(res, p[i]);
	}
	cout << res << '\n';
	return 0;
}