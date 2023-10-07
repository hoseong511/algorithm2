#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vi;

int N, M, min_num = INT_MAX;
vector<int> lst;

void combination(vvi& board, vi& tar, int k, int x, int y)
{
	char dx[4] = {0, 0, 1, -1};
	char dy[4] = {1, -1, 0, 0};
	int res = 0;
	if (k == 0) {
		for (auto x : tar) {
			res += board[x.first][x.second];
		}
		lst.push_back(res);
		return ;
	}
	for (int i = 0; i < 4; i++) {
		int n_x = x + dx[i];
		int n_y = y + dy[i];
		if ((0 <= n_x && n_x < N) && (0 <= n_y && n_y < M)) {
			tar.push_back({n_x, n_y});
			combination(board, tar, k - 1, n_x, n_y);
			tar.pop_back();;
		}
	}
}

int solution(vvi board, int k)
{
	int answer;
	vector<pair<int, int>> tar;
	vvi ans;
	N = board.size();
	M = board[0].size();
	ans.assign(N, vector<int>(M, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			combination(board, tar, k, i, j);
			int tmp = *max_element(lst.begin(), lst.end());
			if (min_num > tmp)
				min_num = tmp;
			lst.clear();
		}
	}
	answer = min_num;
	return answer;
}

int main()
{
	vvi test1{{100, 10, 10, 1}, {10, 10, 1, 1}, {10, 1, 1, 1}, {1, 1, 1, 1}};
	cout << solution(test1, 1) << '\n';
	return 0;
}