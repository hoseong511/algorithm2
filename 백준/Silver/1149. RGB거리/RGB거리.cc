#include <iostream>
#include <vector>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int arr[1001][3] = {{0, }, };
	int N, input;
	vector<vector<int>> data;

	cin >> N;
	data.assign(N + 1, {0, 0, 0});
	for (int i = 1; i < N + 1; i++) {
		cin >> data[i][0] >> data[i][1] >> data[i][2];
		for (int j = 0; i == 1 && j < 3; j++)
			arr[1][j] = data[1][j];
	}
	for (int i = 2; i < N + 1; i++) {
		arr[i][0] = data[i][0] + min(arr[i - 1][1], arr[i - 1][2]);
		arr[i][1] = data[i][1] + min(arr[i - 1][0], arr[i - 1][2]);
		arr[i][2] = data[i][2] + min(arr[i - 1][0], arr[i - 1][1]);
	}
	cout << *min_element(arr[N], arr[N] + 3);
	return 0;
}