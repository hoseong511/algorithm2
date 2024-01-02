#include <iostream>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000000
using namespace std;

/*
	ex)
		[3][0]	0 + [2][0]

		[3][1]	0 + [2][1]	-> [2][1] + [3][0]
				1 + [2][0] 

		[3][2]	0 + [2][2]	-> [2][2] + [3][1]
				1 + [2][1]
				2 + [2][0]

		[3][3]  0 + [2][3]	-> [2][3] + [3][2]
				1 + [2][2]
				2 + [2][1]
				3 + [2][0] 
*/
int main()
{
	FAST;
	int K, N;
	long long p[201][201] = {{0, }, };
	fill(p[1], p[1] + 201, 1);
	cin >> N >> K;
	for (int i = 2; i <= K; i++)
	{
		p[i][0] = 1;
		for (int j = 1; j <= N; j++)
		{
			p[i][j] = (p[i - 1][j] + p[i][j - 1]) % MOD; 
		}
	}
	cout << p[K][N] << '\n';
	return 0;
}