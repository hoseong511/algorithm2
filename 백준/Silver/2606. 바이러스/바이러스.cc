#include <iostream>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

typedef vector<vector<int>> vvi;

int bfs(vector<bool>& visit, vvi graph, int V)
{
	int cnt = 0;
	queue<int> q;
	q.push(V);
	visit[V] = true;
	while (!q.empty()) {
		int idx = q.front();
		for (auto x : graph[idx]) {
			if (visit[x] == false) {
				q.push(x);
				visit[x] = true;
				cnt++;
			}
		}
		q.pop();
	}
	return cnt;
}

int main()
{
	FAST;
	int N, L, a = 0, b = 0;
	size_t pos;
	vvi graph;
	vector<bool> visit;

	cin >> N >> L;
	graph.assign(N + 1, {});
	visit.assign(N + 1, 0);
	for (int i = 0; i < L; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	cout << bfs(visit, graph, 1);
	return 0;
}
