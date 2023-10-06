#include <iostream>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

typedef vector<vector<int>> vvi;

int N, x;

ostream& operator<< (ostream& os, vector<int>lst)
{
	char spac[2] = {0, 0};
	for (auto x : lst) {
		os << spac << x;
		spac[0] = ' ';
	}
	return os;
}

void bfs(vvi map, int start)
{
	vector<int> res(N);
	queue<int> q;

	q.push(start);
	while (!q.empty()) {
		vector<int> childs = map[q.front()];
		for (auto x : childs) {
			if (res[x] == 0) {
				res[x] = 1;
				q.push(x);
			}
		}
		q.pop();
	}
	cout << res << '\n';
}

int main()
{
	FAST;
	vvi map;

	cin >> N;
	map.assign(N, {});
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> x;
			if (x) map[i].push_back(j);
		}
	}
	for (int i = 0; i < N; i++) {
		bfs(map, i);
	}
	return 0;
}