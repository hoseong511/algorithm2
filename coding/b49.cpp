#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

class Solution {
	public:
		vector<string> map;
		vector<string> chk;
		vector<vector<int>> ans;
		int N, M;
		int dx[4] = {0, 0, 1, -1};
		int dy[4] = {1, -1, 0, 0};

		void init() {
			cin >> N >> M;
			map.assign(N, "");
			for (int i = 0; i < N; i++)
				cin >> map[i];
			chk = map;
			ans.assign(N, vector<int>(M, 1));
		}
		void bfs(int i, int j) {
			queue<pair<int, int>> q;
			q.push({i, j});
			chk[i][j] = '0';
			while (!q.empty()) {
				int x = q.front().first;
				int y = q.front().second;
				for (int k = 0; k < 4; k++) {
					int next_x = x + dx[k];
					int next_y = y + dy[k];
					if ((0 <= next_x && next_x < N) && (0 <= next_y && next_y < M)) {
						if (map[next_x][next_y] == '1' && chk[next_x][next_y] == '1') {
							chk[next_x][next_y] = '0';
							ans[next_x][next_y] = ans[x][y] + 1;
							q.push({next_x, next_y});
						}
					}
				}
				q.pop();
			}
		}
};

int main()
{
	FAST;
	Solution s;

	s.init();
	s.bfs(0, 0);
	cout << s.ans[s.N -1][s.M - 1] << '\n';
	return 0;
}