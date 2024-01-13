#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
vector<vector<int>> g;
vector<char> chk;
int is_binary(int node)
{
	queue<int> q;
	q.push(node);
	while (!q.empty()) {
		int color = chk[q.front()];
		for (auto x : g[q.front()]) {
			if (chk[x] == 0) {
				chk[x] = color % 2 + 1;
				q.push(x);
			} else if (chk[x] == color)
				return 0;
		}
		q.pop();
	}
	return 1;
}

int main()
{
	FAST;
	int K, V, E;
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> V >> E;
		g.clear();
		chk.clear();
		g.assign(V + 1, {});
		chk.assign(V + 1, 0);
		for (int i = 0; i < E; i++) {
			int x, y;
			cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);
		}
		bool is_correct = true;
		for (int i = 1; i <= V; i++) {
			if (chk[i]) continue ;
			chk[i] = 1;
			if (is_binary(i) == 0) {
				is_correct = false;
				break ;
			};
		}
		if (is_correct) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}
