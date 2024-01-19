#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 100001

int chk[MAX];
int res[MAX];
vector<vector<int>> g;

void bfs()
{
	queue<int> q;
	q.push(1);
	chk[1] = 1;
	while (!q.empty()) {
		int p = q.front();
		for (auto x : g[p]) {
			if (chk[x]) continue ;
			chk[x] = 1;
			res[x] = p;
			q.push(x);
		}
		q.pop();
	}
}

int main()
{
	FAST;
	int N;
	cin >> N;
	g.assign(N + 1, {});
	for (int i = 0; i < N - 1; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	bfs();
	for (int i = 2; i <= N; i++) {
		cout << res[i] << '\n';
	}
	return 0;
}