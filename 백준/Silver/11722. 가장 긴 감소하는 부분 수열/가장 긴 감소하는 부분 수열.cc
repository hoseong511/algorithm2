#include <iostream>
#include <algorithm>
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
	int arr[1001] = {0, };
	int p[1001] = {0, };
	fill(p + 1, p + 1001, 1);
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	int res = p[1];
	for (int i = 2; i <= N; i++)
	{
		for (int j = i - 1; j >= 1; j--)
		{
			if (arr[i] < arr[j])
			{
				p[i] = max(p[i], p[j] + 1);
			}
		}
		res  = max(p[i], res);
	}
	cout << res << '\n';
	return 0;
}