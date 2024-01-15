#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 100001
int g[MAX];
bool chk[MAX];
int done[MAX];

int cycle(int node)
{
	int cnt = 0;
	if (chk[node]) {
		if (done[node] == 0) {
			for (int i = g[node]; i != node; i = g[i])
				cnt++;
			cnt++;
		}
		return cnt;
	}
	chk[node] = 1;
	cnt = cycle(g[node]);
	done[node] = 1;
	return cnt;
}
int main()
{
	FAST;
	int T, n;
	cin >> T;
	for (int i = 0; i< T; i++) {
		cin >> n;
		fill(g, g + n + 1, 0);
		fill(chk, chk + n + 1, 0);
		fill(done, done + n + 1, 0);
		for (int j =1; j <= n; j++)
			cin >> g[j];
		int cnt = 0;
		for (int j = 1; j <= n; j++){
			if (chk[j]) continue;
			cnt += cycle(j);
		}
		cout << n - cnt << '\n';
	}
	return 0;
}