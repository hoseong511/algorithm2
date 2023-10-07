#include <iostream>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;
typedef vector<vector<int>> vvi;

vector<int> ans;
int bfs(int N, int K)
{
	queue<int> q;
	vector<int> visit(100001, -1);
	int dx[3] = {0, 1, -1};
	int cnt = 0;
	
	q.push(N);
	visit[N] = 0;
	while (!q.empty()) {
		int idx = q.front();
		dx[0] = idx;
		for (int i = 0; i < 3; i++) {
			int next = idx + dx[i];
			if ((0 <= next && next <= 100000)) {
				if (visit[next] == -1) {
					visit[next] = visit[idx] + 1;
					q.push(next);
				}
			}
		}
		q.pop();
	}
	return visit[K];
}

int main()
{
	FAST;
	int N, K;

	cin >> N >> K;
	cout << bfs(N, K) << '\n';
	
	return 0;
}