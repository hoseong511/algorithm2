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
	int arr[301] = {0, };
	int p[301] = {0, };
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	p[1] = arr[1];
	p[2] = arr[1] + arr[2];
	for (int i = 3; i <= N; i++)
	{
		p[i] = max(arr[i] + p[i-2], arr[i] + arr[i-1] + p[i-3]);
	}
	cout << p[N] << '\n';
	return 0;
}