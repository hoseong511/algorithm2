#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
vector<int> g;
vector<char> chk;

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
		g.clear();
		g.assign(V + 1, 0);
		chk.clear();
		chk.assign(V + 1, 0);
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
