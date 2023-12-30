#include <iostream>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
#define MOD 10007
using namespace std;
int main()
{
	int N;
	int arr[1001][10] = {{0, }, };
	fill(arr[1], arr[1] + 10, 1);
	cin >> N;
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				arr[i][j] += arr[i-1][k];
				arr[i][j] %= MOD;
			}
		}
	}
	int res = 0;
	for (int i = 0; i < 10; i++) {
		res += arr[N][i];
		res %= MOD;
	}
	cout << res;
	return 0;
}