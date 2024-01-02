#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000
using namespace std;

int main()
{
	FAST;
	string input;
	int p[5001] = {1, 1,};
	int a[5001] = {0, };
	int N;
	cin >> input;
	N = input.length();
	for (int i = 1; i <= N; i++)
	{
		a[i] = input[i-1] - '0';
	}
	if (input[0] == '0')
	{
		cout << 0 << '\n';
		return 0;
	}
	for (int i = 2; i <= N; i++)
	{
		if (a[i] > 0 && a[i] < 10)
			p[i] = (p[i - 1] + p[i]) % MOD;
		int num = a[i] + a[i-1] * 10;
		if (num >= 10 && num <= 26)
			p[i] = (p[i - 2] + p[i]) % MOD;
	}
	cout << p[N];
	return 0;
}