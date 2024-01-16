#include <iostream>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 1001
int m, n;
int g[MAX][MAX];
char dx[4] = {1, 0, -1, 0};
char dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

int bfs()
{
	int day = 0;
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= m || ny < 0 || ny >= n)
				continue ;
			if (g[ny][nx] != 0)
				continue ;
			g[ny][nx] = g[y][x] + 1;
			day = max(day, g[ny][nx]);
			q.push({ny, nx});
		}
		q.pop();
	}
	return day - 1;
}

int main()
{
	FAST;
	int cnt = 0;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
			if (g[i][j] == 1)
				q.push({i, j});
			else if (g[i][j] == 0)
				cnt++;
		}
	}
	if (cnt == 0) {
		cout << 0 << '\n';
	} else {
		int res = bfs();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (g[i][j] == 0) {
					res = -1;
					break ;
				}
			}
		}
		cout << res << '\n';
	}
	return 0;
}