#include <iostream>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	int arr[101][10] = {{0, }};
	fill(arr[1], arr[1] + 10, 1);
	arr[1][0] = 0;
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0)
				arr[i][0] = arr[i-1][1];
			else if (j == 9)
				arr[i][9] = arr[i-1][8];
			else {
				arr[i][j] = (arr[i-1][j-1] + arr[i-1][j+1]) % 1000000000;
			}
		}
	}
	int res = 0;
	for (int i = 0; i < 10; i++) {
		res = (res + arr[N][i]) % 1000000000;
	}
	cout << res;
	return 0;
}
