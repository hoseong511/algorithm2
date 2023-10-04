#include <cstdio>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<int> chk;

void dfs(int V, int N)
{
	if (N == 0)
		return ;
	printf("%d ", V);
	chk[V] = 1;
	for (auto x : graph[V]) {
		if (chk[x]) continue;
		dfs(x, N--);
	}
}

void bfs(int V)
{
	deque<int> q;
	q.push_back(V);
	chk[V] = 1;
	printf("%d ", V);
	while (!q.empty()) {
		size_t len = q.size();
		for (size_t i = 0; i < len; i++) {
			for (auto x : graph[q.front()]) {
				if (chk[x])	continue ;
				q.push_back(x);
				chk[x] = 1;
				printf("%d ", x);
			}
			q.pop_front();
		}
	}
	printf("\n");
}

int main()
{
	int N, M, V;
	int x, y;

	scanf("%d %d %d", &N, &M, &V);
	graph.assign(N+1, {});
	chk.assign(N + 1, 0);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &x, &y);
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	for (size_t i = 0; i < graph.size(); i++)
		sort(graph[i].begin(), graph[i].end());
	dfs(V, N);
	printf("\n");
	chk.clear();
	chk.assign(N + 1, 0);
	bfs(V);
	return 0;
}