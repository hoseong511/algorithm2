#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int min(int a, int b)
{
	return a > b ? b : a;
}

int main()
{
	FAST;
	int N;
	int p[100001] = {0, };
	cin >> N;
	p[1] = 1;
	p[2] = 2;
	for (int i = 3; i <= N; i++)
	{
		p[i] = p[i - 1] + 1;
		for (int j = 2; j * j <= i; j++)
		{
			p[i] = min(p[i], p[i - j * j] + 1);
		}
	}
	cout << p[N] << '\n';
	return 0;
}