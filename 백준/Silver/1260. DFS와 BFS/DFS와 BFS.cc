#include <cstdio>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

template <typename T>
void print(T& vec)
{
	char spac[2] = {0, 0};
	for (int x : vec) {
		printf("%s%d", spac, x);
		spac[0] = ' ';
	}
	printf("\n");
}

void dfs(vector<vector<int>> graph, int V, vector<int>& tar, int N)
{
	if (tar.size() == (size_t)N) {
		return ;
	}
	tar.push_back(V);
	for (auto x : graph[V]) {
		if (find(tar.begin(), tar.end(), x) != tar.end())
			continue ;
		dfs(graph, x, tar, N);
	}
}

void bfs(vector<vector<int>> graph, int V)
{
	deque<int> q, tar;
	q.push_back(V);
	tar.push_back(V);
	while (!q.empty()) {
		size_t len = q.size();
		for (size_t i = 0; i < len; i++) {
			for (auto x : graph[q.front()]) {
				if (find(tar.begin(), tar.end(), x) != tar.end())
					continue ;
				q.push_back(x);
				tar.push_back(x);
			}
			q.pop_front();
		}
	}
	print(tar);
}

int main()
{
	int N, M, V;
	int x, y;

	scanf("%d %d %d", &N, &M, &V);
	vector<vector<int>> lst(N + 1);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &x, &y);
		lst[x].push_back(y);
		lst[y].push_back(x);
	}
	for (size_t i = 0; i < lst.size(); i++)
		sort(lst[i].begin(), lst[i].end());
	vector<int> tar;
	deque<int> tar2;
	dfs(lst, V, tar, N);
	print(tar);
	bfs(lst, V);
	return 0;
}