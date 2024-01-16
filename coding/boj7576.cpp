#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int m, n;
int g[1001][1001];
char state[1001][1001]; // 0: not visited 
char dx[4] = {1, 0, -1, 0};
char dy[4] = {0, 1, 0, -1};
void dfs(int y, int x, int prev)
{
	if (x < 0 || x >= m || y < 0 || y >= n)
		return ;
	if (state[y][x]) 
		return ;
	state[y][x] = -1;
	if (prev) {
		state[]
	}
}
int main()
{
	FAST;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (state[i][j]) continue ;
			dfs(i, j, g[i][j]);
		}
	}
	
	return 0;
}