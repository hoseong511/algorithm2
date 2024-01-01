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
	int res = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
		if (i == 1) {
			p[1] = arr[1];
			res = p[1];
		}
		p[i] = max(arr[i], p[i-1] + arr[i]);
		res = max(res, p[i]);
	}
	cout << res << '\n';
	return 0;
}