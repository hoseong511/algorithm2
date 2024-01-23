#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 100001
typedef pair<int, int> pii;
bool chk[MAX];
int max_dist = 0;
int max_node = 0;
vector<vector<pii>> g;

void dfs(int node, int d)
{
	if (chk[node])
		return ;
	if (max_dist < d) {
		max_dist = d;
		max_node = node;
	}
	chk[node] = 1;
	for (auto x : g[node]) {
		dfs(x.first, x.second + d);
	}
}

int main()
{
	FAST;
	int N;
	cin >> N;
	g.assign(N + 1, {});
	for (int i = 1; i < N; i++) {
		int n1, n2, d;
		cin >> n1 >> n2 >> d;
		g[n1].push_back({n2, d});
		g[n2].push_back({n1, d});
	}
	for (int i = 1; i < N; i++) {
		dfs(i, 0);
		memset(chk, 0, sizeof(chk));
	}
	cout << max_dist;
	return 0;
}