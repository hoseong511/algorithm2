#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 100001
int g[MAX];
char state[MAX]; // -1 visited, 0 not visited, 1 cycle chk

int cycle(int node)
{
	int cnt = 0;
	if (state[node]) {
		if (state[node] == -1) {
			for (int i = g[node]; i != node; i = g[i])
				cnt++;
			cnt++;
		}
		return cnt;
	}
	state[node] = -1;
	cnt = cycle(g[node]);
	state[node] = 1;
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
		fill(state, state + n + 1, 0);
		for (int j =1; j <= n; j++)
			cin >> g[j];
		int cnt = 0;
		for (int j = 1; j <= n; j++){
			if (state[j]) continue;
			cnt += cycle(j);
		}
		cout << n - cnt << '\n';
	}
	return 0;
}