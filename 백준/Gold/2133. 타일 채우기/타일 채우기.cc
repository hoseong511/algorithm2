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
	int p[100001] = {1, };
	cin >> N;
	p[1] = 0;
	p[2] = 3;
	for (int i = 4; i <= N; i += 2)
	{
		p[i] = p[i - 2] * p[2];
		for (int j = 4; j <= i; j += 2)
		{
			p[i] += p[i - j] * 2;
		}
	}
	cout << p[N] << '\n';
	return 0;
}