#include <iostream>
#include <vector>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
vector<vector<int>> g;
vector<char> chk;

void dfs(int node, int depth)
{
	if (depth == 0)
		return ;
	chk[node] = 1;
	for (auto x : g[node]) {
		if (chk[x] == 1) continue;
		dfs(x, depth - 1);
	}
}

int main()
{
	FAST;
	int M, N;
	cin >> N >> M;
	g.assign(N + 1, {});
	chk.assign(N + 1, 0);
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (chk[i] == 1) continue ;
		dfs(i, N);
		cnt++;
	}
	cout << cnt;
	return 0;
}
