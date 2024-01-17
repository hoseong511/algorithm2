#include <iostream>
#include <queue>
#include <cstring>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 101
int N, idx = 1;
int g[MAX][MAX];
bool chk[MAX][MAX];
char dx[4] = {1, 0, -1, 0};
char dy[4] = {0, 1, 0, -1};

void dfs(int x, int y)
{
	if (x < 0 || x >= N || y < 0 || y >= N)
		return ;
	if (chk[y][x] == 1 || g[y][x] == 0)
		return ;
	chk[y][x] = 1;
	g[y][x] = idx;
	for (int i = 0; i < 4; i++) {
		dfs(x + dx[i], y + dy[i]);
	}
}

int bfs(int idx)
{
	int res = 0;
	queue<pair<char, char>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (g[i][j] == idx) {
				chk[i][j] = 1;
				q.push({j, i});
			}
		}
	}
	while (!q.empty()) {
		int size = q.size();
		for (int s = 0; s < size; s++) {
			int x = q.front().first;
			int y = q.front().second;
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (nx < 0 || nx >= N || ny < 0 || ny >= N)
					continue ;
				if (chk[ny][nx] == 1)
					continue ;
				if (g[ny][nx] == 0) {
					chk[ny][nx] = 1;
					q.push({nx, ny});
				} else if (g[ny][nx] != idx)
					return res;
			}
			q.pop();
		}
		res++;
	}
	return res;
}

int main()
{
	FAST;
	int res = MAX * MAX;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> g[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (chk[i][j] == 1 || g[i][j] == 0) continue;
			dfs(j, i);
			idx += 1;
		}
	}
	for (int i = 1; i < idx; i++) {
		memset(chk, 0, sizeof(chk));
		res = min(res, bfs(i));
	}
	cout << res;
	return 0;
}