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
	int up[1001] = {0, };
	int down[1001] = {0, };
	fill(up + 1, up + 1001, 1);
	fill(down + 1, down + 1001, 1);
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 2; i <= N; i++)
	{
		for (int j = i - 1; j >= 1; j--)
		{
			if (arr[i] > arr[j])
			{
				up[i] = max(up[i], up[j] + 1);
			}
		}
		int k = N - i + 1;
		for (int j = k + 1; j <= N; j++)
		{
			if (arr[k] > arr[j])
			{
				down[k] = max(down[k], down[j] + 1);
			}
		}
	}
	int res = 0;
	for (int i = 1; i <= N; i++)
	{
		res  = max(up[i] + down[i] - 1, res);
	}
	cout << res << '\n';
	return 0;
}