#include <iostream>
#include <vector>

#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, M, K;
	int res = 0;
	vector<int> data;

	cin >> N >> M >> K;
	data.assign(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> data[i];
	}
	sort(data.begin(), data.end(), [](int a, int b){ return a > b; });
	while (true) {
		if (M <= 0)
			break ;
		if (M - K >= 0) {
			res += data[0] * K;
		} else {
			res += data[0] * M;
		}
		M -= K;
		if (M <= 0)
			break ;
		res += data[1];
		M--;
	}
	cout << res << '\n';
	return 0;
}