#include <iostream>
#include <vector>
#include <limits.h>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

class Solution {
	public:
		vector<string> map;
		int N, M;
		int min = INT_MAX;
		void init() {
			cin >> N >> M;
			map.assign(N, "");
			for (int i = 0; i < N; i++)
				cin >> map[i];
		}
		void dfs(int i, int j, int cnt) {
			if (i == N - 1 && j == M -1) {
				cnt++;
				if (min > cnt)
					min = cnt;
				return ;
			} else if ((i < 0 || i > N - 1) || (j < 0 || j > M - 1)) {
				return ;
			} else if (map[i][j] != '1') {
				return ;
			}
			map[i][j] = '0';
			cnt++;
			dfs(i, j + 1, cnt);
			dfs(i + 1, j, cnt);
		}
};

int main()
{
	FAST;
	Solution s;

	s.init();
	s.dfs(0, 0, 0);
	cout << s.min << '\n';
	return 0;
}