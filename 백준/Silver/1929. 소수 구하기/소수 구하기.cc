#include <iostream>
#include <algorithm>
#include <cmath>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

#define MAX 1000001
int main()
{
	FAST;
	int N, M;
	int a[MAX] = {0, };
	cin >> M >> N;
	fill(a + 2, a + N + 1, 1);
	for (int i = 2; i < sqrt(N + 1); i++) {
		if (a[i] != 1) continue ;
		for (int j = 2; i * j <= N; j++) {
			a[i * j] = 0;
		}
	}
	for (int i = M; i <= N; i++) {
		if (a[i] == 1) cout << i << '\n';
	}
	return 0;
}