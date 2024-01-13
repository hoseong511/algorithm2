#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int g[1001];
char chk[1001];

void cycle(int node)
{
	if (chk[node] == 1)
		return ;
	chk[node] = 1;
	cycle(g[node]);
}

int main()
{
	FAST;
	int T;
	cin >> T;
	for (int i = 0; i< T; i++) {
		int V;
		cin >> V;
		fill(g, g + 1001, 0);
		fill(chk, chk + 1001, 0);
		for (int i = 1; i <= V; i++) {
			cin >> g[i];
		}
		int cnt = 0;
		for (int i = 1; i<= V; i++) {
			if (chk[i] == 1) continue ;
			cycle(i);
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
