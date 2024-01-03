#include <iostream>
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma optimize("unroll-loops")
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N,k;
	cin >> N;
	int a[10001] = {0,};
	for (int i = 1; i <= N; i++) {
		cin >> k;
		a[k]++;
	}
	for (int i = 1; i < 10001; i++) {
		while (a[i] != 0) {
			cout << i << '\n';
			a[i]--;
		}
	}
	return 0;
}