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
	p[1] = a[1];
	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j >= 1; j--)
		{
			p[i] = max(p[i], a[j] + p[i - j]);
		}
	}
	cout << p[N];
	return 0;
}