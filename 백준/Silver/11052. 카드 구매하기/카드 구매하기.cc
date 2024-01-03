#include <iostream>
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
	int a[5001] = {0, };
	int p[5001] = {0, };
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= N; i++)
	{
		p[i] = a[i];
		for (int j = i; j >= 1; j--)
		{
			if (i - j > j)
				break ;
			p[i] = max(p[i], p[j] + p[i - j]);
		}
	}
	cout << p[N];
	return 0;
}