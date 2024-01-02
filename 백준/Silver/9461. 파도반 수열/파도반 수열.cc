#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
	FAST;
	int N, T;
	long long p[101] = {0, };
	p[1] = 1;
	p[2] = 1;
	p[3] = 1;
	p[4] = 2;
	p[5] = 2;
	cin >> T;
	for (int j = 0; j < T; j++)
	{
		cin >> N;
		for (int i = 6; i <= N; i++)
		{
			p[i] = p[i - 1] + p[i - 5];
		}
		cout << p[N] << '\n';
	}
	return 0;
}