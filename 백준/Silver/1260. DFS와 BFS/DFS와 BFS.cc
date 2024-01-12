#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
vector<vector<int>> g;
vector<int> chk;

char sp[2] = {0, 0};
void dfs(int node, int depth)
{
	if (depth == 0)
		return;
	cout << sp << node;
	sp[0] = ' ';
	chk[node] = 1;
	for (auto x : g[node]) {
		if (chk[x] == 1) continue ;
		dfs(x, depth - 1);
	}
}

void bfs(int node)
{
	queue<int> q;
	q.push(node);
	cout << sp << node;
	sp[0] = ' ';
	chk[node] = 1;
	while (!q.empty()) {
		int len = q.size();
		for (int i = 0; i < len; i++) {
			for (auto x : g[q.front()]) {
				if (chk[x]) continue ;
				q.push(x);
				cout << sp << x;
				chk[x] = 1;
			}
			q.pop();
		}
	}
}
int main()
{
	FAST;
	int N, M, V;
	cin >> N >> M >> V;
	g.assign(N + 1, {});
	chk.assign(N + 1, 0);
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for (int i = 1; i <= N; i++) {
		sort(g[i].begin(), g[i].end());
	}
	dfs(V, N);
	cout << '\n';
	sp[0] = 0;
	chk.assign(N + 1, 0);
	bfs(V);
	return 0;
}