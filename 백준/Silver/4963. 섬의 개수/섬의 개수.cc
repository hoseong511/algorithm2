#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int w, h;
vector<string> g;
vector<string> chk;
int dfs(int y, int x, int cnt)
{
	char dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
	char dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
	if (y < 0 || y >= h || x < 0 || x >= w)
		return cnt;
	if (chk[y][x] == '1')
		return cnt;
	chk[y][x] = '1';
	if (g[y][x] == '1') {
		cnt += 1;
		for (int i = 0; i < 8; i++) {
			cnt = dfs(y + dy[i], x + dx[i], cnt);
		}
	}
	return cnt;
}

int main()
{
	FAST;
	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0)
			break ;
		g.clear();
		g.assign(h, string(w, ' '));
		chk.clear();
		chk.assign(h, string(w, '0'));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> g[i][j];
			}
		}
		int cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (chk[i][j] == '1')
					continue ;
				if (dfs(i, j, 0))
					cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}