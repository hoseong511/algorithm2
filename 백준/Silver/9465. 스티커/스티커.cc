#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

inline int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	FAST;
	int N, T;
	int arr[3][100001] = {{0, }, {0, }, {0, }};
	cin >> T;
	for (int k = 0; k < T; k++) {
		cin >> N;
		for (int i = 1; i <= 2; i++) {
			for (int j = 1; j <= N; j++) {
				cin >> arr[i][j];
			}
		}
		arr[1][2] = arr[1][2] + arr[2][1];
		arr[2][2] = arr[2][2] + arr[1][1];
		for (int i = 3; i <= N; i++) {
			arr[1][i] = arr[1][i] + max(arr[2][i - 1], arr[2][i - 2]);
			arr[2][i] = arr[2][i] + max(arr[1][i - 1], arr[1][i - 2]);
		}
		cout << max(arr[1][N], arr[2][N]) << '\n';
	}
	return 0;
}