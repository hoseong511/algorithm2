#include <iostream>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

typedef vector<vector<int>> vvi;

int T, N, M, K;

int bfs(vvi& map, vvi& visit, int i, int j)
{
	queue<pair<int,int>> q;
	int dx[4] = {0, 0, 1, -1};
	int dy[4] = {1, -1, 0, 0};
	int cnt = 0;

	if (map[i][j] == 0 || visit[i][j] == 0)
		return cnt;
	q.push({i, j});
	visit[i][j] = 0;
	cnt++;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		for (int k = 0; k < 4; k++) {
			int n_x = x + dx[k];
			int n_y = y + dy[k];
			if ((0 < n_x && n_x <= N) && (0 < n_y && n_y <= M)) {
				if (map[n_x][n_y] == 1 && visit[n_x][n_y] == 1) {
					visit[n_x][n_y] = 0;
					q.push({n_x, n_y});
					cnt++;
				}
			}
		}
		q.pop();
	}
	return cnt;
}

int main()
{
	FAST;

	cin >> T;
	while (T--) {
		int x, y, res = 0;
		vvi map, visit;

		cin >> N >> M >> K;
		map.assign(N + 1, vector<int>(M + 1, 0));
		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			map[x + 1][y + 1] = 1;
		}
		visit = map;
		for (int i = 1; i < N + 1; i++) {
			for (int j = 1; j < M + 1; j++) {
				if (bfs(map, visit, i , j))
					res++;
			}
		}
		cout << res << '\n';
	}
	return 0;
}