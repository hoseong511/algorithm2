#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
vector<string> g;
vector<string> chk;
int N;

int dfs(int x, int y, int cnt)
{
	if (x < 0 || x >= N || y < 0 || y >= N)
		return cnt;
	if (chk[y][x] == '1')
		return cnt;
	chk[y][x] = '1';
	if (g[y][x] == '1') {
		cnt += 1;
		cnt = dfs(x + 1, y, cnt);
		cnt = dfs(x - 1, y, cnt);
		cnt = dfs(x, y + 1, cnt);
		cnt = dfs(x, y - 1, cnt);
	}
	return cnt;
}

int main()
{
	FAST;
	cin >> N;
	g.assign(N, "");
	chk.assign(N, string(N, '0'));
	for (int i = 0; i< N; i++) {
		cin >> g[i];
	}
	vector<int> res;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			if (chk[i][j] == '1') continue ;
			cnt = dfs(j, i, 0);
			if (cnt)
				res.push_back(cnt);
		}
	}
	sort(res.begin(), res.end());
	cout << res.size() << '\n';
	for (auto x : res) {
		cout << x << '\n';
	}
	return 0;
}