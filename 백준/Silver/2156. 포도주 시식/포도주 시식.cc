#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

inline int max(int a, int b, int c)
{
	a = a > b ? a : b;
	return a > c ? a : c;
}

int main()
{
	FAST;
	int N;
	int arr[10001] = {0, };
	int p[10001] = {0, };
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	p[1] = arr[1];
	p[2] = arr[1] + arr[2];
	p[3] = max(arr[3] + arr[1], arr[3] + arr[2], p[2]);
	for (int i = 4; i <= N; i++)
	{
		p[i] = max(p[i-3] + arr[i-1] + arr[i], p[i-2] + arr[i], p[i-1]);
	}
	cout << p[N];
	return 0;
}